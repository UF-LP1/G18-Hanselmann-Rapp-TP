/**
 * Project Untitled
 */

#include "LLaves.h"

/**
 * LLaves implementation
 */

LLaves::LLaves(unsigned int Precio_, bool Cambio_, string EstadoArt_, string TipoProducto_, float Alto_, float Ancho_, float Largo_, unsigned int Cantidad_, string MaterialCerraj_, TipoLLave LLavecita_):Cerrajeria(Precio_, Cambio_, EstadoArt_, TipoProducto_, Alto_, Ancho_, Largo_, Cantidad_, MaterialCerraj_)
{
    this->LLavecita = LLavecita_;
}

LLaves::~LLaves()
{

}

/**
 * @return TipoLlave
 */
TipoLLave LLaves::get_LLavecita() 
{
    return this->LLavecita;
}

/**
 * @param TipoLlave
 * @return void
 */
void LLaves::set_LLavecita(TipoLLave NuevoEstado) 
{
    this->LLavecita = NuevoEstado;
}