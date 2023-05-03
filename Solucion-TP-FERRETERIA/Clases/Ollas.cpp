/**
 * Project Untitled
 */

#include "Ollas.h"

/**
 * Ollas implementation
 */
Ollas::Ollas(unsigned int Precio_, bool Cambio_, string EstadoArt_, string TipoProducto_, float Alto_, float Ancho_, float Largo_, unsigned int Cantidad_, string ArticuloVendido_, unsigned int PrecioArtVendido_, bool RepuestoArt_, TipoOlla Ollita_, string MaterialOlla_):Cocina(Precio_, Cambio_, EstadoArt_, TipoProducto_, Alto_, Ancho_, Largo_, Cantidad_, ArticuloVendido_, PrecioArtVendido_, RepuestoArt_){

    this->Ollita = Ollita_;
    this->MaterialOlla = MaterialOlla_;
}

Ollas::~Ollas()
{

}

/**
 * @return TipoOlla
 */
TipoOlla Ollas::get_Ollita() 
{
    return this->Ollita;
}

/**
 * @return string
 */
string Ollas::get_MaterialOlla() 
{
    return this->MaterialOlla;
}

/**
 * @param TipoOlla
 * @return void
 */
void Ollas::set_Ollita(TipoOlla NuevoEstado)
{
    this->Ollita = NuevoEstado;
}

/**
 * @param string
 * @return void
 */
void Ollas::set_MaterialOlla(string NuevoEstado)
{
    this->MaterialOlla = NuevoEstado;
}