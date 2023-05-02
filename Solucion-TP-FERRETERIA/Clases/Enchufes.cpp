/**
 * Project Untitled
 */

#include "Enchufes.h"

/**
 * Enchufes implementation
 */
Enchufes::Enchufes(unsigned int Precio_, bool Cambio_, string EstadoArt_, string TipoProducto_, float Alto_, float Ancho_, float Largo_, unsigned int Cantidad_, string ArticuloVendido_, unsigned int PrecioArtVendido_, unsigned int Tension_, unsigned int Potencia_, TipoEnchufe TipoEnchufe_):Electricidad(Precio_, Cambio_, EstadoArt_, TipoProducto_, Alto_, Ancho_, Largo_, Cantidad_, ArticuloVendido_, PrecioArtVendido_, Tension_, Potencia_)
{
    this->Enchu = TipoEnchufe_;
}

Enchufes::~Enchufes() 
{

}

/**
 * @return TipoEnchufe
 */
TipoEnchufe Enchufes::get_Enchu() 
{
    return this->Enchu;
}

/**
 * @param TipoEnchufe
 * @return void
 */
void Enchufes::set_Enchu(TipoEnchufe NuevoEstado)
{
    this->Enchu = NuevoEstado;
}