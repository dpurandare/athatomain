/*
 * File: CobStmtAccept.cpp
 * Created Date: Sunday August 31st 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday August 31st 2014 4:41:44 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on December 25, 2013, 9:12 PM
 */

#include "CobStmtAccept.h"
#include "../util/genutil.h"

CobStmtAccept::CobStmtAccept() {
}

CobStmtAccept::CobStmtAccept(int                        ptype,
                            struct idvalStru *         pid,
                            struct xvaldata  *         pfrom,
                            void *                     paccept_item_list,
                            struct _esc_excep_action * pesc,
                            int                        pmsg_count,
                            struct _at_clause_accept * pat){
    type = ptype;
    id = pid;
    fromid = pfrom;
    accept_item_list = (list <struct _accept_item *> *)paccept_item_list;
    esc_excp = pesc;
    msg_count = pmsg_count;
    at_clause = pat;    
}
    
void CobStmtAccept::dump(){
}
void CobStmtAccept::dump(int plevel){
    string tabstr = "";    
    for(int i = 0; i < plevel; i++) tabstr.append("    ");
    cout << tabstr << "Accept \n";    
}
CobStmtAccept::CobStmtAccept(const CobStmtAccept& orig) {
}
void CobStmtAccept::gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
         JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s){
    string tabstr = "";    
    for(int i = 0; i < plevel; i++) tabstr.append("    ");
    stringstream t;
    t << tabstr << "// Accept statement";
    pmethod->addStatement(t.str());
    t.str(string()); t.clear();
    
    switch(type){
    case CB_ACCEPT_SYS_IMP: {
        // ACCEPT 
        //id
        //fromid : 
        switch(fromid->type) {
        case CB_IDENTIFIER: {
            t << tabstr << "BufferedReader consoleIn = new BufferedReader(new InputStreamReader(System.in));";
            pmethod->addStatement(t.str(), true, JMetaMethod::CC_ACCEPT_READ);
            t.str(string()); t.clear();
            
            pmethod->addException(JMetaMethod::CC_IOException);
            
            // assumed that the identifier is qualified field. 
            t << tabstr << "char [] cbuf = new char[120];";
            pmethod->addStatement(t.str(), true, JMetaMethod::CC_ACCEPT_BUF);
            t.str(string()); t.clear();

            t << tabstr << "consoleIn.read(cbuf, 0, " << gen_id(id) << ".length);";
            pmethod->addStatement(t.str());
            t.str(string()); t.clear();

            // when the read value length is less that the length provided, the new line 
            // character gets added to the buffer and that causes problem in the data conversion
            // this can be handled using following options:
//            int i = 0; while(i < UserInput.length && cbuf[i] != '\n' & cbuf[i] != '\0') i++;
//            if(i <= UserInput.length) cbuf[i] = '\0';
//            //if(cbuf[UserInput.length -1] == '\n') cbuf[UserInput.length -1] = '\0';


            t << tabstr << gen_id(id) << ".setVal(new String(cbuf, 0, " << gen_id(id) <<  ".length));";
            pmethod->addStatement(t.str());
            t.str(string()); t.clear();
            
            t << tabstr << "consoleIn.readLine();";
            pmethod->addStatement(t.str());
            t.str(string()); t.clear();
            break;
        }
        case CB_IMPLICIT:
            pclass->addextInclude("com.athato.util.*");
            t << tabstr << gen_implicit(id, fromid);
            pmethod->addStatement(t.str());
            t.str(string()); t.clear();
            break;
        default:
            cerr << "Error - Accept: wrong type of the xval.\n";
            break;
        }
        break;
    }
    case CB_ACCEPT_TERM: {
        if(accept_item_list != NULL) {
            list<struct _accept_item *>::iterator i;
            for(i = accept_item_list->begin(); i != accept_item_list->end(); ++i) {
                struct _accept_item * item = (struct _accept_item *)(*i);
                if(item != NULL){
                    struct xvaldata * idunit = item->val;
                    struct _with_clause_2 * wcitem =  item->with2val;

                    stringstream formatstr, datastr;
                    struct idvalStru * id = idunit->identifier;
                    
                    if(idunit->type == CB_ID_UNITVAL) {
                        // don't know the semantics of UNIT. Implement... later. 
                        //idunit->litval
                    } 
                    if(id != NULL){                        
                        t << tabstr << "BufferedReader consoleIn = new BufferedReader(new InputStreamReader(System.in));";
                        pmethod->addStatement(t.str(), true, JMetaMethod::CC_ACCEPT_READ);
                        t.str(string()); t.clear();

                        pmethod->addException(JMetaMethod::CC_IOException);

                        // assumed that the identifier is qualified field. 
                        t << tabstr << "char [] cbuf = new char[120];";
                        pmethod->addStatement(t.str(), true, JMetaMethod::CC_ACCEPT_BUF);
                        t.str(string()); t.clear();

                        t << tabstr << "consoleIn.read(cbuf, 0, " << gen_id(id) << ".length);";
                        pmethod->addStatement(t.str());
                        t.str(string()); t.clear();

//                        t << tabstr << gen_id(id) << ".valueStr = " << "new String(cbuf);";
                        t << tabstr << gen_id(id) << ".setVal(new String(cbuf, 0, " << gen_id(id) <<  ".length));";
                        pmethod->addStatement(t.str());
                        t.str(string()); t.clear();

                        t << tabstr << "consoleIn.readLine();";
                        pmethod->addStatement(t.str());
                        t.str(string()); t.clear();
                    }
                    if(wcitem != NULL){
                        t << tabstr << "// (XXX: 202-YTI) ";
                        if(wcitem->pos != NULL) {
                            t << gen_position(wcitem->pos);
                            
                        } else {
                            t << gen_withitem(wcitem->withenum, wcitem->val);
                        }
                        pmethod->addStatement(t.str());
                        t.str(string()); t.clear();
                    }
                }
            }
        }
        break;
    }
    case CB_ACCEPT_MSG:
        t << tabstr << "// (XXX: 201-YTI) ";
        pmethod->addStatement(t.str());
        t.str(string()); t.clear();
        break;
    case CB_ACCEPT_SCREEN:
        // implement... this code used three places. take it out as function...
        if(id != NULL){                        
            t << tabstr << "BufferedReader consoleIn = new BufferedReader(new InputStreamReader(System.in));";
            pmethod->addStatement(t.str(), true, JMetaMethod::CC_ACCEPT_READ);
            t.str(string()); t.clear();

            pmethod->addException(JMetaMethod::CC_IOException);

            // assumed that the identifier is qualified field. 
            t << tabstr << "char [] cbuf = new char[120];";
            pmethod->addStatement(t.str(), true, JMetaMethod::CC_ACCEPT_BUF);
            t.str(string()); t.clear();

            t << tabstr << "consoleIn.read(cbuf, 0," << gen_id(id) << ".length());";
            pmethod->addStatement(t.str());
            t.str(string()); t.clear();

            t << tabstr << gen_id(id) << ".valueStr = " << "new String(cbuf);";
            pmethod->addStatement(t.str());
            t.str(string()); t.clear();
        }
        if(at_clause != NULL){
            t << tabstr << "// accept has some more qualifiers as follows.";
            pmethod->addStatement(t.str());
            t.str(string()); t.clear();
            t << tabstr << "// ";
            if(at_clause->line != NULL) t << "Line : " << gen_value(at_clause->line);
            if(at_clause->col != NULL) t << " | Column : " << gen_value(at_clause->col);
            pmethod->addStatement(t.str());
            t.str(string()); t.clear();
        }
        break;
    }
}
string CobStmtAccept::gen_position(struct _position_clause * ppos) {
    stringstream s; 
    if(ppos == NULL){ // NULL string will cause problems. 
        s << " ";
        return s.str();
    } 
    if(ppos->line != NULL) s << "Line : " << gen_value(ppos->line) ;
    if(ppos->col != NULL) s << " | Column : " << gen_value(ppos->col) ;
    if(ppos->position != NULL) s << " | Position : " << gen_value(ppos->position) ;
    return s.str();
}

