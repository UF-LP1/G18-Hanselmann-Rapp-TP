/**
 * Project Untitled
 */

#include "Portalamparas.h"

/**
 * Portalamparas implementation
 */
Portalamparas::Portalamparas(unsigned int Precio_, bool Cambio_, string EstadoArt_, string TipoProducto_, float Alto_, float Ancho_, float Largo_, unsigned int Cantidad_, unsigned int Tension_, unsigned int Potencia_, TipoPortalamparas PortaLamp_):Electricidad(Precio_, Cambio_, EstadoArt_, TipoProducto_, Alto_, Ancho_, Largo_, Cantidad_, Tension_, Potencia_)
{
    this->PortaLamp = PortaLamp_;
}

Portalamparas::~Portalamparas()
{

}

/**
 * @return TipoPortalamparas
 */
TipoPortalamparas Portalamparas::get_PortaLamp()
{
    return this->PortaLamp;
}

/**
 * @param TipoPortalamparas
 * @return void
 */
void Portalamparas::set_PortaLamp(TipoPortalamparas NuevoEstado)
{
    this->PortaLamp = NuevoEstado;
}