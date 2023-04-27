/**
 * Project Untitled
 */


#include "Utencillos.h"

/**
 * Utencillos implementation
 */
Utencillos::Utencillos(unsigned int Precio_, bool Cambio_, string EstadoArt_, string TipoProducto_, float Alto_, float Ancho_, float Largo_, unsigned int Cantidad_, string ArticuloVendido_, unsigned int PrecioArtVendido_, bool RepuestoArt_, TipoUtencillo TipoUtencillo_, string MaterialUtencillo_):Cocina(Precio_, Cambio_, EstadoArt_, TipoProducto_, Alto_, Ancho_, Largo_, Cantidad_, ArticuloVendido_, PrecioArtVendido_, RepuestoArt_)
{
    this->tipouten = TipoUtencillo_;
    this->MaterialUtencillo = MaterialUtencillo_;
}

Utencillos::~Utencillos() {

}
/**
 * @return TipoUtencillo
 */
TipoUtencillo Utencillos::get_Utencillo() {

    return this->tipouten;

}


/**
 * @return string
 */
string Utencillos::get_MaterialUtencillo() {

    return this->MaterialUtencillo;

}

/**
 * @param TipoUtencillo
 * @return void
 */
void Utencillos::set_Utencillo(TipoUtencillo NuevoEstado){

    this->tipouten = NuevoEstado; 

}

/**
 * @param string
 * @return void
 */
void Utencillos::set_MaterialUtencillo(string NuevoEstado){

    this->MaterialUtencillo = NuevoEstado;

}