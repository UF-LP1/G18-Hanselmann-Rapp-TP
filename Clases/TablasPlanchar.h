/**
 * Project Untitled
 */


#ifndef _TABLASPLANCHAR_H
#define _TABLASPLANCHAR_H

#include "Bazar.h"


class TablasPlanchar: public Bazar {
public: 
    
TipoTabla get_Planchar();
    
string get_Marca();
    
string get_MaterialPlanchar();
    
/**
 * @param TipoTabla
 */
void set_Planchar(void TipoTabla);
    
/**
 * @param string
 */
void set_Marca(void string);
    
/**
 * @param string
 */
void set_MaterialPlanchar(void string);
private: 
    enumeration TipoTabla;
    string Marca;
    string MaterialPlanchar;
};

#endif //_TABLASPLANCHAR_H