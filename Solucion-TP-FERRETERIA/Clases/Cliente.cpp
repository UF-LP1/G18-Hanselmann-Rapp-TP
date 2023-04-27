/**
 * Project Untitled
 */

#include "Cliente.h"

/**
 * Cliente implementation
 */

Cliente::Cliente(string Nombre_, string Apellido_, string DNI_, TipoSexo Sexo_, string Direccion_, MetodoPago MetodoPagoCli_, vector<Articulo> Articulos_, const string Foto_, const string ArtRoto_, const bool EnvoltorioIntaco_):Persona(Nombre_, Apellido_, DNI_, Sexo_)
{
    this->Direccion = Direccion_;
    this->MetodoPagoCli = MetodoPagoCli_;
    this->Articulos = Articulos_;
    
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

void Cliente::set_Direccion(string NuevoEstado)
{
    this->Direccion = NuevoEstado;
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

