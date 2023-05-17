/**
 * Project Untitled
 */

#include "TapasInodoro.h"

/**
 * TapasInodoro implementation
 */
TapasInodoro::TapasInodoro(unsigned int Precio_, bool Cambio_, string EstadoArt_, string TipoProducto_, float Alto_, float Ancho_, float Largo_, unsigned int Cantidad_, string Color_, TipoTablaInodoro Inodorito_, string Anclajes_, string DisenioTablIno_): Bazar(Precio_, Cambio_, EstadoArt_, TipoProducto_, Alto_, Ancho_, Largo_, Cantidad_, Color_)
{
    this->Inodorito = Inodorito_;
    this->Anclajes = Anclajes_;
    this->DisenioTablIno = DisenioTablIno_;
}

TapasInodoro::~TapasInodoro()
{

}

TipoTablaInodoro TapasInodoro::get_Inodorito() 
{
    return this->Inodorito;
}

string TapasInodoro::get_Anclajes() 
{
    return this->Anclajes;
}

string TapasInodoro::get_DisenioTablIno() 
{
    return this->DisenioTablIno;
}

void TapasInodoro::set_Anclajes(string NuevoEstado)
{
    this->Anclajes = NuevoEstado;
}

void TapasInodoro::set_DisenioTablIno(string NuevoEstado)
{
    this->DisenioTablIno = NuevoEstado;
}

void TapasInodoro::set_Inodorito(TipoTablaInodoro NuevoEstado)
{
  this->Inodorito = NuevoEstado;
}