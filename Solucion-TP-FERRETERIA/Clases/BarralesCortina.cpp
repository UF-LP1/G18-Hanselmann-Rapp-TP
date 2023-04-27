/**
 * Project Untitled
 */


#include "BarralesCortina.h"

/**
 * BarralesCortina implementation
 */
BarralesCortina::BarralesCortina(TipoBarreles Tipobarreles_, string MaterialBarreles_, unsigned int Ganchos_)
{
    this->tipoba = Tipobarreles_;
    this->MaterialBarreles = MaterialBarreles_;
    this->Ganchos = Ganchos_;
}

BarralesCortina::~BarralesCortina()
{

}

/**
 * @return TipoBarrales
 */
TipoBarreles BarralesCortina::get_Barrales() {

    return this->tipoba;

}

/**
 * @return string
 */
string BarralesCortina::get_MaterialBarrales() {

    return this->MaterialBarreles;

}

/**
 * @param TipoBarrales
 * @return void
 */
void BarralesCortina::set_Barrales(TipoBarreles NuevoEstado) {

    this->tipoba = NuevoEstado;

}

/**
 * @param string
 * @return void
 */
void BarralesCortina::set_MaterialBarrales(string NuevoEstado) {

    this->MaterialBarreles = NuevoEstado;

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