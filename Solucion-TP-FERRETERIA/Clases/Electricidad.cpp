/**
 * Project Untitled
 */

#include "Electricidad.h"

/**
 * Electricidad implementation
 */
Electricidad::Electricidad(unsigned int Precio_, bool Cambio_, string EstadoArt_, string TipoProducto_, float Alto_, float Ancho_, float Largo_, unsigned int Cantidad_,unsigned int Tension_, unsigned int Potencia_):Articulo(Precio_, Cambio_, EstadoArt_, TipoProducto_, Alto_, Ancho_, Largo_, Cantidad_)
{
    this->Tension = Tension_;
    this->Potencia = Potencia_;
}

Electricidad::~Electricidad()
{

}


unsigned int Electricidad::get_Tension()
{
    return this->Tension;
}


unsigned int Electricidad::get_Potencia() 
{
    return this->Potencia;
}


void Electricidad::set_Tension(unsigned int NuevoEstado) 
{
    this->Tension = NuevoEstado;
}


void Electricidad::set_Potencia(unsigned int NuevoEstado) 
{
    this->Potencia=NuevoEstado;
}