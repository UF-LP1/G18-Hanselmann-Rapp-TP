/**
 * Project Untitled
 */


#include "Enchufes.h"

/**
 * Enchufes implementation
 */
Enchufes::Enchufes(TipoEnchufe TipoEnchufe_)
{
    this->Enchu = TipoEnchufe_;
}

Enchufes::~Enchufes() {

}

/**
 * @return TipoEnchufe
 */
TipoEnchufe Enchufes::get_Enchufe() {

    return this->Enchu;

}

/**
 * @param TipoEnchufe
 * @return void
 */
void Enchufes::set_Enchufe(TipoEnchufe NuevoEstado){

    this->Enchu = NuevoEstado;

}