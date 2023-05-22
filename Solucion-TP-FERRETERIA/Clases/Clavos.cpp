#include "Clavos.h"

/**
 * Clavos implementation
 */
Clavos::Clavos(unsigned int Precio_, bool Cambio_, string EstadoArt_, string TipoProducto_, float Alto_, float Ancho_, float Largo_, unsigned int Cantidad_, string MaterialArtFerr_, TipoClavo Clavito_, string CabezaClavo_):ArtFerreteria(Precio_, Cambio_, EstadoArt_, TipoProducto_, Alto_, Ancho_, Largo_, Cantidad_, MaterialArtFerr_)
{
    this->Clavito = Clavito_;
    this->CabezaClavo = CabezaClavo_;
}

Clavos::~Clavos()
{

}

TipoClavo Clavos::get_Clavito() 
{
    return this->Clavito;
}

string Clavos::get_CabezaClavo() 
{
    return this->CabezaClavo;
}

void Clavos::set_Clavito(TipoClavo NuevoEstado) 
{
    this->Clavito=NuevoEstado;
}

void Clavos::set_CabezaClavo(string NuevoEstado) 
{
    this->CabezaClavo=NuevoEstado;
}