string CobStmtAccept::gen_withitem(int pwenum, struct valueType * paddval){
    stringstream s;
    switch(pwenum){
        case CB_WC_AUTO:
            s << "CB_WC_AUTO"; break;
        case CB_WC_AUTO_SKIP:
            s << "CB_WC_AUTO_SKIP"; break;
        case CB_WC_NO_BEEP:
            s << "CB_WC_NO_BEEP"; break;
        case CB_WC_BEFORE_TIME: // gname
            s << "CB_WC_BEFORE_TIME : " << gen_value(paddval); break;
        case CB_WC_NO_BELL:
            s << "CB_WC_NO_BELL"; break;
        case CB_WC_BLANK:
            s << "CB_WC_BLANK"; break;
        case CB_WC_CONTROL:     // gname
            s << "CB_WC_CONTROL" << gen_value(paddval); break;
        case CB_WC_CONVERT:
            s << "CB_WC_CONVERT"; break;
        case CB_WC_CURSER:      // gname
            s << "CB_WC_CURSER" << gen_value(paddval); break;
        case CB_WC_ECHO:
            s << "CB_WC_ECHO"; break;
        case CB_WC_ERASE_EOL:
            s << "CB_WC_ERASE_EOL"; break;
        case CB_WC_ERASE_EOS:
            s << "CB_WC_ERASE_EOS"; break;
        case CB_WC_HIGH:
            s << "CB_WC_HIGH"; break;
        case CB_WC_HIGHLIGHT:
            s << "CB_WC_HIGHLIGHT"; break;
        case CB_WC_LOW:
            s << "CB_WC_LOW"; break;
        case CB_WC_LOWLIGHT:
            s << "CB_WC_LOWLIGHT"; break;
        case CB_WC_MODE_IS_BLOCK:
            s << "CB_WC_MODE_IS_BLOCK"; break;
        case CB_WC_OFF:
            s << "CB_WC_OFF"; break;
        case CB_WC_PROMPT_CHAR: // gname
            s << "CB_WC_PROMPT_CHAR" << gen_value(paddval); break;
        case CB_WC_REVERSE:
            s << "CB_WC_REVERSE"; break;
        case CB_WC_SECURE:
            s << "CB_WC_SECURE"; break;
        case CB_WC_SIZE:        // gname
            s << "CB_WC_SIZE" << gen_value(paddval) ; break;
        case CB_WC_TAB:
            s << "CB_WC_TAB"; break;
        case CB_WC_UPDATE:                    
            s << "CB_WC_UPDATE"; break;
    }
    return s.str();
}

