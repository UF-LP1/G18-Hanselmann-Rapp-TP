#include "Tarugos.h"

/**
 * Tarugos implementation
 */
Tarugos::Tarugos(unsigned int Precio_, bool Cambio_, string EstadoArt_, string TipoProducto_, float Alto_, float Ancho_, float Largo_, unsigned int Cantidad_, string MaterialArtFerr_, TipoTarugo Tarugin_, string UtilidadTarugo_) :ArtFerreteria(Precio_, Cambio_, EstadoArt_, TipoProducto_, Alto_, Ancho_, Largo_, Cantidad_, MaterialArtFerr_)
{
    this->Tarugin = Tarugin_;
    this->UtilidadTarugo = UtilidadTarugo_;
}

Tarugos::~Tarugos()
{

}

TipoTarugo Tarugos::get_Tarugin() 
{
    return this->Tarugin;
}

string Tarugos::get_UtilidadTarugo() 
{
    return this->UtilidadTarugo; 
}

void Tarugos::set_Tarugin(TipoTarugo NuevoEstado) 
{
    this->Tarugin = NuevoEstado;
}

void Tarugos::set_UtilidadTarugo(string NuevoEstado) 
{
    this->UtilidadTarugo = NuevoEstado;
}