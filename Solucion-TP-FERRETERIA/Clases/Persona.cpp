#include "Persona.h"

/**
 * Persona implementation
 */

Persona::Persona(const string DNI_, string Nombre_, string Apellido_, TipoSexo Sexo_): DNI(DNI_)
{
    this->Nombre = Nombre_;
    this->Apellido = Apellido_;
    this->Sexo = Sexo_;
}

Persona::~Persona()
{

}

string Persona::get_Nombre() 
{
    return this->Nombre;
}

string Persona::get_Apellido() 
{
    return this->Apellido;
}

const string Persona::get_DNI() 
{
    return DNI;
}

TipoSexo Persona::get_Sexo() 
{
    return this->Sexo;
}

void Persona::set_Nombre(string NuevoEstado) 
{
    this->Nombre = NuevoEstado;
}

void Persona::set_Apellido(string NuevoEstado) 
{
    this-> Apellido = NuevoEstado;
}

void Persona::set_Sexo(TipoSexo NuevoEstado) 
{
    this-> Sexo = NuevoEstado;
}