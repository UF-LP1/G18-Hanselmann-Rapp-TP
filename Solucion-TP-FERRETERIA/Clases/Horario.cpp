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
    return Hora;
}
