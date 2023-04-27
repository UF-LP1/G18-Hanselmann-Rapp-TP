/**
 * Project Untitled
 */


#include "Banio.h"

/**
 * Banio implementation
 */

Banio::Banio(bool RepuestoArt_) 
{

    this->RepuestoArt = RepuestoArt_;
}

Banio::~Banio() {

}
/**
 * @return bool
 */
bool Banio::get_RepuestoArt() {

    return this->RepuestoArt;
}

/**
 * @param bool
 * @return void
 */
void Banio::set_RepuestoArt(bool NuevoEstado) {

    this->RepuestoArt=NuevoEstado;

}