/**
 * Project Untitled
 */

#include "Duenio.h"

/**
 * Duenio implementation
 */

Duenio::Duenio(string Nombre_, string Apellido_, string DNI_, TipoSexo Sexo_, bool Disponibilidad_):Persona(Nombre_, Apellido_, DNI_, Sexo_)
{
    this->Disponibilidad = Disponibilidad_;
}

Duenio::~Duenio()
{

}

/**
 * @return bool
 */
bool Duenio::get_Disponibilidad() 
{
    return this->Disponibilidad;
}

/**
 * @param bool
 * @return void
 */
void Duenio::set_Disponibilidad(bool NuevoEstado) 
{
    this->Disponibilidad = NuevoEstado;
}

/**
 * @param Cliente
 * @return void
 */
void Duenio::atender_cliente(Cliente cli) 
{
    return;
}

/**
 * @param Cliente
 * @return void
 */
void Duenio::identificar_art(Cliente cli) 
{
    return;
}

/**
 * @param Articulo
 * @return unisgned float
 */
int Duenio::cobrar(Articulo art) 
{
    return 0;
}

/**
 * @param Articulo
 * @return string
 */
string Duenio::revisar_art(Articulo art) 
{
    return "";
}

/**
 * @return void
 */
bool Duenio::abrir_ferreteria() 
{
    return false;
}

/**
 * @param Cliente
 * @param Herramientas
 * @return bool
 */
bool Duenio::dar_HerramientasCliente(Cliente cli, HerramientasAlquiler herralq) 
{
    return false;
}
