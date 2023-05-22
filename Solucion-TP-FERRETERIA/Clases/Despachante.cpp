#include "Despachante.h"

/**
 * Despachante implementation
 */

Despachante::Despachante(const string DNI_, string Nombre_, string Apellido_, TipoSexo Sexo_, unsigned int Salario_, string TipoTransporte_, unsigned int TiempoTrabajado_, string Pedido_):Empleado(DNI_, Nombre_, Apellido_, Sexo_, Salario_, TipoTransporte_, TiempoTrabajado_)
{
    this->Pedido = Pedido_;
}

Despachante::~Despachante()
{

}

string Despachante::get_Nombre()
{
    return this->Nombre;
}

string Despachante::get_Pedido()
{
    return this->Pedido;
}

void Despachante::set_Pedido(string NuevoEstado) 
{
    this->Pedido = NuevoEstado;
}

bool Despachante::enviar_articulo(Articulo arti, Cliente cli) //enviamos el articulo a la direccion del cliente
{
    if (cli.get_EnvioDomicilio() == true)
    {
        return true;
    }
    else
    {
        return false;
    }
}