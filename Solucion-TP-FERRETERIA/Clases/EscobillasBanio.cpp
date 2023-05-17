/**
 * Project Untitled
 */

#include "EscobillasBanio.h"

/**
 * EscobillasBaño implementation
 */
EscobillasBanio::EscobillasBanio(unsigned int Precio_, bool Cambio_, string EstadoArt_, string TipoProducto_, float Alto_, float Ancho_, float Largo_, unsigned int Cantidad_, bool RepuestoArt_, string TipoEscobilla_, string DisenioEscobilla_, string MarcaEscobilla_, string MaterialEscobilla_): Banio( Precio_, Cambio_, EstadoArt_, TipoProducto_, Alto_, Ancho_, Largo_, Cantidad_, RepuestoArt_)
{
    this->TipoEscobilla = TipoEscobilla_;
    this->DisenioEscobilla = DisenioEscobilla_;
    this->MarcaEscobilla = MarcaEscobilla_;
    this->MaterialEscobilla = MaterialEscobilla_;
}

EscobillasBanio::~EscobillasBanio()
{

}

string EscobillasBanio::get_TipoEscobilla() 
{
    return this->TipoEscobilla;
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

void EscobillasBanio::set_TipoEscobilla(string NuevoEstado) 
{
    this->TipoEscobilla = NuevoEstado;
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