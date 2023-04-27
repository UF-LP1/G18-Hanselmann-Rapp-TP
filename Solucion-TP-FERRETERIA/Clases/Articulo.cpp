/**
 * Project Untitled
 */

#include "Articulo.h"

/**
 * Articulo implementation
 */

Articulo::Articulo(unsigned int Precio_, bool Cambio_, string EstadoArt_, string TipoProducto_, float Alto_, float Ancho_, float Largo_, unsigned int Cantidad_, string ArticuloVendido_, unsigned int PrecioArtVendido_)
{
    this->Precio = Precio;
    this->Cambio = Cambio_;
    this->EstadoArt = EstadoArt_;
    this->TipoProducto = TipoProducto_;
    this->Alto = Alto_;
    this->Ancho = Ancho_;
    this->Largo = Largo_;
    this->Cantidad = Cantidad_;
    this->ArticuloVendido = ArticuloVendido_;
    this->PrecioArtVendido = PrecioArtVendido_;
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
string Articulo::get_TipoProducto() 
{
    return this->TipoProducto;
}

/**
 * @return const unsigned float
 */
float Articulo::get_Alto() 
{
    return this->Alto;
}

/**
 * @return const unsigned float
 */
float Articulo::get_Ancho() 
{
    return this->Ancho;
}

/**
 * @return unsigned int
 */
float Articulo::get_Largo() 
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

string Articulo::get_ArticuloVendido()
{
    return this->ArticuloVendido;
}

unsigned int Articulo::get_PrecioArtVendio()
{
    return this->PrecioArtVendido;
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

void Articulo::set_TipoProducto(string NuevoEstado)
{
    this->TipoProducto = NuevoEstado;
}

void Articulo::set_Alto(float NuevoEstado)
{
    this->Alto = NuevoEstado;
}

void Articulo::set_Ancho(float NuevoEstado)
{
    this->Ancho = NuevoEstado;
}

void Articulo::set_Largo(float NuevoEstado)
{
    this->Largo = NuevoEstado;
}

/**
 * @param unsigned int
 * @return void
 */
void Articulo::set_Cantidad(unsigned int NuevoEstado) 
{
    this->Cantidad = NuevoEstado;
}

void Articulo::set_ArticuloVendido(string NuevoEstado)
{
    this->ArticuloVendido = NuevoEstado;
}

void Articulo::set_PrecioArtVendio(unsigned int NuevoEstado)
{
    this->PrecioArtVendido = NuevoEstado;
}