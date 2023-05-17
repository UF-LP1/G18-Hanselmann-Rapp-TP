#include "Cliente.h"

/**
 * Cliente implementation
 */

//&Articulos_

Cliente::Cliente(const string DNI_, string Nombre_, string Apellido_, TipoSexo Sexo_, string Foto_, string ArtRoto_, string Direccion_, MetodoPago MetodoPagoCli_, list<Articulo> Articulos_, bool EnvoltorioIntaco_, list<HerramientasAlquiler> Herr_Alquiler_, bool EnvioDomicilio_, bool duplicadollave_) :Persona(DNI_, Nombre_, Apellido_, Sexo_)
{
    this->Foto = Foto_;
    this->ArtRoto = ArtRoto_;
    this->Direccion = Direccion_;
    this->MetodoPagoCli = MetodoPagoCli_;
    this->Articulos = Articulos_;
    this->EnvoltorioIntacto = EnvoltorioIntaco_;
    this->Herr_Alquiler = Herr_Alquiler_;
    this->EnvioDomicilio = EnvioDomicilio_;
    this->duplicadollave = duplicadollave_;
}

Cliente::~Cliente()
{

}


string Cliente::get_Nombre()
{
    return this->Nombre;
}

string Cliente::get_Direccion() 
{
    return this->Direccion;
}

MetodoPago Cliente::get_MetodoPagoCli() 
{
    return this->MetodoPagoCli;
}

list <Articulo> Cliente::get_Articulos()
{
    return this->Articulos;
}

string Cliente::get_Foto() 
{
    return this->Foto;
}

string Cliente::get_ArtRoto() 
{
    return this->ArtRoto;
}

bool Cliente::get_EnvoltorioIntacto() 
{
    return this->EnvoltorioIntacto;
}

list <HerramientasAlquiler> Cliente::get_Herr_Alquiler()
{
    return this->Herr_Alquiler;
}

bool Cliente::get_EnvioDomicilio()
{
    return this->EnvioDomicilio;
}

bool Cliente::get_Dupllaves()
{
    return this->duplicadollave;
}

void Cliente::set_MetodoPagoCli(MetodoPago NuevoEstado) 
{
    this->MetodoPagoCli = NuevoEstado;
}

void Cliente::set_Foto(string NuevoEstado)
{
    this->Foto = NuevoEstado;
}

void Cliente::set_ArtRoto(string NuevoEstado)
{
    this->ArtRoto = NuevoEstado;
}

void Cliente::set_Direccion(string NuevoEstado)
{
    this->Direccion = NuevoEstado;
}

void Cliente::set_Articulos(list <Articulo> NuevoEstado)
{
    this->Articulos = NuevoEstado;
}

void Cliente::set_EnvoltorioIntacto(bool NuevoEstado)
{
    this->EnvoltorioIntacto = NuevoEstado;
}

void Cliente::set_Herr_Alquiler(list <HerramientasAlquiler> NuevoEstado)
{
    this->Herr_Alquiler = NuevoEstado;
}

void Cliente::set_EnvioDomicilio(bool NuevoEstado)
{
    this->EnvioDomicilio = NuevoEstado;
}

void Cliente::set_Dupllaves(bool NuevoEstado)
{
    this->duplicadollave = NuevoEstado;
} 

int Cliente::elegir_art(Articulo art)  //Agregar al carrito y probamos el Trycatch (Arreglarlo)
{
    list<Articulo>::iterator itArt;
 
    list<Articulo> arti = get_Articulos();

    itArt = arti.begin();
    int stock=0, i=0;
    stock = itArt->get_Cantidad();

    for (i = 0; i < arti.size(); i++, itArt++)
    {
        stock = itArt->get_Cantidad();
        if (stock <= 0)
        {
            throw stock;
        }
        else
        {
            this->Articulos.push_back(art);
            return itArt->get_Cantidad();
        }
    }
}