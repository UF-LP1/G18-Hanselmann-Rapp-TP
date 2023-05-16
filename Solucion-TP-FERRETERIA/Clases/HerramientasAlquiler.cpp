/**
 * Project Untitled
 */

#include "HerramientasAlquiler.h"

/**
 * HerramientasAlquiler implementation
 */

HerramientasAlquiler::HerramientasAlquiler(TipoHerrAlquiler HerrAlquiler_, string Modelo_, string Condicion_, unsigned int PrecioSeguro_, unsigned int PrecioAlquiler_)
{
    this->HerrAlquiler = HerrAlquiler_;
    this->Modelo = Modelo_;
    this->Condicion = Condicion_;
    this->PrecioSeguro = PrecioSeguro_;
    this->PrecioAlquiler = PrecioAlquiler_;
}

HerramientasAlquiler::~HerramientasAlquiler()
{

}

TipoHerrAlquiler HerramientasAlquiler::get_HerrAlquiler()
{
    return this->HerrAlquiler;
}
/**
 * @return string
 */
string HerramientasAlquiler::get_Modelo() 
{
    return this->Modelo;
}

/**
 * @return string
 */
string HerramientasAlquiler::get_Condicion() 
{
    return this->Condicion;
}

/**
 * @return unsigned float
 */
unsigned int HerramientasAlquiler::get_PrecioSeguro() 
{
    return this->PrecioSeguro;
}

/**
 * @return unsigned float
 */
unsigned int HerramientasAlquiler::get_PrecioAlquiler() 
{
    return this->PrecioAlquiler;
}

/**
 * @param string
 * @return void
 */
void HerramientasAlquiler::set_Modelo(string NuevoEstado)
{
    this->Modelo = NuevoEstado;
}

/**
 * @param string
 * @return void
 */
void HerramientasAlquiler::set_Condicion(string NuevoEstado)
{
    this->Condicion = NuevoEstado;
}

/**
 * @param unsigned float
 * @return void
 */
void HerramientasAlquiler::set_PrecioSeguro(unsigned int NuevoEstado)
{
    this->PrecioSeguro = NuevoEstado;
}

/**
 * @param unsigned float
 * @return void
 */
void HerramientasAlquiler::set_PrecioAlquiler(unsigned int NuevoEstado)
{
    this->PrecioAlquiler = NuevoEstado;
}