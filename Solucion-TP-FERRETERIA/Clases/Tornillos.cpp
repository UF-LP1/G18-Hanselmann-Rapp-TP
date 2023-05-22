#include "Tornillos.h"

Tornillos::Tornillos(unsigned int Precio_, bool Cambio_, string EstadoArt_, string TipoProducto_, float Alto_, float Ancho_, float Largo_, unsigned int Cantidad_, string MaterialArtFerr_, string CabezaTornillo_, string Rosca_, string Utilidad_, TipoTornillo tornillin_):ArtFerreteria(Precio_, Cambio_, EstadoArt_, TipoProducto_, Alto_, Ancho_, Largo_, Cantidad_, MaterialArtFerr_)
{
    this->CabezaTornillo = CabezaTornillo_;
    this->Rosca = Rosca_;
    this->Utilidad = Utilidad_;
    this->tornillin = tornillin_;
}

Tornillos::~Tornillos()
{

}

string Tornillos::get_CabezaTornillo() 
{
    return this->CabezaTornillo;
}

string Tornillos::get_Rosca() 
{
    return this->Rosca;
}

string Tornillos::get_Utilidad()
{
   return this->Utilidad;
}

TipoTornillo Tornillos::get_tornillin()
{
    return this->tornillin;
}

void Tornillos::set_CabezaTornillo(string NuevoEstado) 
{
    this->CabezaTornillo = NuevoEstado;
}

void Tornillos::set_Rosca(string NuevoEstado) 
{
    this->Rosca=NuevoEstado;
}

void Tornillos::set_Utilidad(string NuevoEstado) 
{
    this->Utilidad = NuevoEstado;
}

void Tornillos::set_tornillin(TipoTornillo NuevoEstado)
{
    this->tornillin = NuevoEstado;
}