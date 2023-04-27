/**
 * Project Untitled
 */


#include "TapasInodoro.h"

/**
 * TapasInodoro implementation
 */


/**
 * @return TipoTabla
 */
TipoTabla TapasInodoro::get_Tabla() {

    return this->TipoTabla;

}

/**
 * @return string
 */
string TapasInodoro::get_Anclajes() {

    return this->Anclajes;

}

/**
 * @return string
 */
string TapasInodoro::get_Disenio() {

    return this->Disenio;

}

/**
 * @param string
 * @return void
 */
void TapasInodoro::set_Anclajes(string NuevoEstado){

    this->Anclajes = NuevoEstado;
}

/**
 * @param string
 * @return void
 */
void TapasInodoro::set_Disenio(string NuevoEstado){

    this->Disenio = NuevoEstado;

}

/**
 * @param TipoTabla
 * @return void
 */
void TapasInodoro::set_Tabla(TipoTabla NuevoEstado){

  this->TipoTabla = NuevoEstado;

}