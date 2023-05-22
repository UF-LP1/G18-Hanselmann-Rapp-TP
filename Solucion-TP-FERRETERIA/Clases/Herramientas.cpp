#include "Herramientas.h"

/**
 * Herramientas implementation
 */

Herramientas::Herramientas(unsigned int Precio_, bool Cambio_, string EstadoArt_, string TipoProducto_, float Alto_, float Ancho_, float Largo_, unsigned int Cantidad_, string MaterialArtFerr_, TipoHerramienta HerramientaArtFerr_, string MarcaHerrFerr_) :ArtFerreteria(Precio_, Cambio_, EstadoArt_, TipoProducto_, Alto_, Ancho_, Largo_, Cantidad_, MaterialArtFerr_)
{
    this->HerramientaArtFerr = HerramientaArtFerr_;
    this->MarcaHerrFerr = MarcaHerrFerr_;
}

Herramientas::~Herramientas()
{

}

TipoHerramienta Herramientas::get_HerramientaArtFerr() 
{
    return this->HerramientaArtFerr;
}

void Herramientas::set_HerramientaArtFerr(TipoHerramienta NuevoEstado) 
{
    this->HerramientaArtFerr = NuevoEstado;
}

string Herramientas::get_MarcaHerrFerr() 
{
    return this->MarcaHerrFerr;
}

void Herramientas::set_MarcaHerrFerr(string NuevoEstado) 
{
    this->MarcaHerrFerr = NuevoEstado;
}