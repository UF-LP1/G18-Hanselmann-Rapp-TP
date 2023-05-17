#include "Duenio.h"

/**
 * Duenio implementation
 */

Duenio::Duenio(const string DNI_, string Nombre_, string Apellido_, TipoSexo Sexo_, bool Disponibilidad_):Persona(DNI_, Nombre_, Apellido_, Sexo_)
{
    this->Disponibilidad = Disponibilidad_;
}

Duenio::~Duenio()
{

}

string Duenio::get_Nombre()
{
    return this->Nombre;
}

bool Duenio::get_Disponibilidad() 
{
    return this->Disponibilidad;
}

void Duenio::set_Disponibilidad(bool NuevoEstado) 
{
    this->Disponibilidad = NuevoEstado;
}

void Duenio::atender_cliente(Cliente cli) 
{
    return;
}

bool Duenio::identificar_art(Cliente cli, Articulo art) //Identificamos si quiere cambiar un articulo segun una Foto o un Articulo Roto
{
    list<Articulo>::iterator itArt; 
    list<Articulo> arti = cli.get_Articulos();

    if (cli.get_Foto() == "Foto" || cli.get_ArtRoto() == "ArtRoto") 
    {
        cout << "Alto: " << art.get_Alto() << endl;
        cout << "Ancho: " << art.get_Ancho() << endl;
        cout << "Largo: " << art.get_Largo() << endl;
        return true;
    }
    else 
    {
        cout << "No trajo foto ni articulo roto" << endl;

        return false;
    }

}

int Duenio::CambioArticulo(Articulo art, Cliente cli) //Revisamos si los Articulos tienen cambio o no según los criterios dados
{
    list<Articulo>::iterator itArt;

    int precio = 0, precio2 = 0;
    int i = 0;
    list<Articulo> arti = cli.get_Articulos();
    itArt = arti.begin();

    for (i = 0; i < arti.size(); i++, itArt++)
    {
        if (cli.get_DeseaCambiarArt() == true)
        {
            cout << "¿Por que Articulo desea Cambiar?" << endl;

            if (itArt->get_Cambio() == true)
            {
                if (cli.get_EnvoltorioIntacto() == true)
                {
                    if (itArt->get_Precio() < art.get_Precio())
                    {
                        precio = art.get_Precio() - itArt->get_Precio();

                        return precio;
                    }
                    if (itArt->get_Precio() > art.get_Precio())
                    {
                        precio2 = itArt->get_Precio() - art.get_Precio();

                        return precio2;
                    }
                    if (itArt->get_Precio() == art.get_Precio())
                    {
                        cout << "No hay diferencia de precio." << endl;
                        return 0;
                    }
                    else
                    {
                        cout << "No hay Cambio o el Envoltorio no esta Intacto." << endl;
                    }
                }
            }
        }
    }
}
