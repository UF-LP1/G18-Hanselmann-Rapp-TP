/**
 * Project Untitled
 */


#include "TendederosRopa.h"

/**
 * TendederosRopa implementation
 */
TendederosRopa::TendederosRopa(TipoTendedero TipoTendedero_, string MaterialTendedero_) {

    this->tipoten = TipoTendedero_;
    this->MaterialTendedero = MaterialTendedero_;
}

TendederosRopa::~TendederosRopa() {

}

/**
 * @return TipoTendedero
 */
TipoTendedero TendederosRopa::get_Tendedero() {

    return this->tipoten;

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

    this->tipoten = NuevoEstado;

}

/**
 * @param string
 * @return void
 */
void TendederosRopa::set_MaterialTendedero (string NuevoEstado){

    this->MaterialTendedero = NuevoEstado;

}