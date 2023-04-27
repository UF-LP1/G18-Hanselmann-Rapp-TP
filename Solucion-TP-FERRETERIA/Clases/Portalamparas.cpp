/**
 * Project Untitled
 */


#include "Portalamparas.h"

/**
 * Portalamparas implementation
 */
Portalamparas::Portalamparas(enum TipoPortalamparas TipoPortalamparas_)
{
    this->TipoPortalamparas = TipoPortalamparas_;
}

Portalamparas::~Portalamparas()
{

}

/**
 * @return TipoPortalamparas
 */
TipoPortalamparas Portalamparas::get_Portalamparas(){

    return this->TipoPortalamparas;

}

/**
 * @param TipoPortalamparas
 * @return void
 */
void Portalamparas::set_PortaLamparas (TipoPortalamparas NuevoEstado){

    this->TipoPortalamparas = NuevoEstado;