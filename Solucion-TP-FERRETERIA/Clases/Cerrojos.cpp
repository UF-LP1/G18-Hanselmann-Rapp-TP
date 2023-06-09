#include "Cerrojos.h"

/**
 * Cerrojos implementation
 */

Cerrojos::Cerrojos(unsigned int Precio_, bool Cambio_, string EstadoArt_, string TipoProducto_, float Alto_, float Ancho_, float Largo_, unsigned int Cantidad_, string MaterialCerraj_, TipoCerrojo Cerroj_):Cerrajeria(Precio_, Cambio_, EstadoArt_, TipoProducto_, Alto_, Ancho_, Largo_, Cantidad_, MaterialCerraj_)
{
    this->Cerroj = Cerroj_;
}

Cerrojos::~Cerrojos()
{

}

TipoCerrojo Cerrojos::get_Cerroj() 
{
    return this->Cerroj;
}

void Cerrojos::set_Cerroj(TipoCerrojo NuevoEstado) 
{
    this->Cerroj = NuevoEstado;
}