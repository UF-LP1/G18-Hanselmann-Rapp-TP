/**
 * Project Untitled
 */

#include "Ferreteria.h"

/**
 * Ferreteria implementation
 */


/**
 * @return const string
 */
const string Ferreteria::get_Nombre() {
    return null;
}

/**
 * @return const string
 */
const string Ferreteria::get_Direccion() {
    return null;
}

/**
 * @return const string
 */
const string Ferreteria::get_Telefono() {
    return null;
}

/**
 * @return const string
 */
const string Ferreteria::get_Mail() {
    return null;
}

/**
 * @return const string
 */
const string Ferreteria::get_MetodoPago() {
    return null;
}

/**
 * @return unsigned int
 */
unsigned int Ferreteria::get_Monto() {
    return null;
}

list <string> Ferreteria::get_ArticulosTotales()
{
    return this->ArticulosTotales;
}

list<int> Ferreteria::get_CantArtTotales()
{
    return this->CantArtTotales;
}

/**
 * @param string
 * @return void
 */
void Ferreteria::set_MetodoPago(void string) {
    return;
}

/**
 * @param unsigned int
 * @return void
 */
void Ferreteria::set_Monto(void unsigned int) {
    return;
}

void Ferreteria::set_ArticulosTotales(list <string> NuevoEstado)
{
    this->ArticulosTotales = NuevoEstado;
}

void Ferreteria::set_CantArtTotales(list <int> NuevoEstado)
{
    this->CantArtTotales = NuevoEstado;
}

/**
 * @param Horario
 * @return bool
 */
bool Ferreteria::abrir(void Horario) {
    return false;
}

/**
 * @param Cliente
 * @return articulos
 */
articulos Ferreteria::dar_art(void Cliente) {
    return null;
}

/**
 * @param Articulo
 * @param Empleado
 * @return bool
 */
bool Ferreteria::dar_ArticuloEmpleado(class Articulo, class Empleado) 
{
    return false;
}

float Ferreteria::generar_Presupuesto(Articulo art, Cliente cli)
{
    vector<int>::iterator atr;

    for (atr = cli.get_Articulos().begin(); atr <= cli.get_Articulos().end(); atr++)
    {
        //Asumimos que se le va sumando al carrito 

        
    }
}