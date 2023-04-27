/**
 * Project Untitled
 */

#include "Plomero.h"

/**
 * Plomero implementation
 */

Plomero::Plomero(TipoTuberia tub, float Longitud_, float Ancho_):Tuberias(tub), Longitud(Longitud_), Ancho(Ancho_)
{

}

Plomero::~Plomero()
{

}

/**
 * @return TipoTuberia
 */
TipoTuberia Plomero::get_Tuberias() 
{
    return this->Tuberias;
}

/**
 * @return unsigned float
 */
float Plomero::get_Longitud() 
{
    return this->Longitud;
}

/**
 * @return unsigned float
 */
float Plomero::get_Ancho() 
{
    return this->Ancho;
}

/**
 * @param TipoTuberia
 * @return void
 */
void Plomero::set_Tuberias(TipoTuberia NuevoEstado) 
{
    this->Tuberias = NuevoEstado;
}

/**
 * @param unsigned float
 * @return void
 */
void Plomero::set_Longitud(float NuevoEstado) 
{
    this->Longitud = NuevoEstado;
}

/**
 * @param unsigned float
 * @return void
 */
void Plomero::set_Ancho(float NuevoEstado) 
{
    this->Ancho = NuevoEstado;
}

/**
 * @return void
 */
void Plomero::Mantenimiento_tuberias() 
{
    return;
}
