/**
 * Project Untitled
 */


#include "Utencillos.h"

/**
 * Utencillos implementation
 */


/**
 * @return TipoUtencillo
 */
TipoUtencillo Utencillos::get_Utencillo() {

    return this->TipoUtencillo;//DUDA ENUM

}


/**
 * @return string
 */
string Utencillos::get_MaterialUtencillo() {

    return this->MaterialUtencillo;

}

/**
 * @param TipoUtencillo
 * @return void
 */
void Utencillos::set_Utencillo(TipoUtencillo NuevoEstado){

    this->TipoUtencillo = NuevoEstado; //DUDA ENUM

}

/**
 * @param string
 * @return void
 */
void Utencillos::set_MaterialUtencillo(string NuevoEstado){

    this->MaterialUtencillo = NuevoEstado;

}