/**
 * Project Untitled
 */


#include "Cocina.h"

/**
 * Cocina implementation
 */
Cocina::Cocina(bool RepuestoArt_) {

    this->RepuestoArt = RepuestoArt_;
}

Cocina::~Cocina()
{

}

/**
 * @return bool
 */
bool Cocina::get_RepuestoArt() {

    return this->RepuestoArt;

}

/**
 * @param bool
 * @return void
 */
void Cocina::set_RepuestoArt(bool NuevoEstado) {

    this->RepuestoArt=NuevoEstado;

}