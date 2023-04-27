/**
 * Project Untitled
 */

#ifndef _TABLASPLANCHAR_H
#define _TABLASPLANCHAR_H

#include "Bazar.h"
#include "TipoTablaPlanchar"

class TablasPlanchar: public Bazar 
{
public: 

    TablasPlanchar(unsigned int, bool, string, string, float, float, float, unsigned int, string, unsigned int, string, TipoTablaPlanchar, string, string);

    ~TablasPlanchar();
    
    TipoTablaPlanchar get_Planchar();
    
    string get_Marca();
    
    string get_MaterialPlanchar();
    
    /**
     * @param TipoTabla
     */
    void set_Planchar(TipoTablaPlanchar NuevoEstado);
    
    /**
     * @param string
     */
    void set_Marca(string NuevoEstado);
    
    /**
     * @param string
     */
    void set_MaterialPlanchar(string NuevoEstado);

private: 
    TipoTablaPlanchar Planchita;
    string Marca;
    string MaterialPlanchar;
};

#endif //_TABLASPLANCHAR_H