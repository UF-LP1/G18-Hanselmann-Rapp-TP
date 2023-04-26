/**
 * Project Untitled
 */

#include "Articulo.h"

/**
 * Articulo implementation
 */


/**
 * @return unsigned float
 */
unsigned int Articulo::get_Precio() 
{
    return this->Precio;
}

/**
 * @return bool
 */
bool Articulo::get_Cambio() {
    return false;
}

/**
 * @return string
 */
string Articulo::get_EstadoArt() {
    return "";
}

/**
 * @return const string
 */
const string Articulo::get_TipoProducto() {
    return null;
}

/**
 * @return const unsigned float
 */
const unsigned float Articulo::get_Alto() {
    return null;
}

/**
 * @return const unsigned float
 */
const unsigned float Articulo::get_Ancho() {
    return null;
}

/**
 * @return unsigned int
 */
unsigned int Articulo::get_Largo() {
    return null;
}

/**
 * @return unsigned int
 */
unsigned int Articulo::get_Cantidad() {
    return null;
}

/**
 * @param unsigned float
 * @return void
 */
void Articulo::set_Precio(unsigned int NuevoEstado) 
{
    this->Precio = NuevoEstado;
}

/**
 * @param bool
 * @return void
 */
void Articulo::set_Cambio(void bool) {
    return;
}

/**
 * @param string
 * @return void
 */
void Articulo::set_EstadoArt(void string) {
    return;
}

/**
 * @param unsigned int
 * @return void
 */
void Articulo::set_Largo(void unsigned int) {
    return;
}

/**
 * @param unsigned int
 * @return void
 */
void Articulo::set_Cantidad(void unsigned int) {
    return;
}