/**
 * Project Untitled
 */


#include "EscobillasBaño.h"

/**
 * EscobillasBaño implementation
 */
EscobillasBaño::EscobillasBaño(unsigned int Precio_, bool Cambio_, string EstadoArt_, string TipoProducto_, float Alto_, float Ancho_, float Largo_, unsigned int Cantidad_, string ArticuloVendido_, unsigned int PrecioArtVendido_, bool RepuestoArt_, string TipoEscobilla_, string Disenio_, string Marca_, string MaterialEscobilla_): Banio( Precio_, Cambio_, EstadoArt_, TipoProducto_, Alto_, Ancho_, Largo_, Cantidad_, ArticuloVendido_, PrecioArtVendido_, RepuestoArt_)
{

    this->TipoEscobilla = TipoEscobilla_;
    this->Disenio = Disenio_;
    this->Marca = Marca_;
    this->MaterialEscobilla = MaterialEscobilla_;
}

EscobillasBaño::~EscobillasBaño()
{

}

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