/**
 * Project Untitled
 */


#include "Cables.h"

/**
 * Cables implementation
 */
Cables::Cables(TipoConductor TipoConductor_, string Aislamiento_, string Cubierta_)
{
    this->Conduc = TipoConductor_;
    this->Aislamiento = Aislamiento_;
    this->Cubierta = Cubierta_;

}

Cables::~Cables()
{

}

/**
 * @return TipoConductor
 */
TipoConductor Cables::get_Conductores() {

    return this->Conduc;

}

/**
 * @return string
 */
string Cables::get_Aislamiento() {

    return this->Aislamiento;

}

/**
 * @return string
 */
string Cables::get_Cubierta() {

    return this->Cubierta;

}

/**
 * @param TipoConductor
 * @return void
 */
void Cables::set_Conductores (TipoConductor NuevoEstado){

    this->Conduc = NuevoEstado;

}

/**
 * @param string
 * @return void
 */
void Cables::set_Aislamiento (string NuevoEstado){

    this->Aislamiento = NuevoEstado;

}

/**
 * @param string
 * @return void
 */
void Cables::set_Cubierta (string NuevoEstado){

    this->Cubierta = NuevoEstado;

}