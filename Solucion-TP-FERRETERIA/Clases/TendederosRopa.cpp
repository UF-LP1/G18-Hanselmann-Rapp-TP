/**
 * Project Untitled
 */


#include "TendederosRopa.h"

/**
 * TendederosRopa implementation
 */
TendederosRopa::TendederosRopa(enum TipoTendedero TipoTendedero_, string MaterialTendedero_) {

    this->TipoTendedero = TipoTendedero_;
    this->MaterialTendedero = MaterialTendedero_;
}

TendederosRopa::~TendederosRopa() {

}

/**
 * @return TipoTendedero
 */
TipoTendedero TendederosRopa::get_Tendedero() {

    return this->TipoTendedero;

}

/**
 * @return string
 */
string TendederosRopa::get_MaterialTendedero() {

    return MaterialTendedero;

}

/**
 * @param TipoTendedero
 * @return void
 */
void TendederosRopa::set_Tendedero(TipoTendedero NuevoEstado){

    this->TipoTendedero = NuevoEstado;

}

/**
 * @param string
 * @return void
 */
void TendederosRopa::set_MaterialTendedero (string NuevoEstado){

    this->MaterialTendedero = NuevoEstado;

}