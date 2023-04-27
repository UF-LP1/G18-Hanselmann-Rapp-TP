/**
 * Project Untitled
 */


#include "Bazar.h"

/**
 * Bazar implementation
 */
Bazar::Bazar(unsigned int Precio_, bool Cambio_, string EstadoArt_, string TipoProducto_, float Alto_, float Ancho_, float Largo_, unsigned int Cantidad_, string ArticuloVendido_, unsigned int PrecioArtVendido_, string Color_): Articulo(Precio_, Cambio_, EstadoArt_, TipoProducto_, Alto_, Ancho_, Largo_, Cantidad_, ArticuloVendido_, PrecioArtVendido_) {

    this->Color = Color_;
}

Bazar::~Bazar()
{

}

/**
 * @return string
 */
string Bazar::get_Color() {

    return this->Color;
}

/**
 * @param string
 * @return void
 */
void Bazar::set_Color(string NuevoEstado) {

    this->Color=NuevoEstado;

}