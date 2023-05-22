#include "Ferreteria.h"

/**
 * Ferreteria implementation
 */

Ferreteria::Ferreteria(const string Nombre_, const string Direccion_, const string Telefono_, const string Mail_, MetodoPago MetodoPagoFerreteria_):Nombre(Nombre_), Direccion(Direccion_), Telefono(Telefono_)
{
    this->MetodoPagoFerreteria = MetodoPagoFerreteria_;
}

Ferreteria::~Ferreteria() 
{

}

const string Ferreteria::get_Nombre() 
{
    return this->Nombre;
}

const string Ferreteria::get_Direccion() 
{
    return this->Direccion;
}

const string Ferreteria::get_Telefono() 
{
    return this->Telefono;
}

const string Ferreteria::get_Mail() 
{
    return this->Mail;
}

MetodoPago Ferreteria::get_MetodoPagoFerreteria() 
{
    return this->MetodoPagoFerreteria;
}

void Ferreteria::set_MetodoPagoFerreteria(MetodoPago NuevoEstado) 
{
    this->MetodoPagoFerreteria = NuevoEstado;
}

bool Ferreteria::abrir(Horario hor) //Funcion que abre la ferreteria segun el horario: atiende de lunes a viernes de 730 a 13 y de 17 a 20. Los sábados de 8 a 13.
{
    time_t timer;
    struct tm* tiempolocal;
    time(&timer);
    tiempolocal = localtime(&timer);
    
    if (tiempolocal->tm_wday == 1 || tiempolocal->tm_wday == 2 || tiempolocal->tm_wday == 3 || tiempolocal->tm_wday == 4 || tiempolocal->tm_wday == 5)
    {
        if (tiempolocal->tm_hour >= 7  && tiempolocal->tm_hour <= 13)
        {
            return true;
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
   
int Ferreteria::generar_Presupuesto(Cliente cli) //Calculo el presupuesto generado, según lo que quiera el cliente
{
    list<Articulo>::iterator itArt;
    list <HerramientasAlquiler>::iterator itHerrAlq;

    int acum = 0;
    int acum2 = 0;
    int acumtot = 0;
    int i = 0;
    list<Articulo> arti = cli.get_Articulos();
    list<HerramientasAlquiler> herr = cli.get_Herr_Alquiler();
    itArt = arti.begin();
    itHerrAlq = herr.begin();
    
    for (i = 0; i < arti.size(); i++, itArt++) //recorre el vector de articulos en el iterador itArt desde el principio hasta el final
    {
        if ((*itArt).get_Cantidad() > 0)
        {
            acum = acum + (itArt->get_Precio() * itArt->get_Cantidad());
        }
        else
        {
            cout << "No hay Cantidad del Producto: " << itArt->get_TipoProducto() << endl;
        }
    }
    for (i = 0; i < herr.size(); i++, itHerrAlq++) //Calculamos lo que saldria alquilar las Herraminetas segun las horas requeridas.
    {
        if ((*itHerrAlq).get_Cant_Horas_Alquiler() > 0)
        {
            acum2 = acum2 + (itHerrAlq->get_PrecioAlquiler() * itHerrAlq->get_Cant_Horas_Alquiler() + itHerrAlq->get_PrecioSeguro());

            if (itHerrAlq->get_Condicion() == "Perfecta")
            {
                acum2 = acum2 - itHerrAlq->get_PrecioSeguro();
            }
        }
        else
        {
            cout << "No va a alquilar la Herramienta: " << itHerrAlq->get_TipoHerrAlquiler() << endl;
        }
    }

    acumtot = acum + acum2;

    return acumtot;
}
