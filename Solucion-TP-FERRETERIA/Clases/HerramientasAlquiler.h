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
    
    HerramientasAlquiler(TipoHerrAlquiler, string, string, unsigned int, unsigned int, unsigned int);
    ~HerramientasAlquiler();

    TipoHerrAlquiler get_TipoHerrAlquiler();

    string get_Modelo();
    
    string get_Condicion();
    
    unsigned int get_PrecioSeguro();
    
    unsigned int get_PrecioAlquiler();

    unsigned int get_Cant_Horas_Alquiler();
    
    /**
     * @param string
     */
    void set_Modelo(string NuevoEstado);
    
    /**
     * @param string
     */
    void set_Condicion(string NuevoEstado);
    
    /**
     * @param unsigned float
     */
    void set_PrecioSeguro(unsigned int NuevoEstado);
    
    /**
     * @param unsigned float
     */
    void set_PrecioAlquiler(unsigned int NuevoEstado);

    void set_TipoHerrAlquiler (TipoHerrAlquiler NuevoEstado);

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