/**
 * Project Untitled
 */

#include "Cocina.h"

/**
 * Cocina implementation
 */
Cocina::Cocina(unsigned int Precio_, bool Cambio_, string EstadoArt_, string TipoProducto_, float Alto_, float Ancho_, float Largo_, unsigned int Cantidad_, bool RepuestoArt_):Articulo(Precio_, Cambio_, EstadoArt_, TipoProducto_, Alto_, Ancho_, Largo_, Cantidad_)
{
   this->RepuestoArt = RepuestoArt_;
}

Cocina::~Cocina()
{

}

/**
 * @return bool
 */
bool Cocina::get_RepuestoArt() 
{
    return this->RepuestoArt;
}

/**
 * @param bool
 * @return void
 */
void Cocina::set_RepuestoArt(bool NuevoEstado) 
{
    this->RepuestoArt=NuevoEstado;
}