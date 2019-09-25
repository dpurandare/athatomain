/*
 * File: Analyzer.h
 * Created Date: Monday September 8th 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Monday September 8th 2014 11:40:33 am
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on September 8, 2014, 11:40 AM
 */

#ifndef ANALYZER_H
#define	ANALYZER_H
#include "../ast/CobProject.h"
#include "../global.h"
#include "pugixml.hpp"

class Analyzer {
public:
    Analyzer(CobProject * pprj);
    bool analyze();
    virtual ~Analyzer();
private:
    string xmlFileName;
    CobProject * prj = NULL;
    pugi::xml_document doc;
    
    // private functions that are not required from outsize. 
    void proc_files(pugi::xml_node &parent, void * plst);
    void proc_identification_div(pugi::xml_node &parent, CobIdentificationDivision * piddev);
    void proc_function_div(pugi::xml_node &parent, CobFunctionDivision * pfndev);
    void proc_environment_div(pugi::xml_node &parent, CobEnvironmentDivision * penvdiv);
    void proc_data_div(pugi::xml_node &parent, CobDataDivision * pdatadiv);
    void proc_procedure_div(pugi::xml_node &parent, CobProcedureDivision * pprocdiv);
    void proc_ucr(pugi::xml_node &parent, struct _use_chain_return * ucr);
    
    void proc_file_section(pugi::xml_node &parent, CobFileSection * pfilesec);
    void proc_file_description(pugi::xml_node &parent, CobFileDescription * pfiledescr);
    void proc_field_recordlist(pugi::xml_node &parent, CobFieldRecordList * precordlst );
    void proc_field_record(pugi::xml_node &parent, CobFieldRecord * pfield);
    void proc_workingstorage_section(pugi::xml_node &parent, CobWorkingStorageSection * pworkstoragesec);
    void proc_localstorage_section(pugi::xml_node &parent, CobLocalStorageSection * plocstoragesec);
    void proc_linkage_section(pugi::xml_node &parent, CobLinkageSection *plinkagesec);
    void proc_screen_section(pugi::xml_node &parent, CobScreenSection * pscreensec);
    void proc_communication_section(pugi::xml_node &parent, CobCommunicationSection *pcommsec);

};

#endif	/* ANALYZER_H */

