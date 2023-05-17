/**
 * Project Untitled
 */

#include "TablasPlanchar.h"

/**
 * TablasPlanchar implementation
 */
TablasPlanchar::TablasPlanchar(unsigned int Precio_, bool Cambio_, string EstadoArt_, string TipoProducto_, float Alto_, float Ancho_, float Largo_, unsigned int Cantidad_, string Color_, TipoTablasPlanchar Planchita_, string MarcaTablPlanch_, string MaterialPlanchar_): Bazar(Precio_, Cambio_, EstadoArt_, TipoProducto_, Alto_, Ancho_, Largo_, Cantidad_, Color_)
{
    this->Planchita = Planchita_;
    this->MarcaTablPlanch = MarcaTablPlanch_;
    this->MaterialPlanchar = MaterialPlanchar_;
}

TablasPlanchar::~TablasPlanchar()
{

}

TipoTablasPlanchar TablasPlanchar::get_Planchita() 
{
    return this->Planchita;
}

string TablasPlanchar::get_MarcaTablPlanch()
{
    return this->MarcaTablPlanch;
}

string TablasPlanchar::get_MaterialPlanchar() 
{
    return MaterialPlanchar;
}

void TablasPlanchar::set_Planchita(TipoTablasPlanchar NuevoEstado)
{
    this->Planchita = NuevoEstado;
}

void TablasPlanchar::set_MarcaTablPlanch(string NuevoEstado)
{
    this->MarcaTablPlanch = NuevoEstado;
}

void TablasPlanchar::set_MaterialPlanchar(string NuevoEstado)
{
    this->MaterialPlanchar = NuevoEstado;
}