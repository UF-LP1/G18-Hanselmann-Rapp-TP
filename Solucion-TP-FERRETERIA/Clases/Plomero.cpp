#include "Plomero.h"

/**
 * Plomero implementation
 */

Plomero::Plomero(const string DNI_, string Nombre_, string Apellido_, TipoSexo Sexo_, unsigned int Salario_, string TipoTransporte_, time_t TiempoTrabajado_, TipoTuberia tub, float Longitud_, float Ancho_): Empleado(DNI_, Nombre_, Apellido_, Sexo_, Salario_, TipoTransporte_, TiempoTrabajado_)
{
    this->Tuberias = tub;
    this->Longitud = Longitud_;
    this->Ancho = Ancho_;

}

Plomero::~Plomero()
{

}

string Plomero::get_Nombre()
{
    return this->Nombre;
}

TipoTuberia Plomero::get_Tuberias() 
{
    return this->Tuberias;
}

float Plomero::get_Longitud() 
{
    return this->Longitud;
}

float Plomero::get_Ancho() 
{
    return this->Ancho;
}

void Plomero::set_Tuberias(TipoTuberia NuevoEstado) 
{
    this->Tuberias = NuevoEstado;
}

void Plomero::set_Longitud(float NuevoEstado) 
{
    this->Longitud = NuevoEstado;
}

void Plomero::set_Ancho(float NuevoEstado) 
{
    this->Ancho = NuevoEstado;
}
