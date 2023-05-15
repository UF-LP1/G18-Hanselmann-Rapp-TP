/**
 * Project Untitled
 */

#include "Horario.h"

/**
 * Horario implementation
 */

Horario::Horario(time_t Hora_, DiaSemana DiaSemana_)
{
    this->Hora = Hora_;
    this->DiaSemana = DiaSemana_;
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
string Horario::get_DiaSemana() 
{
    return this->DiaSemana;
}

/**
 * @param string
 * @return void
 */
void Horario::set_Hora(time_t NuevoEstado)
{
    this->Hora = NuevoEstado;
}

/**
 * @param string
 * @return void
 */
void Horario::set_DiaSemana(string NuevoEstado)
{
    this->DiaSemana = NuevoEstado;
}
