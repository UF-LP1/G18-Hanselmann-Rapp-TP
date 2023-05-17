#include "Horario.h"

/**
 * Horario implementation
 */

Horario::Horario(time_t Hora_)
{
    this->Hora = Hora_;
}

Horario::~Horario()
{

}

time_t Horario::get_Hora() 
{
    return this->Hora;
}

void Horario::set_Hora(time_t NuevoEstado)
{
    this->Hora = NuevoEstado;
}

