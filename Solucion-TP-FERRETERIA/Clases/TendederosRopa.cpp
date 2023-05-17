/**
 * Project Untitled
 */

#include "TendederosRopa.h"


TendederosRopa::TendederosRopa(unsigned int Precio_, bool Cambio_, string EstadoArt_, string TipoProducto_, float Alto_, float Ancho_, float Largo_, unsigned int Cantidad_, string Color_, TipoTendedero Tendederito_, string MaterialTendedero_): Bazar(Precio_, Cambio_, EstadoArt_, TipoProducto_, Alto_, Ancho_, Largo_, Cantidad_, Color_)
{
    this->Tendederito = Tendederito_;
    this->MaterialTendedero = MaterialTendedero_;
}

TendederosRopa::~TendederosRopa() 
{

}

TipoTendedero TendederosRopa::get_Tendederito() 
{
    return this->Tendederito;
}


string TendederosRopa::get_MaterialTendedero() 
{
    return MaterialTendedero;
}

void TendederosRopa::set_Tendederito(TipoTendedero NuevoEstado)
{
    this->Tendederito = NuevoEstado;
}

void TendederosRopa::set_MaterialTendedero (string NuevoEstado)
{
    this->MaterialTendedero = NuevoEstado;
}