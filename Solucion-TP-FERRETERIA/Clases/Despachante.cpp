/**
 * Project Untitled
 */

#include "Despachante.h"

/**
 * Despachante implementation
 */

Despachante::Despachante(string Nombre_, string Apellido_, string DNI_, TipoSexo Sexo_, unsigned int Salario_, string TipoTransporte_, time_t TiempoTrabajado_, string Pedido_):Empleado(Nombre_, Apellido_, DNI_, Sexo_, Salario_, TipoTransporte_, TiempoTrabajado_)
{
    this->Pedido = Pedido_;
}
Despachante::~Despachante()
{

}

/**
 * @return string
 */
string Despachante::get_Pedido()
{
    return this->Pedido;
}

/**
 * @param string
 * @return void
 */
void Despachante::set_Pedido(string NuevoEstado) 
{
    this->Pedido = NuevoEstado;
}

/**
 * @return void
 */
void Despachante::llevar_pedido() 
{
    return;
}