/**
 * Project Untitled
 */

#include "Cliente.h"

/**
 * Cliente implementation
 */

Cliente::Cliente(string Nombre_, string Apellido_, const string DNI_, TipoSexo Sexo_, string Direccion_, MetodoPago MetodoPagoCli_, list<Articulo> Articulos_, const string Foto_, const string ArtRoto_, bool EnvoltorioIntaco_) :Persona(Nombre_, Apellido_, DNI_, Sexo_)
{
    this->Direccion = Direccion_;
    this->MetodoPagoCli = MetodoPagoCli_;
    this->Articulos = Articulos_;
    this->EnvoltorioIntacto = EnvoltorioIntaco_;
}

Cliente::~Cliente()
{

}

/**
 * @return const string
 */
string Cliente::get_Direccion() 
{
    return this->Direccion;
}

/**
 * @return MetodoPago
 */
MetodoPago Cliente::get_MetodoPagoCli() 
{
    return this->MetodoPagoCli;
}

/**
 * @return string
 */
list <Articulo> Cliente::get_Articulos()
{
    return this->Articulos;
}

/**
 * @return const string
 */
const string Cliente::get_Foto() 
{
    return this->Foto;
}

/**
 * @return const string
 */
const string Cliente::get_ArtRoto() 
{
    return this->ArtRoto;
}

/**
 * @return const bool
 */
bool Cliente::get_EnvoltorioIntacto() 
{
    return this->EnvoltorioIntacto;
}

/**
 * @param MetodoPago
 * @return void
 */
void Cliente::set_MetodoPagoCli(MetodoPago NuevoEstado) 
{
    this->MetodoPagoCli = NuevoEstado;
}

void Cliente::set_Direccion(string NuevoEstado)
{
    this->Direccion = NuevoEstado;
}

/**
 * @param string
 * @return void
 */
void Cliente::set_Articulos(list <Articulo> NuevoEstado)
{
    this->Articulos = NuevoEstado;
}

void Cliente::set_EnvoltorioIntacto(bool NuevoEstado)
{
    this->EnvoltorioIntacto = NuevoEstado;
}

/**
 * @param Precio
 * @return void
 */
void Cliente::elegir_art(Articulo art)  //agregar al carrito
{

    int stock;
    stock = art.get_Cantidad();

    if (stock == 0) 
    {

       }
       // throw;

    else {
        this->Articulos.push_back(art);
    }

}