/**
 * Project Untitled
 */

#include "Plomero.h"

/**
 * Plomero implementation
 */

Plomero::Plomero(string Nombre_, string Apellido_, string DNI_, TipoSexo Sexo_, unsigned int Salario_, string TipoTransporte_, time_t TiempoTrabajado_, TipoTuberia tub, float Longitud_, float Ancho_): Empleado(Nombre_, Apellido_, DNI_, Sexo_, Salario_, TipoTransporte_, TiempoTrabajado_)
{
    this->Tuberias = tub;
    this->Longitud = Longitud_;
    this->Ancho = Ancho_;

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
