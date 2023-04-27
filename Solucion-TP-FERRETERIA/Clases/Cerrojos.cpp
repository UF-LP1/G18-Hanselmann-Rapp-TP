/**
 * Project Untitled
 */


#include "Cerrojos.h"

/**
 * Cerrojos implementation
 */


/**
 * @return TipoCerrojo
 */
TipoCerrojo Cerrojos::get_Cerrojo() {

    return this->TipoCerrojo;

}

/**
 * @param TipoCerrojo
 * @return void
 */
void Cerrojos::set_Cerrojo(TipoCerrojo NuevoEstado) {

    this->TipoCerrojo=NuevoEstado;

}