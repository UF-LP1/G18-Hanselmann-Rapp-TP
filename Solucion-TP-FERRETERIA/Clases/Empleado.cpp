/**
 * Project Untitled
 */

#include "Empleado.h"

/**
 * Empleado implementation
 */

Empleado::Empleado(string Nombre_, string Apellido_, string DNI_, TipoSexo Sexo_, unsigned int Salario_, string TipoTransporte_, time_t TiempoTrabajado_): Persona(Nombre_, Apellido_, DNI_, Sexo_)
{
    this->Salario = Salario_;
    this->TipoTransporte = TipoTransporte_;
    this->TiempoTrabajado = TiempoTrabajado_;

}

Empleado::~Empleado()
{

}

/**
 * @return unsigned float
 */
unsigned int Empleado::get_Salario() 
{
    return this->Salario;
}

/**
 * @return string
 */
string Empleado::get_TipoTransporte() 
{
    return this->TipoTransporte;
}

/**
 * @return time_t
 */
time_t Empleado::get_TiempoTrabajado() 
{
    return this->TiempoTrabajado;
}

/**
 * @param unsigned float
 * @return void
 */
void Empleado::set_Salario(unsigned int NuevoEstado) 
{
    this->Salario = NuevoEstado;
}

/**
 * @param string
 * @return void
 */
void Empleado::set_TipoTransporte(string NuevoEstado)
{
    this->TipoTransporte = NuevoEstado;
}

/**
 * @param time_t
 * @return void
 */
void Empleado::set_TiempoTrabajado(time_t NuevoEstado)
{
    this->TiempoTrabajado = NuevoEstado;
}