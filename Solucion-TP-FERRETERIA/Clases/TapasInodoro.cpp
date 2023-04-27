/**
 * Project Untitled
 */

#include "TapasInodoro.h"

/**
 * TapasInodoro implementation
 */
TapasInodoro::TapasInodoro(TipoTablaInodoro Inodorito_, string Anclajes_, string Disenio_) 
{

    this->Inodorito = Inodorito_;
    this->Anclajes = Anclajes_;
    this->Disenio = Disenio_;
}

TapasInodoro::~TapasInodoro()
{

}

/**
 * @return TipoTabla
 */
TipoTablaInodoro TapasInodoro::get_TablaInodoro() 
{
    return this->Inodorito;
}

/**
 * @return string
 */
string TapasInodoro::get_Anclajes() 
{
    return this->Anclajes;
}

/**
 * @return string
 */
string TapasInodoro::get_Disenio() 
{
    return this->Disenio;
}

/**
 * @param string
 * @return void
 */
void TapasInodoro::set_Anclajes(string NuevoEstado)
{
    this->Anclajes = NuevoEstado;
}

/**
 * @param string
 * @return void
 */
void TapasInodoro::set_Disenio(string NuevoEstado)
{
    this->Disenio = NuevoEstado;
}

/**
 * @param TipoTabla
 * @return void
 */
void TapasInodoro::set_TablaInodoro(TipoTablaInodoro NuevoEstado)
{
  this->Inodorito = NuevoEstado;
}