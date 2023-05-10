/**
 * Project Untitled
 */

#ifndef _HERRAMIENTASALQUILER_H
#define _HERRAMIENTASALQUILER_H

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
    
    HerramientasAlquiler(string, string, unsigned int, unsigned int);
    ~HerramientasAlquiler();

    string get_Modelo();
    
    string get_Condicion();
    
    unsigned int get_PrecioSeguro();
    
    unsigned int get_PrecioAlquiler();
    
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

private: 
    string Modelo;
    string Condicion;
    unsigned int PrecioSeguro;
    unsigned int PrecioAlquiler;
};

#endif //_HERRAMIENTASALQUILER_H