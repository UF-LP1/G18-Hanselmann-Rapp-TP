/**
 * Project Untitled
 */

#include "Cerrajero.h"

/**
 * Cerrajero implementation
 */

Cerrajero::Cerrajero(string Nombre_, string Apellido_, string DNI_, TipoSexo Sexo_, unsigned int Salario_, string TipoTransporte_, time_t TiempoTrabajado_, string Alarma_):Empleado(Nombre_, Apellido_, DNI_, Sexo_, Salario_, TipoTransporte_, TiempoTrabajado_)
{
    this->Alarma = Alarma_;
}

Cerrajero::~Cerrajero()
{

}

string Cerrajero::get_Nombre()
{
    return this->Nombre;
}

/**
 * @return string
 */
string Cerrajero::get_Alarma() 
{
    return this->Alarma;
}

/**
 * @param string
 * @return void
 */
void Cerrajero::set_Alarma(string NuevoEstado) 
{
    this->Alarma = NuevoEstado;
}

/**
 * @param string
 * @return string
 */
bool Cerrajero::DuplicarLlaves(Cerrajeria cerraj, Cliente cli)
{
    if(cerraj.)

    return false;
}
