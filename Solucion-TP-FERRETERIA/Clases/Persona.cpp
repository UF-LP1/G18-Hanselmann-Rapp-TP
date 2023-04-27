/**
 * Project Untitled
 */

#include "Persona.h"

/**
 * Persona implementation
 */

Persona::Persona(string Nombre_, string Apellido_, string DNI_, TipoSexo Sexo_): Nombre(Nombre_), Apellido(Apellido_), DNI(DNI_), Sexo(Sexo_)
{

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