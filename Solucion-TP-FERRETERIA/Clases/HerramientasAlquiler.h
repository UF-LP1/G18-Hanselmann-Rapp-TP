/**
 * Project Untitled
 */

#ifndef _HERRAMIENTASALQUILER_H
#define _HERRAMIENTASALQUILER_H

#include <iostream>
#include <string>
#include <vector>
#include <list>

using namespace std;

class HerramientasAlquiler {
public: 
    
string get_Modelo();
    
string get_Condicion();
    
float get_PrecioSeguro();
    
float get_PrecioAlquiler();
    
/**
 * @param string
 */
void set_Modelo(void string);
    
/**
 * @param string
 */
void set_Condicion(void string);
    
/**
 * @param unsigned float
 */
void set_PrecioSeguro(void float);
    
/**
 * @param unsigned float
 */
void set_PrecioAlquiler(void float);
private: 
    string Modelo;
    string Condicion;
    float PrecioSeguro;
    float PrecioAlquiler;
};

#endif //_HERRAMIENTASALQUILER_H