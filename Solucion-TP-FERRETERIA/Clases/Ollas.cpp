/**
 * Project Untitled
 */


#include "Ollas.h"

/**
 * Ollas implementation
 */
Ollas::Ollas(TipoOlla TipoOlla_, string MaterialOlla_) {

    this->tipool = TipoOlla_;
    this->MaterialOlla = MaterialOlla_;
}

Ollas::~Ollas()
{

}

/**
 * @return TipoOlla
 */
TipoOlla Ollas::get_Olla() {

    return this->tipool;

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

    this->tipool = NuevoEstado;

}

/**
 * @param string
 * @return void
 */
void Ollas::set_MaterialOlla(string NuevoEstado){

    this->MaterialOlla = NuevoEstado;

}