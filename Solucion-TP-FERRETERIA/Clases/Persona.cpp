#include "Persona.h"

/**
 * Persona implementation
 */

Persona::Persona(string Nombre_, string Apellido_, const string DNI_, TipoSexo Sexo_):DNI(DNI_)
{
    this->Nombre = Nombre_;
    this->Apellido = Apellido_;
    this->Sexo = Sexo;
}

Persona::~Persona()
{

}

/**
 * @return string
 */
string Persona::get_Nombre() 
{
    return this->Nombre;
}

/**
 * @return string
 */
string Persona::get_Apellido() 
{
    return this->Apellido;
}

/**
 * @return const string
 */
const string Persona::get_DNI() 
{
    return this->DNI;
}

/**
 * @return TipoSexo
 */
TipoSexo Persona::get_Sexo() 
{
    return this->Sexo;
}

/**
 * @param string
 * @return void
 */
void Persona::set_Nombre(string NuevoEstado) 
{
    this->Nombre = NuevoEstado;
}

/**
 * @param string
 * @return void
 */
void Persona::set_Apellido(string NuevoEstado) 
{
    this-> Apellido = NuevoEstado;
}

/**
 * @param TipoSexo
 * @return void
 */
void Persona::set_Sexo(TipoSexo NuevoEstado) 
{
    this-> Sexo = NuevoEstado;
}