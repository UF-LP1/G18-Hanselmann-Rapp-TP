/**
 * Project Untitled
 */

#include "Lamparas.h"

/**
 * Lamparas implementation
 */
Lamparas::Lamparas(unsigned int Precio_, bool Cambio_, string EstadoArt_, string TipoProducto_, float Alto_, float Ancho_, float Largo_, unsigned int Cantidad_, unsigned int Tension_, unsigned int Potencia_, TipoLampara TipoLampara_, string Disenio_):Electricidad(Precio_, Cambio_, EstadoArt_, TipoProducto_, Alto_, Ancho_, Largo_, Cantidad_, Tension_, Potencia_)
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
TipoLampara Lamparas::get_Lamp() 
{
    return this->Lamp;
}

/**
 * @return string
 */
string Lamparas::get_Disenio() 
{
    return this->Disenio;
}

/**
 * @param TipoLampara
 * @return void
 */
void Lamparas::set_Lamp(TipoLampara NuevoEstado)
{
    this->Lamp = NuevoEstado;
}

/**
 * @param string
 * @return void
 */
void Lamparas::set_Disenio(string NuevoEstado)
{
    this->Disenio = NuevoEstado;
}