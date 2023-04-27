/**
 * Project Untitled
 */


#include "Lamparas.h"

/**
 * Lamparas implementation
 */
Lamparas::Lamparas(TipoLampara TipoLampara_, string Disenio_)
{
    this->Lamp= TipoLampara_;
    this->Disenio = Disenio_;

}

Lamparas::~Lamparas()
{

}

/**
 * @return TipoLampara
 */
TipoLampara Lamparas::get_Lampara() {

    return this->Lamp;

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

    this->Lamp = NuevoEstado;

}

/**
 * @param string
 * @return void
 */
void Lamparas::set_Disenio(string NuevoEstado){

    this->Disenio = NuevoEstado;

}