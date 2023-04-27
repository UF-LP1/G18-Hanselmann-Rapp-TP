/**
 * Project Untitled
 */


#include "Enchufes.h"

/**
 * Enchufes implementation
 */
Enchufes::Enchufes(enum TipoEnchufe TipoEnchufe_)
{
    this->TipoEnchufe = TipoEnchufe_;
}

Enchufes::~Enchufes() {

}

/**
 * @return TipoEnchufe
 */
TipoEnchufe Enchufes::get_Enchufe() {

    return this->TipoEnchufe;

}

/**
 * @param TipoEnchufe
 * @return void
 */
void Enchufes::set_Enchufe(TipoEnchufe NuevoEstado){

    this->TipoEnchufe = NuevoEstado;

}