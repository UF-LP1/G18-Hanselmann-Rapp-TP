/**
 * Project Untitled
 */


#include "Tornillos.h"

/**
 * Tornillos implementation
 */


/**
 * @return string
 */
string Tornillos::get_Cabeza() {

    return this->Cabeza;

}

/**
 * @return string
 */
string Tornillos::get_Rosca() {

    return this->Rosca;

}

/**
 * @return string
 */
string Tornillos::get_Utilidad(){

    return this->Utilidad;

}

/**
 * @param string
 * @return void
 */
void Tornillos::set_Cabeza(string NuevoEstado) {

    this->Cabeza = NuevoEstado;

}

/**
 * @param string
 * @return void
 */
void Tornillos::set_Rosca(string NuevoEstado) {
    
    this->Rosca=NuevoEstado;
}

/**
 * @param string
 * @return void
 */
void Tornillos::set_Utilidad(string NuevoEstado) {

    this->Utilidad = NuevoEstado;
}