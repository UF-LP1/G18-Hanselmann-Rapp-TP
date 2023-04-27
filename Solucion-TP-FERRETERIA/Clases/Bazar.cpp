/**
 * Project Untitled
 */


#include "Bazar.h"

/**
 * Bazar implementation
 */
Bazar::Bazar(string Color_) {

    this->Color = Color_;
}

Bazar::~Bazar()
{

}

/**
 * @return string
 */
string Bazar::get_Color() {

    return this->Color;
}

/**
 * @param string
 * @return void
 */
void Bazar::set_Color(string NuevoEstado) {

    this->Color=NuevoEstado;

}