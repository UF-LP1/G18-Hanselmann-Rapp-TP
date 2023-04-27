/**
 * Project Untitled
 */

#include "Cliente.h"

/**
 * Cliente implementation
 */

Cliente::Cliente(string Direccion_, MetodoPago MetodoPagoCli_, vector<Articulo> Articulos_, string Foto_, string ArtRoto_, bool EnvoltorioIntacto_):Direccion(Direccion_), MetodoPagoCli(MetodoPagoCli_), Articulos(Articulos_), Foto(Foto_), ArtRoto(ArtRoto_), EnvoltorioIntacto(EnvoltorioIntacto_)
{

}

Cliente::~Cliente()
{

}

/**
 * @return const string
 */
const string Cliente::get_Direccion() 
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
vector <Articulo> Cliente::get_Articulos()
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
const bool Cliente::get_EnvoltorioIntacto() 
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

/**
 * @param string
 * @return void
 */
void Cliente::set_Articulos(vector <Articulo> NuevoEstado)
{
    this->Articulos= NuevoEstado;
}

/**
 * @return void
 */
void Cliente::MostrarFoto() 
{
    return;
}

/**
 * @return void
 */
void Cliente::MostrarArtRoto() 
{
    return;
}

/**
 * @return void
 */
void Cliente::MostrarEnvoltorioInt() 
{
    return;
}

/**
 * @param Precio
 * @return void
 */
void Cliente::elegir_art(Articulo art)  //precio
{
    return;
}

