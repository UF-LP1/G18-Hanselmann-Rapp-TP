/**
 * Project Untitled
 */

#include "Horario.h"

/**
 * Horario implementation
 */

Horario::Horario(DiaSemanita Semanita_, time_t Hora_)
{
    this->Hora = Hora_;
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
unsigned int Horario:: get_Semanita()
{
    return Semanita;
}

/**
 * @param string
 * @return void
 */
void Horario::set_Hora(time_t NuevoEstado)
{
    this->Hora = NuevoEstado;
}

void Horario::set_Semanita(DiaSemanita NuevoEstado)
{
    this->Semanita = NuevoEstado;
}
