/**
 * Project Untitled
 */

#include "Ferreteria.h"

/**
 * Ferreteria implementation
 */

Ferreteria::Ferreteria(const string Nombre_, const string Direccion_, const string Telefono_, const string Mail_, MetodoPago MetodoPagoFerreteria_)
{
    this->MetodoPagoFerreteria = MetodoPagoFerreteria_;
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
MetodoPago Ferreteria::get_MetodoPagoFerreteria() 
{
    return this->MetodoPagoFerreteria;
}

/**
 * @param string
 * @return void
 */
void Ferreteria::set_MetodoPagoFerreteria(MetodoPago NuevoEstado) 
{
    this->MetodoPagoFerreteria = NuevoEstado;
}

/**
 * @param Horario
 * @return bool
 */
bool Ferreteria::abrir(Horario hor) 
{
    time_t timer;
    struct tm* tiempolocal;
    time(&timer);
    tiempolocal = localtime(&timer);
    
    if (hor.get_Semanita() == Lunes || hor.get_Semanita() == Martes || hor.get_Semanita() == Miercoles || hor.get_Semanita() == Jueves || hor.get_Semanita() == Viernes || hor.get_Semanita() == Sabado)
    {
        if (tiempolocal->tm_wday == 1 || tiempolocal->tm_wday == 2 || tiempolocal->tm_wday == 3 || tiempolocal->tm_wday == 4 || tiempolocal->tm_wday == 5)
        {
            if (tiempolocal->tm_hour >= 7 && tiempolocal->tm_hour <= 13)
            {
                return true;
            }
            if (tiempolocal->tm_hour >= 17 && tiempolocal->tm_hour <= 20)
            {
                return true;
            }
        }
        else if (tiempolocal->tm_wday == 6)
        {
            if (tiempolocal->tm_hour >= 8 && tiempolocal->tm_hour <= 13)
            {
                return true;
            }
        }
        else
            return false;
    }
    else
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

int Ferreteria::generar_Presupuesto(vector<Articulo*> v, Cliente cli)
{
    vector<Articulo*>::iterator arr;

    int acum = 0;
    int i = 0;
    
    for (arr = cli.get_Articulos().begin();i < cli.get_Articulos().size(); arr++, i++) //recorre el vector de articulos en el iterador arr desde el principio hasta el final
    {
            acum = acum + arr[i]->get_Precio() * arr[i]->get_Cantidad();
    }

    return acum;
}
