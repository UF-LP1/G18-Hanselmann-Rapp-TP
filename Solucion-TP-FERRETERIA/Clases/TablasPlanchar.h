/**
 * Project Untitled
 */

#ifndef _TABLASPLANCHAR_H
#define _TABLASPLANCHAR_H

#include "Bazar.h"
#include "TipoTablaPlanchar.h"

class TablasPlanchar: public Bazar 
{
public: 

    TablasPlanchar(unsigned int, bool, string, string, float, float, float, unsigned int, string, TipoTablasPlanchar, string, string);

    ~TablasPlanchar();
    
    TipoTablasPlanchar get_Planchita();
    
    string get_MarcaTablPlanch();
    
    string get_MaterialPlanchar();
    
    /**
     * @param TipoTabla
     */
    void set_Planchita(TipoTablasPlanchar NuevoEstado);
    
    /**
     * @param string
     */
    void set_MarcaTablPlanch(string NuevoEstado);
    
    /**
     * @param string
     */
    void set_MaterialPlanchar(string NuevoEstado);

private: 
    TipoTablasPlanchar Planchita;
    string MarcaTablPlanch;
    string MaterialPlanchar;
};

#endif //_TABLASPLANCHAR_H