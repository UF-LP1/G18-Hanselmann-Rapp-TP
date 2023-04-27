/**
 * Project Untitled
 */


#include "Cerraduras.h"

/**
 * Cerraduras implementation
 */


/**
 * @return TipoCerradura
 */
TipoCerradura Cerraduras::get_Tipo() {

    return this->TipoCerradura;

}

/**
 * @param TipoCerradura
 * @return void
 */
void Cerraduras::set_Tipo(TipoCerradura NuevoEstado) {

    this->TipoCerradura=NuevoEstado;

}