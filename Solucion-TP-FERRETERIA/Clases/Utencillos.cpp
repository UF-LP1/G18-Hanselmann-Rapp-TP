/**
 * Project Untitled
 */

#include "Utencillos.h"

/**
 * Utencillos implementation
 */
Utencillos::Utencillos(unsigned int Precio_, bool Cambio_, string EstadoArt_, string TipoProducto_, float Alto_, float Ancho_, float Largo_, unsigned int Cantidad_, bool RepuestoArt_, TipoUtencillo Uten_, string MaterialUtencillo_):Cocina(Precio_, Cambio_, EstadoArt_, TipoProducto_, Alto_, Ancho_, Largo_, Cantidad_, RepuestoArt_)
{
    this->Uten = Uten_;
    this->MaterialUtencillo = MaterialUtencillo_;
}

Utencillos::~Utencillos() {

}
/**
 * @return TipoUtencillo
 */
TipoUtencillo Utencillos::get_Uten() 
{
    return this->Uten;
}

/**
 * @return string
 */
string Utencillos::get_MaterialUtencillo() 
{
    return this->MaterialUtencillo;
}

/**
 * @param TipoUtencillo
 * @return void
 */
void Utencillos::set_Uten(TipoUtencillo NuevoEstado)
{
    this->Uten = NuevoEstado; 
}

/**
 * @param string
 * @return void
 */
void Utencillos::set_MaterialUtencillo(string NuevoEstado)
{
    this->MaterialUtencillo = NuevoEstado;
}