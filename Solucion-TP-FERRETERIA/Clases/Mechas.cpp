/**
 * Project Untitled
 */


#include "Mechas.h"

/**
 * Mechas implementation
 */


/**
 * @return TipoMecha
 */
TipoMecha Mechas::get_Mecha() {

    return this->TipoMecha;// DUDA ENUM

}

/**
 * @return string
 */
string Mechas::get_Utilidad() {

    return this->Utilidad;
}

/**
 * @param TipoMecha
 * @return void
 */
void Mechas::set_Mecha(TipoMecha NuevoEstado) {

    this->TipoMecha= NuevoEstado;//DUDA ENUM

}

/**
 * @param string
 * @return void
 */
void Mechas::set_Utilidad(string NuevoEstado) {

    this->Utilidad=NuevoEstado;

}