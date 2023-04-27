/**
 * Project Untitled
 */

#include "TablasPlanchar.h"

/**
 * TablasPlanchar implementation
 */
TablasPlanchar::TablasPlanchar(unsigned int Precio_, bool Cambio_, string EstadoArt_, string TipoProducto_, float Alto_, float Ancho_, float Largo_, unsigned int Cantidad_, string ArticuloVendido_, unsigned int PrecioArtVendido_, string Color_, TipoTablasPlanchar Planchita_, string Marca_, string MaterialPlanchar_): Bazar(Precio_, Cambio_, EstadoArt_, TipoProducto_, Alto_, Ancho_, Largo_, Cantidad_, ArticuloVendido_, PrecioArtVendido_, Color_)
{
    this->Planchita = Planchita_;
    this->Marca = Marca_;
    this->MaterialPlanchar = MaterialPlanchar_;
}

TablasPlanchar::~TablasPlanchar()
{

}

/**
 * @return TipoTabla
 */
TipoTablasPlanchar TablasPlanchar::get_Planchar() 
{
    return this->Planchita;
}

/**
 * @return string
 */
string TablasPlanchar::get_Marca() 
{
    return this->Marca;
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
void TablasPlanchar::set_Planchar(TipoTablasPlanchar NuevoEstado)
{
    this->Planchita = NuevoEstado;
}

/**
 * @param string
 * @return void
 */
void TablasPlanchar::set_Marca(string NuevoEstado)
{
    this->Marca = NuevoEstado;
}

/**
 * @param string
 * @return void
 */
void TablasPlanchar::set_MaterialPlanchar(string NuevoEstado)
{
    this->MaterialPlanchar = NuevoEstado;
}