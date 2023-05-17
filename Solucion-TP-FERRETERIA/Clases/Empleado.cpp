#include "Empleado.h"

/**
 * Empleado implementation
 */

Empleado::Empleado(const string DNI_, string Nombre_, string Apellido_, TipoSexo Sexo_, unsigned int Salario_, string TipoTransporte_, unsigned int TiempoTrabajado_): Persona(DNI_, Nombre_, Apellido_, Sexo_)
{
    this->Salario = Salario_;
    this->TipoTransporte = TipoTransporte_;
    this->TiempoTrabajado = TiempoTrabajado_;
}

Empleado::~Empleado()
{

}

unsigned int Empleado::get_Salario() 
{
    return this->Salario;
}

string Empleado::get_TipoTransporte() 
{
    return this->TipoTransporte;
}

unsigned int Empleado::get_TiempoTrabajado() 
{
    return this->TiempoTrabajado;
}

void Empleado::set_Salario(unsigned int NuevoEstado) 
{
    this->Salario = NuevoEstado;
}

void Empleado::set_TipoTransporte(string NuevoEstado)
{
    this->TipoTransporte = NuevoEstado;
}

void Empleado::set_TiempoTrabajado(unsigned int NuevoEstado)
{
    this->TiempoTrabajado = NuevoEstado;
}