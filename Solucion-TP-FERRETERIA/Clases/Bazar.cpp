/**
 * Project Untitled
 */

#include "Bazar.h"


Bazar::Bazar(unsigned int Precio_, bool Cambio_, string EstadoArt_, string TipoProducto_, float Alto_, float Ancho_, float Largo_, unsigned int Cantidad_, string Color_): Articulo(Precio_, Cambio_, EstadoArt_, TipoProducto_, Alto_, Ancho_, Largo_, Cantidad_) 
{
    this->Color = Color_;
}

Bazar::~Bazar()
{

}

string Bazar::get_Color() 
{
    return this->Color;
}

void Bazar::set_Color(string NuevoEstado) 
{
    this->Color=NuevoEstado;
}