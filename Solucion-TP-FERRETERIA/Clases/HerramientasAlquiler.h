/**
 * Project Untitled
 */

#ifndef _HERRAMIENTASALQUILER_H
#define _HERRAMIENTASALQUILER_H

#include "TipoHerrAlquiler.h"

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>
#include <iterator>

using namespace std;

class HerramientasAlquiler 
{
public: 
    
    HerramientasAlquiler(TipoHerrAlquiler HerrAlquiler_, string Modelo_, string Condicion_, unsigned int PrecioSeguro_, unsigned int PrecioAlquiler_, unsigned int Cant_Horas_Alquiler_);

    ~HerramientasAlquiler();

    string get_Modelo();
    
    string get_Condicion();
    
    unsigned int get_PrecioSeguro();
    
    unsigned int get_PrecioAlquiler();

    TipoHerrAlquiler get_TipoHerrAlquiler();

    unsigned int get_Cant_Horas_Alquiler();
  
    void set_Modelo(string NuevoEstado);
    
    void set_Condicion(string NuevoEstado);
    
    void set_PrecioSeguro(unsigned int NuevoEstado);
    
    void set_PrecioAlquiler(unsigned int NuevoEstado);

    void set_TipoHerrAlquiler(TipoHerrAlquiler NuevoEstado);

    void set_Cant_Horas_Alquiler(unsigned int NuevoEstado);

private: 
    TipoHerrAlquiler HerrAlquiler;
    string Modelo;
    string Condicion;
    unsigned int Cant_Horas_Alquiler;
    unsigned int PrecioSeguro;
    unsigned int PrecioAlquiler;
};

#endif //_HERRAMIENTASALQUILER_H