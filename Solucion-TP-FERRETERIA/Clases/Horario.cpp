/**
 * Project Untitled
 */

#include "Horario.h"

/**
 * Horario implementation
 */

Horario::Horario(DiaSemana Semanita_, time_t Hora_)
{
    this->Hora = Hora_
    this->Semanita = Semanita_;
}

Horario::~Horario()
{

}

/**
 * @return string
 */
time_t Horario::get_Hora() 
{
    return this->Hora;
}

/**
 * @return string
 */
DiaSemana Horario:: get_Semanita()
{
    return this->Semanita;
}

/**
 * @param string
 * @return void
 */
void Horario::set_Hora(time_t NuevoEstado)
{
    this->Hora = NuevoEstado;
}
