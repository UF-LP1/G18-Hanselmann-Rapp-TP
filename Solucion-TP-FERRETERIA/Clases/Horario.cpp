/**
 * Project Untitled
 */

#include "Horario.h"

/**
 * Horario implementation
 */

Horario::Horario(string SemanaManiana_, string SemanaTarde_, string Sabados_): SemanaManiana(SemanaManiana_), SemanaTarde(SemanaTarde_), Sabados(Sabados_)
{

}

Horario::~Horario()
{

}

/**
 * @return string
 */
string Horario::get_SemanaManiana() 
{
    return this->SemanaManiana;
}

/**
 * @return string
 */
string Horario::get_SemanaTarde() 
{
    return this->SemanaTarde;
}

/**
 * @return string
 */
string Horario::get_Sabados()
{
    return this->Sabados;
}

/**
 * @param string
 * @return void
 */
void Horario::set_SemanaManiana(string NuevoEstado)
{
    this->SemanaManiana = NuevoEstado;
}

/**
 * @param string
 * @return void
 */
void Horario::set_SemanaTarde(string NuevoEstado)
{
    this->SemanaTarde = NuevoEstado;
}

/**
 * @param string
 * @return void
 */
void Horario::set_Sabados(string NuevoEstado)
{
    this->Sabados = NuevoEstado;
}