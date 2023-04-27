/**
 * Project Untitled
 */


#include "Banio.h"

/**
 * Banio implementation
 */

Banio::Banio(unsigned int Precio_, bool Cambio_, string EstadoArt_, string TipoProducto_, float Alto_, float Ancho_, float Largo_, unsigned int Cantidad_, string ArticuloVendido_, unsigned int PrecioArtVendido_, bool RepuestoArt_):Articulo(Precio_, Cambio_, EstadoArt_, TipoProducto_, Alto_, Ancho_, Largo_, Cantidad_, ArticuloVendido_, PrecioArtVendido_)
{

    this->RepuestoArt = RepuestoArt_;
}

Banio::~Banio() {

}
/**
 * @return bool
 */
bool Banio::get_RepuestoArt() {

    return this->RepuestoArt;
}

/**
 * @param bool
 * @return void
 */
void Banio::set_RepuestoArt(bool NuevoEstado) {

    this->RepuestoArt=NuevoEstado;

}