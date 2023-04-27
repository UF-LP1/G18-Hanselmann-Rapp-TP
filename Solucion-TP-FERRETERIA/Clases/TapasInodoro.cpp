/**
 * Project Untitled
 */


#include "TapasInodoro.h"

/**
 * TapasInodoro implementation
 */
TapasInodoro::TapasInodoro(TipoTabla TipoTabla_, string Anclajes_, string Disenio_) {

    this->tipot = TipoTabla_;
    this->Anclajes = Anclajes_;
    this->Disenio = Disenio_;
}

TapasInodoro::~TapasInodoro()
{

}

/**
 * @return TipoTabla
 */
TipoTabla TapasInodoro::get_Tabla() {

    return this->tipot;

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

  this->tipot = NuevoEstado;

}