/**
 * Project Untitled
 */


#include "Electricidad.h"

/**
 * Electricidad implementation
 */
Electricidad::Electricidad(unsigned int Tension_, unsigned int Potencia_)
{
    this->Tension = Tension_;
    this->Potencia = Potencia_;
}

/**
 * @return unsigned int
 */
unsigned int Electricidad::get_Tension() {

    return this->Tension;

}

/**
 * @return unsigned int
 */
unsigned int Electricidad::get_Potencia() {

    return this->Potencia;

}

/**
 * @param unsigned int
 * @return void
 */
void Electricidad::set_Tension(unsigned int NuevoEstado) {

    this->Tension = NuevoEstado;

}

/**
 * @param unsigned int
 * @return void
 */
void Electricidad::set_Potencia(unsigned int NuevoEstado) {

    this->Potencia=NuevoEstado;

}