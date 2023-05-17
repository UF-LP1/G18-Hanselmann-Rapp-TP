/**
 * Project Untitled
 */

#include "Despachante.h"

/**
 * Despachante implementation
 */

Despachante::Despachante(const string DNI_, string Nombre_, string Apellido_, TipoSexo Sexo_, unsigned int Salario_, string TipoTransporte_, time_t TiempoTrabajado_, string Pedido_):Empleado(DNI_, Nombre_, Apellido_, Sexo_, Salario_, TipoTransporte_, TiempoTrabajado_)
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
void Despachante::enviar_articulo(Articulo arti, Cliente cli)
{
    cout << "Se envia el articulo: " << arti.get_TipoProducto() << " hacia la direccion: " << cli.get_Direccion() << endl;

}