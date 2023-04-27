/**
 * Project Untitled
 */

#include "Duenio.h"

/**
 * Duenio implementation
 */

Duenio::Duenio(bool Disponibilidad_):Disponibilidad(Disponibilidad_)
{

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
float Duenio::cobrar(Articulo art) 
{
    return;
}

/**
 * @param Articulo
 * @return string
 */
string Duenio::revisar_art(Articulo art) 
{
    return;
}

/**
 * @param Cliente
 * @param Ferreteria
 * @return bool
 */
bool Duenio::atenderCliente(Cliente cli, Ferreteria ferr) 
{
    return false;
}

/**
 * @return void
 */
void Duenio::abrir_ferreteria() 
{
    return;
}

/**
 * @return void
 */
void Duenio::cerrar_ferreteria() 
{
    return;
}

/**
 * @param Ferreteria
 * @param Herramientas
 * @return bool
 */
bool Duenio::buscar_Herramientas(Ferreteria ferr, HerramientasAlquiler herralq) 
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

/**
 * @param Empleado
 * @return bool
 */
bool Duenio::llamar_Empleado(Empleado emp) 
{
    return false;
}