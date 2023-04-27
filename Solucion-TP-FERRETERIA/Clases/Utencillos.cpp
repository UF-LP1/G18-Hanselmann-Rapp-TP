/**
 * Project Untitled
 */


#include "Utencillos.h"

/**
 * Utencillos implementation
 */
Utencillos::Utencillos(enum TipoUtencillo TipoUtencillo_, string MaterialUtencillo_)
{
    this->TipoUtencillo = TipoUtencillo_;
    this->MaterialUtencillo = MaterialUtencillo_;
}

Utencillos::~Utencillos() {

}
/**
 * @return TipoUtencillo
 */
TipoUtencillo Utencillos::get_Utencillo() {

    return this->TipoUtencillo;

}


/**
 * @return string
 */
string Utencillos::get_MaterialUtencillo() {

    return this->MaterialUtencillo;

}

/**
 * @param TipoUtencillo
 * @return void
 */
void Utencillos::set_Utencillo(TipoUtencillo NuevoEstado){

    this->TipoUtencillo = NuevoEstado; 

}

/**
 * @param string
 * @return void
 */
void Utencillos::set_MaterialUtencillo(string NuevoEstado){

    this->MaterialUtencillo = NuevoEstado;

}