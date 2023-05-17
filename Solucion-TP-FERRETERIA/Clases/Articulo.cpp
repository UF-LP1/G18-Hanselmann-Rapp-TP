#include "Articulo.h"

/**
 * Articulo implementation
 */

unsigned int Articulo::CantidadMaximaArticulos = 0;

Articulo::Articulo(unsigned int Precio_, bool Cambio_, string EstadoArt_, string TipoProducto_, float Alto_, float Ancho_, float Largo_, unsigned int Cantidad_)
{
    this->Precio = Precio_;
    this->Cambio = Cambio_;
    this->EstadoArt = EstadoArt_;
    this->TipoProducto = TipoProducto_;
    this->Alto = Alto_;
    this->Ancho = Ancho_;
    this->Largo = Largo_;
    this->Cantidad = Cantidad_;
    CantidadMaximaArticulos++;
}

Articulo::~Articulo()
{
    CantidadMaximaArticulos--;
}

unsigned int Articulo::get_Precio() 
{
    return this->Precio;
}

bool Articulo::get_Cambio() 
{
    return this->Cambio;
}

string Articulo::get_EstadoArt() 
{
    return this->EstadoArt;
}

string Articulo::get_TipoProducto() 
{
    return this->TipoProducto;
}

float Articulo::get_Alto() 
{
    return this->Alto;
}

float Articulo::get_Ancho() 
{
    return this->Ancho;
}

float Articulo::get_Largo() 
{
    return this->Largo;
}

unsigned int Articulo::get_Cantidad() 
{
    return this->Cantidad;
}

unsigned int Articulo::get_CantidadMaximaArticulos()
{
    return CantidadMaximaArticulos;
}

void Articulo::set_Precio(unsigned int NuevoEstado) 
{
    this->Precio = NuevoEstado;
}

void Articulo::set_Cambio(bool NuevoEstado) 
{
    this->Cambio = NuevoEstado;
}

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

void Articulo::set_Cantidad(unsigned int NuevoEstado) 
{
    this->Cantidad = NuevoEstado;
}
