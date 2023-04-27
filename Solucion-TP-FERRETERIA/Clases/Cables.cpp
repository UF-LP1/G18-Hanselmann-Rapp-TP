/**
 * Project Untitled
 */

#include "Cables.h"

/**
 * Cables implementation
 */
Cables::Cables(unsigned int Precio_, bool Cambio_, string EstadoArt_, string TipoProducto_, float Alto_, float Ancho_, float Largo_, unsigned int Cantidad_, string ArticuloVendido_, unsigned int PrecioArtVendido_, unsigned int Tension_, unsigned int Potencia_, TipoConductor TipoConductor_, string Aislamiento_, string Cubierta_):Electricidad(Precio_, Cambio_, EstadoArt_, TipoProducto_, Alto_, Ancho_, Largo_, Cantidad_, ArticuloVendido_, PrecioArtVendido_, Tension_, Potencia_)
{
    this->Conduc = TipoConductor_;
    this->Aislamiento = Aislamiento_;
    this->Cubierta = Cubierta_;

}

Cables::~Cables()
{

}

/**
 * @return TipoConductor
 */
TipoConductor Cables::get_Conductores() 
{
    return this->Conduc;
}

/**
 * @return string
 */
string Cables::get_Aislamiento() 
{
    return this->Aislamiento;
}

/**
 * @return string
 */
string Cables::get_Cubierta()
{
    return this->Cubierta;
}

/**
 * @param TipoConductor
 * @return void
 */
void Cables::set_Conductores (TipoConductor NuevoEstado)
{
    this->Conduc = NuevoEstado;
}

/**
 * @param string
 * @return void
 */
void Cables::set_Aislamiento (string NuevoEstado)
{
    this->Aislamiento = NuevoEstado;
}

/**
 * @param string
 * @return void
 */
void Cables::set_Cubierta (string NuevoEstado)
{
    this->Cubierta = NuevoEstado;
}