/**
 * Project Untitled
 */


#include "BarralesCortina.h"

/**
 * BarralesCortina implementation
 */
BarralesCortina::BarralesCortina(TipoBarrales Tipobarrales_, string MaterialBarrales_, unsigned int Ganchos_)
{
    this->TipoBarrales = TipoBarrales_;
    this->MaterialBarrales = MaterialBarrales_;
    this->Ganchos = Ganchos_;
}

BarralesCortina::~BarralesCortina()
{

}

/**
 * @return TipoBarrales
 */
TipoBarrales BarralesCortina::get_Barrales() {

    return this->TipoBarrales;

}

/**
 * @return string
 */
string BarralesCortina::get_MaterialBarrales() {

    return this->MaterialBarrales;

}

/**
 * @param TipoBarrales
 * @return void
 */
void BarralesCortina::set_Barrales(TipoBarrales NuevoEstado) {

    this->TipoBarrales = NuevoEstado;

}

/**
 * @param string
 * @return void
 */
void BarralesCortina::set_MaterialBarrales(string NuevoEstado) {

    this->MaterialBarrales = NuevoEstado;

}

/**
 * @return unsigned int
 */
unsigned int BarralesCortina::get_Ganchos() {

    return this->Ganchos;

}

/**
 * @param unsigned int
 * @return void
 */
void BarralesCortina::set_Ganchos(unsigned int NuevoEstado) {

    this->Ganchos=NuevoEstado;

}