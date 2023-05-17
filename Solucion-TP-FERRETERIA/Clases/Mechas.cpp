#include "Mechas.h"

/**
 * Mechas implementation
 */

Mechas::Mechas(unsigned int Precio_, bool Cambio_, string EstadoArt_, string TipoProducto_, float Alto_, float Ancho_, float Largo_, unsigned int Cantidad_, string MaterialArtFerr_, TipoMecha Mechita_, string UtilidadMecha_) :ArtFerreteria(Precio_, Cambio_, EstadoArt_, TipoProducto_, Alto_, Ancho_, Largo_, Cantidad_, MaterialArtFerr_)
{
    this->Mechita = Mechita_;
    this->UtilidadMecha = UtilidadMecha_;
}

Mechas::~Mechas()
{

}

TipoMecha Mechas::get_Mechita() 
{
    return this->Mechita;
}

string Mechas::get_UtilidadMecha() 
{
    return this->UtilidadMecha;
}

void Mechas::set_Mechita(TipoMecha NuevoEstado) 
{
    this->Mechita = NuevoEstado;
}

void Mechas::set_UtilidadMecha(string NuevoEstado) 
{
    this->UtilidadMecha = NuevoEstado;
}