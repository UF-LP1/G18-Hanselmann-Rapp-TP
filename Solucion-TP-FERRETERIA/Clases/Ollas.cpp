/**
 * Project Untitled
 */

#include "Ollas.h"


Ollas::Ollas(unsigned int Precio_, bool Cambio_, string EstadoArt_, string TipoProducto_, float Alto_, float Ancho_, float Largo_, unsigned int Cantidad_, bool RepuestoArt_, TipoOlla Ollita_, string MaterialOlla_):Cocina(Precio_, Cambio_, EstadoArt_, TipoProducto_, Alto_, Ancho_, Largo_, Cantidad_, RepuestoArt_){

    this->Ollita = Ollita_;
    this->MaterialOlla = MaterialOlla_;
}

Ollas::~Ollas()
{

}


TipoOlla Ollas::get_Ollita() 
{
    return this->Ollita;
}


string Ollas::get_MaterialOlla() 
{
    return this->MaterialOlla;
}


void Ollas::set_Ollita(TipoOlla NuevoEstado)
{
    this->Ollita = NuevoEstado;
}


void Ollas::set_MaterialOlla(string NuevoEstado)
{
    this->MaterialOlla = NuevoEstado;
}