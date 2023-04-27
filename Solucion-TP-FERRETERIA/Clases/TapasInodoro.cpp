/**
 * Project Untitled
 */

#include "TapasInodoro.h"

/**
 * TapasInodoro implementation
 */
TapasInodoro::TapasInodoro(unsigned int Precio_, bool Cambio_, string EstadoArt_, string TipoProducto_, float Alto_, float Ancho_, float Largo_, unsigned int Cantidad_, string ArticuloVendido_, unsigned int PrecioArtVendido_, string Color_, TipoTablaInodoro Inodorito_, string Anclajes_, string DisenioTablIno_): Bazar(Precio_, Cambio_, EstadoArt_, TipoProducto_, Alto_, Ancho_, Largo_, Cantidad_, ArticuloVendido_, PrecioArtVendido_, Color_)
{
    this->Inodorito = Inodorito_;
    this->Anclajes = Anclajes_;
    this->DisenioTablIno = DisenioTablIno_;
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
string TapasInodoro::get_DisenioTablIno() 
{
    return this->DisenioTablIno;
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
void TapasInodoro::set_DisenioTablIno(string NuevoEstado)
{
    this->DisenioTablIno = NuevoEstado;
}

/**
 * @param TipoTabla
 * @return void
 */
void TapasInodoro::set_TablaInodoro(TipoTablaInodoro NuevoEstado)
{
  this->Inodorito = NuevoEstado;
}