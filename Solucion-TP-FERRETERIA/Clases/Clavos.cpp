/**
 * Project Untitled
 */


#include "Clavos.h"

/**
 * Clavos implementation
 */


/**
 * @return void
 */
void Clavos::get_Clavo() {

    return this->TipoClavo;//DUDA ENUM

}

/**
 * @return string
 */
string Clavos::get_Cabeza() {

    return this->Cabeza;

}

/**
 * @param TipoClavo
 * @return void
 */
void Clavos::set_Clavo(TipoClavo NuevoEstado) {

    this->TipoClavo=NuevoEstado;//DUDA ENUM

}

/**
 * @param string
 * @return void
 */
void Clavos::set_Cabeza(string NuevoEstado) {
    
    this->Cabeza=NuevoEstado;

}