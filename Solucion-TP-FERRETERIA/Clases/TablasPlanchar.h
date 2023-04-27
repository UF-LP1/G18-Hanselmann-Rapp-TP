/**
 * Project Untitled
 */


#ifndef _TABLASPLANCHAR_H
#define _TABLASPLANCHAR_H

#include "Bazar.h"
#include "TipoTabla.h"


class TablasPlanchar: public Bazar {
public: 

    TablasPlanchar(TipoTabla, string, string);

    ~TablasPlanchar();
    
TipoTabla get_Planchar();
    
string get_Marca();
    
string get_MaterialPlanchar();
    
/**
 * @param TipoTabla
 */
void set_Planchar(TipoTabla NuevoEstado);
    
/**
 * @param string
 */
void set_Marca(string NuevoEstado);
    
/**
 * @param string
 */
void set_MaterialPlanchar(string NuevoEstado);

private: 
    TipoTabla tipotab;
    string Marca;
    string MaterialPlanchar;
};

#endif //_TABLASPLANCHAR_H