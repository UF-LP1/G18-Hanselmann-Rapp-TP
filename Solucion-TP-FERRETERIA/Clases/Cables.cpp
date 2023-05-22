/**
 * Project Untitled
 */

#include "Cables.h"

/**
 * Cables implementation
 */
Cables::Cables(unsigned int Precio_, bool Cambio_, string EstadoArt_, string TipoProducto_, float Alto_, float Ancho_, float Largo_, unsigned int Cantidad_, unsigned int Tension_, unsigned int Potencia_, TipoConductor TipoConductor_, string Aislamiento_, string Cubierta_):Electricidad(Precio_, Cambio_, EstadoArt_, TipoProducto_, Alto_, Ancho_, Largo_, Cantidad_, Tension_, Potencia_)
{
    this->Conduc = TipoConductor_;
    this->Aislamiento = Aislamiento_;
    this->Cubierta = Cubierta_;

}

Cables::~Cables()
{

}

TipoConductor Cables::get_Conductores() 
{
    return this->Conduc;
}

string Cables::get_Aislamiento() 
{
    return this->Aislamiento;
}

string Cables::get_Cubierta()
{
    return this->Cubierta;
}

void Cables::set_Conductores (TipoConductor NuevoEstado)
{
    this->Conduc = NuevoEstado;
}

void Cables::set_Aislamiento (string NuevoEstado)
{
    this->Aislamiento = NuevoEstado;
}

void Cables::set_Cubierta (string NuevoEstado)
{
    this->Cubierta = NuevoEstado;
}