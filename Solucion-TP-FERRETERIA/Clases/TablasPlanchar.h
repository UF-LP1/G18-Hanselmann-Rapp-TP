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

    TablasPlanchar(unsigned int Precio_, bool Cambio_, string EstadoArt_, string TipoProducto_, float Alto_, float Ancho_, float Largo_, unsigned int Cantidad_, string Color_, TipoTablasPlanchar Planchita_, string MarcaTablPlanch_, string MaterialPlanchar_);

    ~TablasPlanchar();
    
    TipoTablasPlanchar get_Planchita();
    
    string get_MarcaTablPlanch();
    
    string get_MaterialPlanchar();

    void set_Planchita(TipoTablasPlanchar NuevoEstado);
 
    void set_MarcaTablPlanch(string NuevoEstado);

    void set_MaterialPlanchar(string NuevoEstado);

private: 
    TipoTablasPlanchar Planchita;
    string MarcaTablPlanch;
    string MaterialPlanchar;
};

#endif //_TABLASPLANCHAR_H