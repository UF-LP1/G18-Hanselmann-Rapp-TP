/**
 * Project Untitled
 */

#include "EscobillasBanio.h"

/**
 * EscobillasBaño implementation
 */
EscobillasBanio::EscobillasBanio(unsigned int Precio_, bool Cambio_, string EstadoArt_, string TipoProducto_, float Alto_, float Ancho_, float Largo_, unsigned int Cantidad_, bool RepuestoArt_, TipoEscobilla EscobillinBanio_, string DisenioEscobilla_, string MarcaEscobilla_, string MaterialEscobilla_): Banio( Precio_, Cambio_, EstadoArt_, TipoProducto_, Alto_, Ancho_, Largo_, Cantidad_, RepuestoArt_)
{
    this->EscobillinBanio = EscobillinBanio_;
    this->DisenioEscobilla = DisenioEscobilla_;
    this->MarcaEscobilla = MarcaEscobilla_;
    this->MaterialEscobilla = MaterialEscobilla_;
}

EscobillasBanio::~EscobillasBanio()
{

}

TipoEscobilla EscobillasBanio::get_EscobillinBanio()
{
    return this->EscobillinBanio;
}

string EscobillasBanio::get_DisenioEscobilla()
{
    return this->DisenioEscobilla;
}

string EscobillasBanio::get_MarcaEscobilla() 
{
    return this->MarcaEscobilla;
}

string EscobillasBanio::get_MaterialEscobilla() 
{
    return this->MaterialEscobilla;
}

void EscobillasBanio::set_EscobillinBanio(TipoEscobilla NuevoEstado)
{
    this->EscobillinBanio = NuevoEstado;
}

void EscobillasBanio::set_DisenioEscobilla(string NuevoEstado) 
{
    this->DisenioEscobilla = NuevoEstado;
}

void EscobillasBanio::set_MarcaEscobilla(string NuevoEstado) 
{
    this->MarcaEscobilla = NuevoEstado;
}

void EscobillasBanio::set_MaterialEscobilla(string NuevoEstado) 
{
    this->MaterialEscobilla=NuevoEstado;
}