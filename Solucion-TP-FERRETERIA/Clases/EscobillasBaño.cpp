/**
 * Project Untitled
 */


#include "EscobillasBaño.h"

/**
 * EscobillasBaño implementation
 */


/**
 * @return string
 */
string EscobillasBaño::get_TipoEscobilla() {

    return this->TipoEscobilla;

}

/**
 * @return string
 */
string EscobillasBaño::get_Disenio() {

    return this->Disenio;

}

/**
 * @return string
 */
string EscobillasBaño::get_Marca() {

    return this->Marca;

}

/**
 * @return string
 */
string EscobillasBaño::get_MaterialEscobilla() {

    return this->MaterialEscobilla;

}

/**
 * @param string
 * @return void
 */
void EscobillasBaño::set_TipoEscobilla(string NuevoEstado) {

    this->TipoEscobilla = NuevoEstado;

}

/**
 * @param string
 * @return void
 */
void EscobillasBaño::set_Disenio(string NuevoEstado) {

    this->Disenio=NuevoEstado;

}

/**
 * @param string
 * @return void
 */
void EscobillasBaño::set_Marca(string NuevoEstado) {

    this->Marca=NuevoEstado;

}

/**
 * @param string
 * @return void
 */
void EscobillasBaño::set_MaterialEscobilla(string NuevoEstado) {

    this->MaterialEscobilla=NuevoEstado;

}