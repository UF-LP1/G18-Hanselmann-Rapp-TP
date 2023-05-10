/**
 * Project Untitled
 */

#include "Cerrajeria.h"

/**
 * Cerrajeria implementation
 */

Cerrajeria::Cerrajeria(unsigned int Precio_, bool Cambio_, string EstadoArt_, string TipoProducto_, float Alto_, float Ancho_, float Largo_, unsigned int Cantidad_, string MaterialCerraj_):Articulo(Precio_, Cambio_, EstadoArt_, TipoProducto_, Alto_, Ancho_, Largo_, Cantidad_)
{
    this->MaterialCerraj = MaterialCerraj_;
}

Cerrajeria::~Cerrajeria()
{

}

/**
 * @return string
 */
string Cerrajeria::get_MaterialCerraj() 
{
    return this->MaterialCerraj;
}

/**
 * @param string
 * @return void
 */
void Cerrajeria::set_MaterialCerraj(string NuevoEstado)
{
    this->MaterialCerraj = NuevoEstado;
}