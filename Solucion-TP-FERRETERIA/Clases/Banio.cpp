/**
 * Project Untitled
 */

#include "Banio.h"

/**
 * Banio implementation
 */
Banio::Banio(unsigned int Precio_, bool Cambio_, string EstadoArt_, string TipoProducto_, float Alto_, float Ancho_, float Largo_, unsigned int Cantidad_, bool RepuestoArt_):Articulo(Precio_, Cambio_, EstadoArt_, TipoProducto_, Alto_, Ancho_, Largo_, Cantidad_)
{
    this->RepuestoArt = RepuestoArt_;
}

Banio::~Banio() 
{

}

bool Banio::get_RepuestoArt() 
{
    return this->RepuestoArt;
}

void Banio::set_RepuestoArt(bool NuevoEstado) 
{
    this->RepuestoArt=NuevoEstado;
}