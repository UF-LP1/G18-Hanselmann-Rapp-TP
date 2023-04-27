/**
 * Project Untitled
 */

#include "Mechas.h"

/**
 * Mechas implementation
 */

Mechas::Mechas(unsigned int Precio_, bool Cambio_, string EstadoArt_, string TipoProducto_, float Alto_, float Ancho_, float Largo_, unsigned int Cantidad_, string ArticuloVendido_, unsigned int PrecioArtVendido_, string MaterialArtFerr_, TipoMecha Mechita_, string UtilidadMecha_) :ArtFerreteria(Precio_, Cambio_, EstadoArt_, TipoProducto_, Alto_, Ancho_, Largo_, Cantidad_, ArticuloVendido_, PrecioArtVendido_, MaterialArtFerr_)
{
    this->Mechita = Mechita_;
    this->UtilidadMecha = UtilidadMecha_;
}

Mechas::~Mechas()
{

}

/**
 * @return TipoMecha
 */
TipoMecha Mechas::get_Mechita() 
{
    return this->Mechita;
}

/**
 * @return string
 */
string Mechas::get_UtilidadMecha() 
{
    return this->UtilidadMecha;
}

/**
 * @param TipoMecha
 * @return void
 */
void Mechas::set_Mechita(TipoMecha NuevoEstado) 
{
    this->Mechita = NuevoEstado;
}

/**
 * @param string
 * @return void
 */
void Mechas::set_UtilidadMecha(string NuevoEstado) 
{
    this->UtilidadMecha = NuevoEstado;
}