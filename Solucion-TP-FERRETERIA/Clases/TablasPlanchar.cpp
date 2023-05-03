/**
 * Project Untitled
 */

#include "TablasPlanchar.h"

/**
 * TablasPlanchar implementation
 */
TablasPlanchar::TablasPlanchar(unsigned int Precio_, bool Cambio_, string EstadoArt_, string TipoProducto_, float Alto_, float Ancho_, float Largo_, unsigned int Cantidad_, string ArticuloVendido_, unsigned int PrecioArtVendido_, string Color_, TipoTablasPlanchar Planchita_, string MarcaTablPlanch_, string MaterialPlanchar_): Bazar(Precio_, Cambio_, EstadoArt_, TipoProducto_, Alto_, Ancho_, Largo_, Cantidad_, ArticuloVendido_, PrecioArtVendido_, Color_)
{
    this->Planchita = Planchita_;
    this->MarcaTablPlanch = MarcaTablPlanch_;
    this->MaterialPlanchar = MaterialPlanchar_;
}

TablasPlanchar::~TablasPlanchar()
{

}

/**
 * @return TipoTabla
 */
TipoTablasPlanchar TablasPlanchar::get_Planchita() 
{
    return this->Planchita;
}

/**
 * @return string
 */
string TablasPlanchar::get_MarcaTablPlanch()
{
    return this->MarcaTablPlanch;
}

/**
 * @return string
 */
string TablasPlanchar::get_MaterialPlanchar() 
{
    return MaterialPlanchar;
}

/**
 * @param TipoTabla
 * @return void
 */
void TablasPlanchar::set_Planchita(TipoTablasPlanchar NuevoEstado)
{
    this->Planchita = NuevoEstado;
}

/**
 * @param string
 * @return void
 */
void TablasPlanchar::set_MarcaTablPlanch(string NuevoEstado)
{
    this->MarcaTablPlanch = NuevoEstado;
}

/**
 * @param string
 * @return void
 */
void TablasPlanchar::set_MaterialPlanchar(string NuevoEstado)
{
    this->MaterialPlanchar = NuevoEstado;
}