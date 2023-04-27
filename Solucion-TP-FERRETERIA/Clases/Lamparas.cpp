/**
 * Project Untitled
 */


#include "Lamparas.h"

/**
 * Lamparas implementation
 */


/**
 * @return TipoLampara
 */
TipoLampara Lamparas::get_Lampara() {

    return this->TipoLampara;//DUDA ENUM

}


/**
 * @return string
 */
string Lamparas::get_Disenio() {

    return this->Disenio;

}

/**
 * @param TipoLampara
 * @return void
 */
void Lamparas::set_Lampara(TipoLampara NuevoEstado){

    this->TipoLampara = NuevoEstado;//DUDA ENUM

}

/**
 * @param string
 * @return void
 */
void Lamparas::set_Disenio(string NuevoEstado){

    this->Disenio = NuevoEstado;

}