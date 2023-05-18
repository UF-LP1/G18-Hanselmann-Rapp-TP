#include "HerramientasAlquiler.h"

/**
 * HerramientasAlquiler implementation
 */

HerramientasAlquiler::HerramientasAlquiler(string Modelo_, string Condicion_, unsigned int PrecioSeguro_, unsigned int PrecioAlquiler_, TipoHerrAlquiler HerrAlquiler_, unsigned int Cant_Horas_Alquiler_)
{
    this->Modelo = Modelo_;
    this->Condicion = Condicion_;
    this->PrecioSeguro = PrecioSeguro_;
    this->PrecioAlquiler = PrecioAlquiler_;
    this->HerrAlquiler = HerrAlquiler_;
    this->Cant_Horas_Alquiler = Cant_Horas_Alquiler_;
}

HerramientasAlquiler::~HerramientasAlquiler()
{

}

string HerramientasAlquiler::get_Modelo() 
{
    return this->Modelo;
}

string HerramientasAlquiler::get_Condicion() 
{
    return this->Condicion;
}

unsigned int HerramientasAlquiler::get_PrecioSeguro() 
{
    return this->PrecioSeguro;
}

unsigned int HerramientasAlquiler::get_PrecioAlquiler() 
{
    return this->PrecioAlquiler;
}

TipoHerrAlquiler HerramientasAlquiler::get_TipoHerrAlquiler()
{
    return this->HerrAlquiler;
}

unsigned int HerramientasAlquiler::get_Cant_Horas_Alquiler()
{
    return this->Cant_Horas_Alquiler;
}

void HerramientasAlquiler::set_Modelo(string NuevoEstado)
{
    this->Modelo = NuevoEstado;
}

void HerramientasAlquiler::set_Condicion(string NuevoEstado)
{
    this->Condicion = NuevoEstado;
}

void HerramientasAlquiler::set_PrecioSeguro(unsigned int NuevoEstado)
{
    this->PrecioSeguro = NuevoEstado;
}

void HerramientasAlquiler::set_PrecioAlquiler(unsigned int NuevoEstado)
{
    this->PrecioAlquiler = NuevoEstado;
}

void HerramientasAlquiler::set_TipoHerrAlquiler(TipoHerrAlquiler NuevoEstado)
{
    this->HerrAlquiler = NuevoEstado;
}

void HerramientasAlquiler::set_Cant_Horas_Alquiler(unsigned int NuevoEstado)
{
    this->Cant_Horas_Alquiler = NuevoEstado;
}