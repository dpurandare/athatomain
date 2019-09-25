/*
 * File: ConfigIO.h
 * Created Date: Saturday April 5th 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Saturday April 5th 2014 5:17:02 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on April 5, 2014, 4:56 PM
 */

#ifndef CONFIGIO_H
#define	CONFIGIO_H
#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <fstream>
using namespace std;

class ConfigIO {
public:
    ConfigIO();
    ConfigIO(const ConfigIO& orig);
    virtual ~ConfigIO();
private:

private:
    std::map<std::string, std::string> contents;
    std::string fName;
    void removeComment(std::string &line) const;
    bool onlyWhitespace(const std::string &line) const;
    bool validLine(const std::string &line) const;
    void extractKey(std::string &key, size_t const &sepPos, const std::string &line) const;
    void extractValue(std::string &value, size_t const &sepPos, const std::string &line) const;
    void extractContents(const std::string &line);
    void parseLine(const std::string &line, size_t const lineNo);
    void ExtractKeys();
        
public:
    ConfigIO(const std::string &fName);
    bool keyExists(const std::string &key) const;
    const std::string getValueOfKey(const std::string &key);    
};

#endif	/* CONFIGIO_H */

