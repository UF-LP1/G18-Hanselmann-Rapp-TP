/**
 * Project Untitled
 */

#include "BarralesCortina.h"

/**
 * BarralesCortina implementation
 */
BarralesCortina::BarralesCortina(unsigned int Precio_, bool Cambio_, string EstadoArt_, string TipoProducto_, float Alto_, float Ancho_, float Largo_, unsigned int Cantidad_, string ArticuloVendido_, unsigned int PrecioArtVendido_, bool RepuestoArt_, TipoBarreles Barralito_, string MaterialBarreles_, unsigned int Ganchos_):Banio(Precio_, Cambio_, EstadoArt_, TipoProducto_, Alto_, Ancho_, Largo_, Cantidad_, ArticuloVendido_, PrecioArtVendido_, RepuestoArt_)
{
    this->Barralito = Barralito_;
    this->MaterialBarreles = MaterialBarreles_;
    this->Ganchos = Ganchos_;
}

BarralesCortina::~BarralesCortina()
{

}

/**
 * @return TipoBarrales
 */
TipoBarreles BarralesCortina::get_Barralito() 
{
    return this->Barralito;
}

/**
 * @return string
 */
string BarralesCortina::get_MaterialBarrales() 
{
    return this->MaterialBarreles;
}

/**
 * @param TipoBarrales
 * @return void
 */
void BarralesCortina::set_Barralito(TipoBarreles NuevoEstado) 
{
    this->Barralito = NuevoEstado;
}

/**
 * @param string
 * @return void
 */
void BarralesCortina::set_MaterialBarrales(string NuevoEstado) 
{
    this->MaterialBarreles = NuevoEstado;
}

/**
 * @return unsigned int
 */
unsigned int BarralesCortina::get_Ganchos()
{
    return this->Ganchos;
}

/**
 * @param unsigned int
 * @return void
 */
void BarralesCortina::set_Ganchos(unsigned int NuevoEstado) 
{
    this->Ganchos=NuevoEstado;
}