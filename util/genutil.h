/*
 * File: genutil.h
 * Created Date: Sunday April 20th 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday April 20th 2014 8:18:15 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on March 4, 2014, 12:29 AM
 */

#ifndef GENUTIL_H
#define	GENUTIL_H
#include "../global.h"
#include <string>
#include <sstream>
#include <list>
#include "../ast/CobFieldRecord.h"

using namespace std;

extern CobDataDivision * currentdiv;

string gen_id(struct idvalStru * pid);
string gen_idlist(void * plst);
string gen_subscript_list(void * plst);
string gen_subscript(struct _subscript_item * pitem);
string gen_op(int pop);
string gen_value(struct valueType * pval, bool printprimitive = true);
string gen_valueformat(struct valueType * pval);
string gen_valueformatXval(struct xvaldata * pval);
string gen_valueformatStr(int ptype);
string gen_special_literal(int pval);
string gen_xval(struct xvaldata * pxval);

string gen_condition(struct _condition * pcond);
string gen_combinable_condition(struct _combinable_condition * pcombcond);
string gen_comb_abri_cond_list(struct _comb_abbr_cond_list * plst, struct _combinable_condition * pcombcond);
string gen_simple_condition(struct _simple_condition * psimpcond);
string gen_88type_condition(struct idvalStru * pid);
string gen_comb_abri_cond(struct _combinable_abbrivated_condition * pitem, struct _combinable_condition * pcombcond);
string gen_abbrivation_rest(struct _abbriviation_rest * pitem, struct _combinable_condition * pcombcond);
string gen_combcond_lvalue(struct _combinable_condition * pcombcond);
string gen_arithmetic_expression(struct _arithmetic_expression * paeitem);
string gen_relational_condition(struct _relational_condition * prelcond);
string gen_simple_relation(struct _relational_condition * prelcond);
string gen_op(int pop);
string gen_rel_op(int pop);
string gen_implicit(struct idvalStru * pid, struct xvaldata * pfromimpfn);

bool isStringType(struct _arithmetic_expression * paeitem);
bool is_88field(char * pidstr);
bool is_groupfield(char * pidstr);
// used in SET 
CobFieldRecord * getFieldfromXval(struct xvaldata * pval);
CobFieldRecord * getFieldFromGname(struct valueType * pval);
// used in the MOVE statement
int mangleSpecialDataType(int pdatatype);


char * removeQuotes(struct xvaldata * pxval);
string getDataTypeStr(int ptype);

string gen_idarithm(struct idvalStru * pid);
string gen_arithmaticqty(struct xvaldata * pxval);

string gen_tmpfrom_xvallst(void * plst, string tag, int pcount);
int get_xval_datatype(struct xvaldata * pxval);
#endif	/* GENUTIL_H */

