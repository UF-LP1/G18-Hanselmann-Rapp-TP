/**
 * Project Untitled
 */


#include "Tarugos.h"

/**
 * Tarugos implementation
 */


/**
 * @return TipoTarugo
 */
TipoTarugo Tarugos::get_Tarugo() {

    return this->TipoTarugo;

}

/**
 * @return string
 */
string Tarugos::get_Utilidad() {

    return this->Utilidad;
}

/**
 * @param TipoTarugo
 * @return void
 */
void Tarugos::set_Tarugo(TipoTarugo NuevoEstado) {
   
    this->TipoTarugo = NuevoEstado;
}

/**
 * @param string
 * @return void
 */
void Tarugos::set_Utilidad(string NuevoEstado) {

    this->Utilidad = NuevoEstado;

}