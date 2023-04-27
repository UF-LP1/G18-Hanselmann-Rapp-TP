/**
 * Project Untitled
 */

#include "Articulo.h"

/**
 * Articulo implementation
 */

Articulo::Articulo(unsigned int Precio_, bool Cambio_, string EstadoArt_, string TipoProducto_, float Alto_, float Ancho_, float Largo_, unsigned int Cantidad_, string ArticuloVendido_, unsigned int PrecioArtVendido_): Precio(Precio_), Cambio(Cambio_), EstadoArt(EstadoArt_), TipoProducto(TipoProducto_), Alto(Alto_), Ancho(Ancho_), Largo(Largo_), Cantidad(Cantidad_), ArticuloVendido(ArticuloVendido_), PrecioArtVendido(PrecioArtVendido_)
{

}

Articulo::~Articulo()
{

}

/**
 * @return unsigned float
 */
unsigned int Articulo::get_Precio() 
{
    return this->Precio;
}

/**
 * @return bool
 */
bool Articulo::get_Cambio() 
{
    return this->Cambio;
}

/**
 * @return string
 */
string Articulo::get_EstadoArt() 
{
    return this->EstadoArt;
}

/**
 * @return const string
 */
const string Articulo::get_TipoProducto() 
{
    return this->TipoProducto;
}

/**
 * @return const unsigned float
 */
const float Articulo::get_Alto() 
{
    return this->Alto;
}

/**
 * @return const unsigned float
 */
const float Articulo::get_Ancho() 
{
    return this->Ancho;
}

/**
 * @return unsigned int
 */
const float Articulo::get_Largo() 
{
    return this->Largo;
}

/**
 * @return unsigned int
 */
unsigned int Articulo::get_Cantidad() 
{
    return this->Cantidad;
}

/**
 * @param unsigned float
 * @return void
 */
void Articulo::set_Precio(unsigned int NuevoEstado) 
{
    this->Precio = NuevoEstado;
}

/**
 * @param bool
 * @return void
 */
void Articulo::set_Cambio(bool NuevoEstado) 
{
    this->Cambio = NuevoEstado;
}

/**
 * @param string
 * @return void
 */
void Articulo::set_EstadoArt(string NuevoEstado) 
{
    this->EstadoArt = NuevoEstado;
}

/**
 * @param unsigned int
 * @return void
 */
void Articulo::set_Cantidad(unsigned int NuevoEstado) 
{
    this->Cantidad = NuevoEstado;
}