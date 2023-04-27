/**
 * Project Untitled
 */

#include "Cerraduras.h"

/**
 * Cerraduras implementation
 */

Cerraduras::Cerraduras(unsigned int Precio_, bool Cambio_, string EstadoArt_, string TipoProducto_, float Alto_, float Ancho_, float Largo_, unsigned int Cantidad_, string ArticuloVendido_, unsigned int PrecioArtVendido_, string MaterialCerraj_, TipoCerradura Cerrad_) :Cerrajeria(Precio_, Cambio_, EstadoArt_, TipoProducto_, Alto_, Ancho_, Largo_, Cantidad_, ArticuloVendido_, PrecioArtVendido_, MaterialCerraj_)
{
    this->Cerrad = Cerrad_;
}
Cerraduras::~Cerraduras()
{

}

/**
 * @return TipoCerradura
 */
TipoCerradura Cerraduras::get_Cerrad() 
{
    return this->Cerrad;
}

/**
 * @param TipoCerradura
 * @return void
 */
void Cerraduras::set_Cerrad(TipoCerradura NuevoEstado) 
{
    this->Cerrad = NuevoEstado;
}