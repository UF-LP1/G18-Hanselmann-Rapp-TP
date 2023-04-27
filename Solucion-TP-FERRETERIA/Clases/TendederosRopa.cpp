/**
 * Project Untitled
 */

#include "TendederosRopa.h"

/**
 * TendederosRopa implementation
 */
TendederosRopa::TendederosRopa(unsigned int Precio_, bool Cambio_, string EstadoArt_, string TipoProducto_, float Alto_, float Ancho_, float Largo_, unsigned int Cantidad_, string ArticuloVendido_, unsigned int PrecioArtVendido_, string Color_, TipoTendedero TipoTendedero_, string MaterialTendedero_): Bazar(Precio_, Cambio_, EstadoArt_, TipoProducto_, Alto_, Ancho_, Largo_, Cantidad_, ArticuloVendido_, PrecioArtVendido_, Color_)
{
    this->tipoten = TipoTendedero_;
    this->MaterialTendedero = MaterialTendedero_;
}

TendederosRopa::~TendederosRopa() 
{

}

/**
 * @return TipoTendedero
 */
TipoTendedero TendederosRopa::get_Tendedero() 
{
    return this->tipoten;
}

/**
 * @return string
 */
string TendederosRopa::get_MaterialTendedero() 
{
    return MaterialTendedero;
}

/**
 * @param TipoTendedero
 * @return void
 */
void TendederosRopa::set_Tendedero(TipoTendedero NuevoEstado)
{
    this->tipoten = NuevoEstado;
}

/**
 * @param string
 * @return void
 */
void TendederosRopa::set_MaterialTendedero (string NuevoEstado)
{
    this->MaterialTendedero = NuevoEstado;
}