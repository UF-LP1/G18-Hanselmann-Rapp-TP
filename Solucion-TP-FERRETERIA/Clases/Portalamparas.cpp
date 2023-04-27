/**
 * Project Untitled
 */


#include "Portalamparas.h"

/**
 * Portalamparas implementation
 */
Portalamparas::Portalamparas(TipoPortalamparas TipoPortalamparas_)
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