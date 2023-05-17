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
    
    if (tiempolocal->tm_wday == 1 || tiempolocal->tm_wday == 2 || tiempolocal->tm_wday == 3 || tiempolocal->tm_wday == 4 || tiempolocal->tm_wday == 5)
    {
        if (tiempolocal->tm_hour >= 7 && tiempolocal->tm_min > 30)
        {
            if (tiempolocal->tm_hour <= 13)
            {
                return true;
            }
        }
        if (tiempolocal->tm_hour >= 17 && tiempolocal->tm_hour <= 20)
        {
            return true;
        }
    }
    if (tiempolocal->tm_wday == 6)
    {
        if (tiempolocal->tm_hour >= 8 && tiempolocal->tm_hour <= 13)
        {
            return true;
        }
    }
    else
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

int Ferreteria::generar_Presupuesto(Cliente cli)
{
    list<Articulo>::iterator itArt;

    int acum = 0;
    int i = 0;
    list<Articulo> arti = cli.get_Articulos();
    itArt = arti.begin();
    
    for (i = 0; i < arti.size(); i++, itArt++) //recorre el vector de articulos en el iterador arr desde el principio hasta el final
    {
        if ((*itArt).get_Cantidad() > 0)
        {
            acum = acum + (itArt->get_Precio() * itArt->get_Cantidad());
        }
        else
        {
            cout << "No hay Cantidad del Producto" << endl;
        }
    }

    return acum;
}
