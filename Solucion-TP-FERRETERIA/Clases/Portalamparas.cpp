/**
 * Project Untitled
 */


#include "Portalamparas.h"

/**
 * Portalamparas implementation
 */
Portalamparas::Portalamparas(unsigned int Precio_, bool Cambio_, string EstadoArt_, string TipoProducto_, float Alto_, float Ancho_, float Largo_, unsigned int Cantidad_, string ArticuloVendido_, unsigned int PrecioArtVendido_, unsigned int Tension_, unsigned int Potencia_, TipoPortalamparas TipoPortalamparas_):Electricidad(Precio_, Cambio_, EstadoArt_, TipoProducto_, Alto_, Ancho_, Largo_, Cantidad_, ArticuloVendido_, PrecioArtVendido_, Tension_, Potencia_)
{
    this->Portalamp = TipoPortalamparas_;
}

Portalamparas::~Portalamparas()
{

}

/**
 * @return TipoPortalamparas
 */
TipoPortalamparas Portalamparas::get_Portalamparas(){

    return this->Portalamp;

}

/**
 * @param TipoPortalamparas
 * @return void
 */
void Portalamparas::set_PortaLamparas (TipoPortalamparas NuevoEstado){

    this->Portalamp = NuevoEstado;