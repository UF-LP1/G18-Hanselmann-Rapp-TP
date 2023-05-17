/**
 * Project Untitled
 */

#include "Duenio.h"

/**
 * Duenio implementation
 */

Duenio::Duenio(string Nombre_, string Apellido_, string DNI_, TipoSexo Sexo_, bool Disponibilidad_):Persona(Nombre_, Apellido_, DNI_, Sexo_)
{
    this->Disponibilidad = Disponibilidad_;
}

Duenio::~Duenio()
{

}

/**
 * @return bool
 */
bool Duenio::get_Disponibilidad() 
{
    return this->Disponibilidad;
}

/**
 * @param bool
 * @return void
 */
void Duenio::set_Disponibilidad(bool NuevoEstado) 
{
    this->Disponibilidad = NuevoEstado;
}

/**
 * @param Cliente
 * @return void
 */
void Duenio::atender_cliente(Cliente cli) 
{
    return;
}

/**
 * @param Cliente
 * @return void
 */
int Duenio::identificar_art(Cliente cli) 
{
    list<Articulo>::iterator itArt; 
    list<Articulo> arti = cli.get_Articulos();

    if (cli.get_Foto() == "Foto" || cli.get_ArtRoto() == "Articulo Roto") {

        return itArt->get_Alto(), itArt->get_Ancho(), itArt->get_Largo();
    }
    else {

        cout << "No trajo foto ni articulo roto" << endl;

        return 0;
    }

}

int Duenio::CambioArticulo(Articulo art, Cliente cli)
{
    list<Articulo>::iterator itArt;

    int precio = 0, precio2 = 0;
    int i = 0;
    list<Articulo> arti = cli.get_Articulos();
    itArt = arti.begin();

    for (i = 0; i < arti.size(); i++, itArt++)
    {
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

/**
 * @param Articulo
 * @return string
 */
string Duenio::revisar_art(Articulo art) 
{
    return "";
}

/**
 * @return void
 */
bool Duenio::abrir_ferreteria() 
{
    return false;
}

/**
 * @param Cliente
 * @param Herramientas
 * @return bool
 */
bool Duenio::dar_HerramientasCliente(Cliente cli, HerramientasAlquiler herralq) 
{
    return false;
}
