/**
 * Project Untitled
 */

#include "Tornillos.h"

/**
 * Tornillos implementation
 */
Tornillos::Tornillos(unsigned int Precio_, bool Cambio_, string EstadoArt_, string TipoProducto_, float Alto_, float Ancho_, float Largo_, unsigned int Cantidad_, string ArticuloVendido_, unsigned int PrecioArtVendido_, string MaterialArtFerr_, string CabezaTornillo_, string Rosca_, string Utilidad_):ArtFerreteria(Precio_, Cambio_, EstadoArt_, TipoProducto_, Alto_, Ancho_, Largo_, Cantidad_, ArticuloVendido_, PrecioArtVendido_, MaterialArtFerr_)
{
    this->CabezaTornillo = CabezaTornillo_;
    this->Rosca = Rosca_;
    this->Utilidad = Utilidad_;
}

Tornillos::~Tornillos()
{

}

/**
 * @return string
 */
string Tornillos::get_CabezaTornillo() 
{
    return this->CabezaTornillo;
}

/**
 * @return string
 */
string Tornillos::get_Rosca() 
{
    return this->Rosca;
}

/**
 * @return string
 */
string Tornillos::get_Utilidad()
{
   return this->Utilidad;
}

/**
 * @param string
 * @return void
 */
void Tornillos::set_CabezaTornillo(string NuevoEstado) 
{
    this->CabezaTornillo = NuevoEstado;
}

/**
 * @param string
 * @return void
 */
void Tornillos::set_Rosca(string NuevoEstado) 
{
    this->Rosca=NuevoEstado;
}

/**
 * @param string
 * @return void
 */
void Tornillos::set_Utilidad(string NuevoEstado) 
{
    this->Utilidad = NuevoEstado;
}