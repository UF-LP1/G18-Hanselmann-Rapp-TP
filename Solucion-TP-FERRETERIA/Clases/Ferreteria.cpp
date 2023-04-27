/**
 * Project Untitled
 */

#include "Ferreteria.h"

/**
 * Ferreteria implementation
 */

Ferreteria::Ferreteria(string Nombre_, string Direccion_, string Telefono_, string Mail_, string MetodoPago_, list<string> ArticulosTotales_, list<int> CantArtTotales_, unsigned int AlquilerLocal_, unsigned int Expensaslocal_, unsigned int PrecioCargamento_): Nombre(Nombre_), Direccion(Direccion_), Telefono(Telefono_), Mail(Mail_), MetodoPago(MetodoPago_), ArticulosTotales(ArticulosTotales_), CantArtTotales(CantArtTotales_), AlquilerLocal(AlquilerLocal_), ExpensasLocal(Expensaslocal_), PrecioCargamento(PrecioCargamento_)
{

}

Ferreteria::~Ferreteria() 
{

}

/**
 * @return const string
 */
const string Ferreteria::get_Nombre() 
{
    return this->Nombre;
}

/**
 * @return const string
 */
const string Ferreteria::get_Direccion() 
{
    return this->Direccion;
}

/**
 * @return const string
 */
const string Ferreteria::get_Telefono() 
{
    return this->Telefono;
}

/**
 * @return const string
 */
const string Ferreteria::get_Mail() 
{
    return this->Mail;
}

/**
 * @return const string
 */
const string Ferreteria::get_MetodoPago() 
{
    return this->MetodoPago;
}

list <string> Ferreteria::get_ArticulosTotales()
{
    return this->ArticulosTotales;
}

list<int> Ferreteria::get_CantArtTotales()
{
    return this->CantArtTotales;
}

unsigned int Ferreteria::get_AlquilerLocal()
{
    return this->AlquilerLocal;
}

unsigned int Ferreteria::get_ExpensasLocal()
{
    return this->ExpensasLocal;
}

unsigned int Ferreteria::get_PrecioCargamento()
{
    return this->PrecioCargamento;
}

/**
 * @param string
 * @return void
 */
void Ferreteria::set_MetodoPago(string NuevoEstado) 
{
    this->MetodoPago == NuevoEstado;
}

void Ferreteria::set_ArticulosTotales(list <string> NuevoEstado)
{
    this->ArticulosTotales = NuevoEstado;
}

void Ferreteria::set_CantArtTotales(list <int> NuevoEstado)
{
    this->CantArtTotales = NuevoEstado;
}

void Ferreteria::set_AlquilerLocal(unsigned int NuevoEstado)
{
    this->AlquilerLocal = NuevoEstado;
}

void Ferreteria::set_ExpensasLocal(unsigned int NuevoEstado)
{
    this->ExpensasLocal = NuevoEstado;
}

void Ferreteria::set_PrecioCargamento(unsigned int NuevoEstado)
{
    this->PrecioCargamento = NuevoEstado;
}

/**
 * @param Horario
 * @return bool
 */
bool Ferreteria::abrir(Horario hora) 
{
    return false;
}

/**
 * @param Cliente
 * @return articulos
 */
bool Ferreteria::dar_ArticuloCliente(Cliente cli, Articulo art) 
{
    return false;
}

/**
 * @param Articulo
 * @param Empleado
 * @return bool
 */
bool Ferreteria::dar_ArticuloEmpleado(Articulo art, Empleado emp) 
{
    return false;
}

int Ferreteria::generar_Presupuesto(Articulo art, Cliente cli)
{
    vector<Articulo>::iterator arr;

    float acum = 0;

    for (arr = cli.get_Articulos().begin(); arr != cli.get_Articulos().end(); arr++)
    {
        acum += art.get_Precio() * art.get_Cantidad();
    }

    return acum;
}
