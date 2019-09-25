/*
 * File: ConfigIO.cpp
 * Created Date: Tuesday August 26th 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Tuesday August 26th 2014 3:07:20 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on April 5, 2014, 4:56 PM
 */

#include "ConfigIO.h"
#include <stdlib.h>
void exitWithError(const std::string &error);

ConfigIO::ConfigIO() {
}

ConfigIO::ConfigIO(const ConfigIO& orig) {
}

ConfigIO::~ConfigIO() {
    // nothing to free. 
}

void exitWithError(const std::string &error) 
{
	std::cout << error;
	std::cin.ignore();
	std::cin.get();

	exit(EXIT_FAILURE);
}
void ConfigIO::removeComment(std::string &line) const
{
    if (line.find(';') != line.npos)
        line.erase(line.find(';'));
}
bool ConfigIO::onlyWhitespace(const std::string &line) const
{
    return (line.find_first_not_of(' ') == line.npos);
}
bool ConfigIO::validLine(const std::string &line) const
{
    std::string temp = line;
    temp.erase(0, temp.find_first_not_of("\t "));
    if (temp[0] == '=')
        return false;

    for (size_t i = temp.find('=') + 1; i < temp.length(); i++)
        if (temp[i] != ' ')
            return true;
    return false;
}

void ConfigIO::extractKey(std::string &key, size_t const &sepPos, const std::string &line) const
{
    key = line.substr(0, sepPos);
    if (key.find('\t') != line.npos || key.find(' ') != line.npos)
        key.erase(key.find_first_of("\t "));
}
void ConfigIO::extractValue(std::string &value, size_t const &sepPos, const std::string &line) const
{
    const char * str = line.c_str();
    value = line.substr(sepPos + 1);
    //std::cout << "... value " << value << "\n";
    value.erase(0, value.find_first_not_of('\"'));
    //std::cout << "... value " << value << "\n";
    value.erase(value.find_last_not_of('\"')+1);
    //std::cout << "... value " << value << "\n";
}

void ConfigIO::extractContents(const std::string &line) 
{
        std::string temp = line;
        temp.erase(0, temp.find_first_not_of("\t\" "));
        size_t sepPos = temp.find('=');

        std::string key, value;
        extractKey(key, sepPos, temp);
        extractValue(value, sepPos, temp);

        if (!keyExists(key))
                contents.insert(std::pair<std::string, std::string>(key, value));
        else
                exitWithError("CFG: Can only have unique key names!\n");
}

void ConfigIO::parseLine(const std::string &line, size_t const lineNo)
{
        if (line.find('=') == line.npos)
                exitWithError("CFG: Couldn't find separator on line: " +line + "\n");

        if (!validLine(line))
                exitWithError("CFG: Bad format for line: " + line + "\n");

        extractContents(line);
}
void ConfigIO::ExtractKeys()
{
        std::ifstream file;
        file.open(fName.c_str());
        if (!file)
                exitWithError("CFG: File " + fName + " couldn't be found!\n");

        std::string line;
        size_t lineNo = 0;
        while (std::getline(file, line))
        {
                lineNo++;
                std::string temp = line;

                if (temp.empty())
                        continue;

                removeComment(temp);
                if (onlyWhitespace(temp))
                        continue;

                parseLine(temp, lineNo);
        }

        file.close();
}

ConfigIO::ConfigIO(const std::string &fName)
{
    this->fName = fName;
    ExtractKeys();
}
bool ConfigIO::keyExists(const std::string &key) const
{
    return contents.find(key) != contents.end();
}
const std::string ConfigIO::getValueOfKey(const std::string &key){
    if (!keyExists(key))
            return std::string();

    //return Convert::string_to_T<ValueType>(contents.find(key)->second);
    return contents.find(key)->second;
}
