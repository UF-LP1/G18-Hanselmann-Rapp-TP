/**
 * Project Untitled
 */


#include "Ollas.h"

/**
 * Ollas implementation
 */
Ollas::Ollas(enum TipoOlla TipoOlla_, string MaterialOlla_) {

    this->TipoOlla = TipoOlla_;
    this->MaterialOlla = MaterialOlla_;
}

Ollas::~Ollas()
{

}

/**
 * @return TipoOlla
 */
TipoOlla Ollas::get_Olla() {

    return this->TipoOlla;

}

/**
 * @return string
 */
string Ollas::get_MaterialOlla() {

    return this->MaterialOlla;

}

/**
 * @param TipoOlla
 * @return void
 */
void Ollas::set_Olla(TipoOlla NuevoEstado){

    this->TipoOlla = NuevoEstado;

}

/**
 * @param string
 * @return void
 */
void Ollas::set_MaterialOlla(string NuevoEstado){

    this->MaterialOlla = NuevoEstado;

}