void CobStmtAccept::proc_xml(pugi::xml_node parent){
    pugi::xml_node acceptnode = parent.append_child(pugi::node_element);
    acceptnode.set_name("accept_statement");
    
    pugi::xml_node typenode = acceptnode.append_child(pugi::node_element);
    typenode.set_name("type");
    pugi::xml_attribute typeattr = typenode.append_attribute("value");

    switch(type){
    case CB_ACCEPT_SYS_IMP: {
        typeattr.set_value("CB_ACCEPT_SYS_IMP");        
        pugi::xml_node idnode = acceptnode.append_child(pugi::node_element);
        idnode.set_name("id");
        pugi::xml_attribute idattr = idnode.append_attribute("value");
        idattr.set_value(id->idStr);
        //fromid : 
        pugi::xml_node fromnode = acceptnode.append_child(pugi::node_element);
        fromnode.set_name("from");
        pugi::xml_attribute fromtype = fromnode.append_attribute("type");

        switch(fromid->type) {
        case CB_IDENTIFIER: {
            fromtype.set_value("identifier");
            fromnode.set_value(gen_xval(fromid).c_str());
            break;
        }
        case CB_IMPLICIT: {
            fromtype.set_value("implicit");
            pugi::xml_attribute fromdatatype = fromnode.append_attribute("xval");
            fromdatatype.set_value(fromid->type);
            fromnode.set_value(gen_xval(fromid).c_str());
            break;
        }
        default:
            break;
        }
        break;
    }
    case CB_ACCEPT_TERM: {
        if(accept_item_list != NULL) {
            typeattr.set_value("CB_ACCEPT_TERM");        

            list<struct _accept_item *>::iterator i;
            for(i = accept_item_list->begin(); i != accept_item_list->end(); ++i) {
                struct _accept_item * item = (struct _accept_item *)(*i);
                if(item != NULL){
                    pugi::xml_node acceptItemNode = acceptnode.append_child(pugi::node_element);
                    acceptItemNode.set_name("acceptItem");
                    
                    struct xvaldata * idunit = item->val;
                    struct _with_clause_2 * wcitem =  item->with2val;
                    struct idvalStru * id = idunit->identifier;
                    
                    if(id != NULL){ 
                        pugi::xml_node idNode = acceptItemNode.append_child(pugi::node_element);
                        idNode.set_name("id");
                        idNode.set_value(gen_id(id).c_str());
                    }
                    if(wcitem != NULL){
                        if(wcitem->pos != NULL) {
                            pugi::xml_node wcposnode = acceptItemNode.append_child(pugi::node_element);
                            wcposnode.set_name("withpos");
                            wcposnode.set_value(gen_position(wcitem->pos).c_str());
                        } else {
                            pugi::xml_node withitemnode = acceptItemNode.append_child(pugi::node_element);
                            withitemnode.set_name("withItem");
                            withitemnode.set_value(gen_withitem(wcitem->withenum, wcitem->val).c_str());
                        }
                    }
                }
            }
        }
        break;
    }
    case CB_ACCEPT_MSG: {
        typeattr.set_value("CB_ACCEPT_TERM");        
        break;
    }
    case CB_ACCEPT_SCREEN:
        typeattr.set_value("CB_ACCEPT_SCREEN");                
        // implement... this code used three places. take it out as function...
        if(id != NULL){                        
            pugi::xml_node idnode = acceptnode.append_child(pugi::node_element);
            idnode.set_name("id");
            pugi::xml_attribute idattr = idnode.append_attribute("value");
            idattr.set_value(gen_id(id).c_str());
        }
        if(at_clause != NULL){
            pugi::xml_node atnode = acceptnode.append_child(pugi::node_element);
            atnode.set_name("atpos");
            pugi::xml_attribute lineatt = atnode.append_attribute("line");
            lineatt.set_value(gen_value(at_clause->line).c_str());
            pugi::xml_attribute colatt = atnode.append_attribute("col");
            colatt.set_value(gen_value(at_clause->col).c_str());
        }
        break;
    }
}

CobStmtAccept::~CobStmtAccept() {
    if(id != NULL) delete_id(id);
    if(fromid != NULL) delete_xval(fromid);
    if(accept_item_list != NULL) {
        list<struct _accept_item *>::iterator i;  
        for(i = accept_item_list->begin(); i != accept_item_list->end(); ++i ){
            struct _accept_item * accept_item = ((struct _accept_item *)(*i));
            if(accept_item->val) delete_xval(accept_item->val);
            if(accept_item->with2val != NULL) {
                struct _position_clause * pos = accept_item->with2val->pos;
                if(pos != NULL){
                    if(pos->col != NULL) delete_value(pos->col);
                    if(pos->line != NULL) delete_value(pos->line);
                    if(pos->position != NULL) delete_value(pos->position);
                    delete pos;
                }
                delete accept_item->with2val;
            }
            delete accept_item;
        }
        delete accept_item_list;
    }
    delete_esc_excp_item(esc_excp);
    if(at_clause != NULL){
        if(at_clause->col != NULL) delete_value(at_clause->col);
        if(at_clause->line != NULL) delete_value(at_clause->line);
        delete at_clause;
    }
}

