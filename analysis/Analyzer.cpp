/*
 * File: Analyzer.cpp
 * Created Date: Monday September 8th 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Monday September 8th 2014 11:40:34 am
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on September 8, 2014, 11:40 AM
 */

#include "Analyzer.h"
#include <list>

extern CobDataDivision * currentdiv;

Analyzer::Analyzer(CobProject * pprj) {
    prj = pprj;
    xmlFileName = getTargetPath();
    xmlFileName.append("/");
    xmlFileName.append("analysis.xml");
}
bool Analyzer::analyze(){
    // document and top level node.
    if(prj == NULL) {
        cout << "Cannot analyze empty project. Possible Parse error.\n";
        return false;
    }
    doc.set_name("ANALYSIS_REPORT");
    pugi::xml_node xnode = doc.append_child(pugi::node_comment);    
    xnode.set_value("Athato COBOL Analysis XML: copyright Athato 2014. All rights reserved.");
    
    pugi::xml_node pnode = doc.append_child(pugi::node_element);
    pnode.set_name("Project");
    pugi::xml_attribute attr =  pnode.append_attribute("name");
    attr.set_value(prj->projectname.c_str());
    
    // files
    list<void *> * lstcobFiles = (list<void *> *) prj->getFileList();
    proc_files(pnode, lstcobFiles);
    
    doc.save_file(xmlFileName.c_str(), PUGIXML_TEXT("\t"), pugi::format_default, pugi::encoding_utf8);
    cout << "Generated analysis xml : " << xmlFileName << "\n";
    return true;
}
void Analyzer::proc_files(pugi::xml_node &parent, void * plst){
    list<void *> * lst_cobFiles = (list<void *> *) plst;
    list<void *>::iterator i;
    for(i = lst_cobFiles->begin(); i != lst_cobFiles->end(); ++i ){
        CobFile * lfile = (CobFile *)(*i);
        CobIdentificationDivision * iddiv = NULL;
        CobFunctionDivision *fndiv = NULL;
        CobEnvironmentDivision * envdiv = NULL;
        CobDataDivision *datadiv = NULL;
        CobProcedureDivision * procdiv = NULL;
        const char * fileName;
        if(lfile){
            iddiv = lfile->getCobIdentificationDivision();
            fndiv = lfile->getFunctionDivision();
            envdiv = lfile->getCobEnvDivision();
            datadiv = lfile->getDataDivision();
            // The data division needed for the subsequent operations. 
            currentdiv = datadiv;
            procdiv = lfile->getProcedureDivision();
            if(iddiv){
                fileName = iddiv->getFileName();
            } else if(fndiv) {                
                fileName = fndiv->getFileName();
            }
        }
        const char * programName = (lfile->getName()).c_str();
        pugi::xml_node filenode = parent.append_child(pugi::node_element);
        filenode.set_name("FILE");
        pugi::xml_attribute fileattr = filenode.append_attribute("name");
        fileattr.set_value(fileName);
        pugi::xml_attribute prgnameattr = filenode.append_attribute("program");
        prgnameattr.set_value(programName);
        // call the xml gen on the components.
        proc_identification_div(filenode, iddiv);
        proc_function_div(filenode, fndiv);
        proc_environment_div(filenode, envdiv);
        proc_data_div(filenode, datadiv);
        proc_procedure_div(filenode, procdiv);
        // do the same for the nested files. make sure that 
        if(lfile->getNestedProgramList() != NULL){
            proc_files(parent, lfile->getNestedProgramList());
        }
    }
}
void Analyzer::proc_identification_div(pugi::xml_node &parent, CobIdentificationDivision * piddev){
    if(piddev == NULL) return;
    
    pugi::xml_node idnode = parent.append_child(pugi::node_element);
    idnode.set_name("IdentificationDivision");
    if( ! piddev->getProgramName().empty()){
        pugi::xml_node prgnode = idnode.append_child(pugi::node_element);
        prgnode.set_name("ProgramName");
        pugi::xml_attribute prgname = prgnode.append_attribute("Name");
        prgname.set_value(piddev->getProgramName().c_str());        
    }
    if( ! piddev->getAuthorName().empty()) {
        pugi::xml_node authnode = idnode.append_child(pugi::node_element);
        authnode.set_name("Author");
        pugi::xml_attribute authname = authnode.append_attribute("Name");
        authname.set_value(piddev->getAuthorName().c_str());
    }
}
void Analyzer::proc_function_div(pugi::xml_node &parent, CobFunctionDivision * pfndev){
    if(pfndev == NULL) return;
    
    pugi::xml_node fnnode = parent.append_child(pugi::node_element);
    fnnode.set_name("FunctionDiv");
    // TBD
}
void Analyzer::proc_environment_div(pugi::xml_node &parent, CobEnvironmentDivision * penvdiv){
    if(penvdiv == NULL) return;
    
    pugi::xml_node envnode = parent.append_child(pugi::node_element);
    envnode.set_name("EnvironmentDiv");
    // TBD
    //penvdiv->getConfigSection();
    CobInputOutputSection * inpoutsec = penvdiv->getInputOutputSection();
    if(inpoutsec != NULL){
        pugi::xml_node inpoutsecnode = envnode.append_child(pugi::node_element);
        inpoutsecnode.set_name("InputOutputSec");
        CobFileControl * filecontrol = inpoutsec->getFileControl();
        if(filecontrol != NULL) {
            pugi::xml_node filectrlnode = inpoutsecnode.append_child(pugi::node_element);
            filectrlnode.set_name("FileContril");            
            list <void *> * fileCtrlExprLst = (list <void *> *)filecontrol->getFileControlExprList();
            if(fileCtrlExprLst != NULL) {
                list <void *>::iterator i;
                for(i = fileCtrlExprLst->begin(); i != fileCtrlExprLst->end(); ++i ){    
                    struct _file_control_expression * fcitem = (struct _file_control_expression *)(*i);
                    if(fcitem != NULL){
                        pugi::xml_node filenode = filectrlnode.append_child(pugi::node_element);
                        filenode.set_name("File");
                        filenode.append_attribute("Name").set_value(fcitem->filename);
                        filenode.append_attribute("Optional").set_value(((fcitem->optionalflag) ? "True" : "False"));
                        // TODO
                        if(fcitem->fcclist != NULL) {
                            list <void *> * lst = (list <void *> *)fcitem->fcclist;
                            list <void *>::iterator i;
                            for(i = lst->begin(); i != lst->end(); ++i ){
                                struct _file_control_clause * item = (struct _file_control_clause *)(*i);
                                if(item != NULL) {
                                    switch(item->type){
                                        case CB_FCC_ASSIGN:
                                            if(item->file_assignment_clause->ival == 0) {
                                                // file and opt file
                                                if(item->file_assignment_clause->first != NULL){
                                                    string tmp = value_string(item->file_assignment_clause->first);
                                                    filenode.append_attribute("AssignTo").set_value(tmp.c_str());
                                                }
                                                if(item->file_assignment_clause->second != NULL){
                                                    string tmp = value_string(item->file_assignment_clause->second);
                                                    filenode.append_attribute("OptTo").set_value(tmp.c_str());
                                                }
                                            } else {
                                                string tmp = dump_device_file_name(item->file_assignment_clause->ival);
                                                filenode.append_attribute("Device").set_value(tmp.c_str());
                                            }
                                            break;
                                        case CB_FCC_ORG: {
                                            string tmp = dump_organization_clause(item->organization_clause);
                                            filenode.append_attribute("Organization").set_value(tmp.c_str());
                                            break;
                                        }
                                        case CB_FCC_ACCESS: {
                                            if(item->access_mode_clause != NULL){
                                                filenode.append_attribute("AccessMode").set_value(item->access_mode_clause->pival);
                                            }
                                            break;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

void Analyzer::proc_data_div(pugi::xml_node &parent, CobDataDivision * pdatadiv){
    if(pdatadiv == NULL) return;    
    pugi::xml_node datanode = parent.append_child(pugi::node_element);
    datanode.set_name("DataDiv");
    CobFileSection * filesection = pdatadiv->getFileSection();
    CobWorkingStorageSection * workingsection = pdatadiv->getWorkingStorageSection();
    CobLinkageSection * linkagesection = pdatadiv->getLinkageSection();
    CobLocalStorageSection * localstoragesection = pdatadiv->getLocalStorageSection();
    CobCommunicationSection * commsection = pdatadiv->getCommunicationSection();
    CobScreenSection * screensection = pdatadiv->getScreenSection();
    proc_file_section(datanode, filesection);
    proc_workingstorage_section(datanode, workingsection);
    proc_localstorage_section(datanode, localstoragesection);
    proc_linkage_section(datanode, linkagesection);
    proc_communication_section(datanode, commsection);
    proc_screen_section(datanode, screensection);
}

void Analyzer::proc_procedure_div(pugi::xml_node &parent, CobProcedureDivision * pprocdiv){
    if(pprocdiv == NULL) return;
    pugi::xml_node procnode = parent.append_child(pugi::node_element);
    procnode.set_name("ProcedureDiv");    
        
    struct _use_chain_return * ucr = pprocdiv->getUCR();
    if(ucr != NULL){
        pugi::xml_node ucrnode = procnode.append_child(pugi::node_element);
        ucrnode.set_name("UCR");
        proc_ucr(ucrnode, ucr);
    }
    CobDeclaratives * procDeclarative = pprocdiv->getDeclaratives();
    if(procDeclarative != NULL) {
        pugi::xml_node declarativenode = procnode.append_child(pugi::node_element);
        declarativenode.set_name("Declarative");
        CobProcDivItem * procDivItem = procDeclarative->getProcDivItem();
        if(procDivItem != NULL) {
            procDivItem->proc_xml(declarativenode);
        }
    }
    CobProcDivItem * procDivItem =  pprocdiv->getProcDivItem();
    if(procDivItem != NULL){
        pugi::xml_node procitemsnode = procnode.append_child(pugi::node_element);
        procitemsnode.set_name("procitems");
        procDivItem->proc_xml(procitemsnode);
    }
}

void Analyzer::proc_ucr(pugi::xml_node &parent, struct _use_chain_return * ucr){
    void * useclause = ucr->useclause;
    if(useclause){
        pugi::xml_node useclausenode = parent.append_child(pugi::node_element);
        useclausenode.set_name("useingclause");
        // TODO
    }
    void * chainclause = ucr->chainclause;
    if(chainclause){
        pugi::xml_node chainclausenode = parent.append_child(pugi::node_element);
        chainclausenode.set_name("chainingclause");
        // TODO
    }
    void * returningclause = ucr->returning;
    if(returningclause) {
        pugi::xml_node returningclausenode = parent.append_child(pugi::node_element);
        returningclausenode.set_name("returningclause");
        // TODO
    }
}

void Analyzer::proc_file_section(pugi::xml_node &parent, CobFileSection * pfilesec){
    if(pfilesec == NULL) return;

    pugi::xml_node filesecnode = parent.append_child(pugi::node_element);
    filesecnode.set_name("FileSection");
    
    list <CobFileDescription *> * fdlst = (list <CobFileDescription *> *)pfilesec->getFDList();
    list <CobFileDescription *> * sdlst = (list <CobFileDescription *> *)pfilesec->getSDList();
    
    if(fdlst != NULL) {
        pugi::xml_node filedescrnode = filesecnode.append_child(pugi::node_element);
        filedescrnode.set_name("FDList");
        list <CobFileDescription *>::iterator i;
        for(i = fdlst->begin(); i != fdlst->end(); ++i) {
            CobFileDescription * filedescr = (CobFileDescription *)(*i);
            proc_file_description(filedescrnode, filedescr);
        }
    }
    if(sdlst != NULL) {
        pugi::xml_node softdescrnode = filesecnode.append_child(pugi::node_element);
        softdescrnode.set_name("SDList");
        list <CobFileDescription *>::iterator i;
        for(i = sdlst->begin(); i != sdlst->end(); ++i) {
            CobFileDescription * filedescr = (CobFileDescription *)(*i);
            proc_file_description(softdescrnode, filedescr);
        }
    }
}
void Analyzer::proc_file_description(pugi::xml_node &parent, CobFileDescription * pfiledescr) {
    if(pfiledescr == NULL) return;
    
    string fdsdname = pfiledescr->getFDSDName();
    pugi::xml_node fdsditemnode = parent.append_child(pugi::node_element);
    fdsditemnode.set_name("FDSDItem");
    
    pugi::xml_attribute fdsdnamename = fdsditemnode.append_attribute("Name"); 
    fdsdnamename.set_value(fdsdname.c_str());        
    // TODO set the options
    
    // dumping the fields
    CobFieldRecordList * fldlst = pfiledescr->getFieldRecordList();
    proc_field_recordlist(fdsditemnode, fldlst);
}

void Analyzer::proc_field_recordlist(pugi::xml_node &parent, CobFieldRecordList * precordlst ){
    if(precordlst == NULL) return;
    pugi::xml_node listnode = parent.append_child(pugi::node_element);
    listnode.set_name("Fields");
    list <CobFieldRecord *>::iterator i;
    list <CobFieldRecord *> * fldlst = (list <CobFieldRecord *> * )precordlst->getFieldRecordList();
    for(i = fldlst->begin(); i != fldlst->end(); ++i){
        CobFieldRecord * item = (*i);
        proc_field_record(listnode, item);
    }
}
void Analyzer::proc_field_record(pugi::xml_node &parent, CobFieldRecord * pfield){
    // add the field 
    pugi::xml_node fldnode = parent.append_child(pugi::node_element);
    fldnode.set_name("Field");
//    pugi::xml_attribute attname = fldnode.append_attribute("Name").set_value(pfield->recordname);
    fldnode.append_attribute("Name").set_value(pfield->recordname);
    fldnode.append_attribute("DataType").set_value(pfield->dataType);
//    fldnode.append_attribute("Length").set_value(pfield->length);
    if(pfield->picinfo){
        if(pfield->picinfo->orig)
            fldnode.append_attribute("Picture").set_value(pfield->picinfo->orig);
        fldnode.append_attribute("Pic_len").set_value(pfield->picinfo->lenstr);
        fldnode.append_attribute("Pic_size").set_value(pfield->picinfo->size);
        fldnode.append_attribute("Pic_scale").set_value(pfield->picinfo->scale);
        int lcategory = (int)pfield->picinfo->category;
        fldnode.append_attribute("Pic_category").set_value(lcategory);
    }
    //pfield->recordname
    // add it's children
    list <CobFieldRecord *>::iterator i;
    list <CobFieldRecord *> * fldlst = (list <CobFieldRecord *> * ) pfield->children;
    if(fldlst != NULL){
        for(i = fldlst->begin(); i != fldlst->end(); ++i){
            CobFieldRecord * item = (*i);
            proc_field_record(fldnode, item);
        }
    }
}
void Analyzer::proc_workingstorage_section(pugi::xml_node &parent, CobWorkingStorageSection * pworkstoragesec){
    if(pworkstoragesec == NULL) return;
    pugi::xml_node worksecnode = parent.append_child(pugi::node_element);
    worksecnode.set_name("WorkingStorageSection");
    CobFieldRecordList * fldreclst = pworkstoragesec->getRecordList();
    proc_field_recordlist(worksecnode, fldreclst);
}
void Analyzer::proc_localstorage_section(pugi::xml_node &parent, CobLocalStorageSection * plocstoragesec){
    if(plocstoragesec == NULL) return;
    pugi::xml_node locstoragenode = parent.append_child(pugi::node_element);
    locstoragenode.set_name("LocalStorageSection");
    CobFieldRecordList * fldreclst = plocstoragesec->getRecordList();
    proc_field_recordlist(locstoragenode, fldreclst);    
}
void Analyzer::proc_linkage_section(pugi::xml_node &parent, CobLinkageSection *plinkagesec){
    if(plinkagesec == NULL) return;
    pugi::xml_node linkagesecnode = parent.append_child(pugi::node_element);
    linkagesecnode.set_name("LinkageSection");
    CobFieldRecordList * fldreclst = plinkagesec->getRecordList();
    proc_field_recordlist(linkagesecnode, fldreclst);        
}
void Analyzer::proc_screen_section(pugi::xml_node &parent, CobScreenSection * pscreensec){
    if(pscreensec == NULL) return;
    pugi::xml_node screensecnode = parent.append_child(pugi::node_element);
    screensecnode.set_name("ScreenSection");
    //TODO
    pugi::xml_node xnode = screensecnode.append_child(pugi::node_comment);    
    xnode.set_value("Yet to be implemented.");
}
void Analyzer::proc_communication_section(pugi::xml_node &parent, CobCommunicationSection *pcommsec){
    if(pcommsec == NULL) return;
    pugi::xml_node commsecnode = parent.append_child(pugi::node_element);
    commsecnode.set_name("CommunicationSection");
    //TODO
    pugi::xml_node xnode = commsecnode.append_child(pugi::node_comment);    
    xnode.set_value("Yet to be implemented.");
}

Analyzer::~Analyzer() {
}

/*
 SET
 ISELSE
 EVALUATE
 PERFORM
 SEARCH
 READ
 WRITE
 */