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

    return this->TipoTarugo; //ENUM DUDA
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

    this->TipoTarugo=NuevoEstado;//ENUM DUDA

}

/**
 * @param string
 * @return void
 */
void Tarugos::set_Utilidad(string NuevoEstado) {

    this->Utilidad= NuevoEstado;
}