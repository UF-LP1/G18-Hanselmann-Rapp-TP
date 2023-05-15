/**
 * Project Untitled
 */

#include "Horario.h"

/**
 * Horario implementation
 */

Horario::Horario(DiaSem Semanita_, time_t Hora_)
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
enum DiaSem Horario:: get_Semanita()
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

void Horario::set_Semanita(DiaSem NuevoEstado)
{
    this->Semanita = NuevoEstado;
}
