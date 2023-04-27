/**
 * Project Untitled
 */


#include "Lamparas.h"

/**
 * Lamparas implementation
 */
Lamparas::Lamparas(enum TipoLampara TipoLampara_, string Disenio_)
{
    this->TipoLampara= TipoLampara_;
    this->Disenio = Disenio_;

}

Lamparas::~Lamparas()
{

}

/**
 * @return TipoLampara
 */
TipoLampara Lamparas::get_Lampara() {

    return this->TipoLampara;

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

    this->TipoLampara = NuevoEstado;

}

/**
 * @param string
 * @return void
 */
void Lamparas::set_Disenio(string NuevoEstado){

    this->Disenio = NuevoEstado;

}