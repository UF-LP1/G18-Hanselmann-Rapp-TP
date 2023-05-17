#include "ArtFerreteria.h"

/**
 * ArtFerreteria implementation
 */

ArtFerreteria::ArtFerreteria(unsigned int Precio_, bool Cambio_, string EstadoArt_, string TipoProducto_, float Alto_, float Ancho_, float Largo_, unsigned int Cantidad_, string MaterialArtFerr_) :Articulo(Precio_, Cambio_, EstadoArt_, TipoProducto_, Alto_, Ancho_, Largo_, Cantidad_)
{
    this->MaterialArtFerr = MaterialArtFerr_;
}
ArtFerreteria::~ArtFerreteria()
{

}

string ArtFerreteria::get_MaterialArtFerr() 
{
    return this->MaterialArtFerr;
}

void ArtFerreteria::set_MaterialArtFerr(string NuevoEstado) 
{
    this->MaterialArtFerr = NuevoEstado;
}