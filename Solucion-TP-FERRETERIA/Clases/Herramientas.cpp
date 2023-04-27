/**
 * Project Untitled
 */


#include "Herramientas.h"

/**
 * Herramientas implementation
 */


/**
 * @return TipoHerramienta
 */
TipoHerramienta Herramientas::get_Herramienta() {

    return this->TipoHerramienta;//DUDA ENUM

}

/**
 * @param TipoHerramienta
 * @return void
 */
void Herramientas::set_Herramienta(TipoHerramienta NuevoEstado) {

    this->TipoHerramienta=NuevoEstado;//DUDA ENUM

}

/**
 * @return string
 */
string Herramientas::get_Marca() {

    return this->Marca;

}

/**
 * @param string
 * @return void
 */
void Herramientas::set_Marca(string NuevoEstado) {

    this->Marca=NuevoEstado;

}