/**
 * Project Untitled
 */

#include "TipoSexo.h"

#ifndef _PERSONA_H
#define _PERSONA_H

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>
#include <iterator>

using namespace std;

class Persona 
{
public: 

    Persona(string Nombre_, string Apellido_, string DNI_, TipoSexo Sexo_);
    ~Persona();
    
    string get_Nombre();
    
    string get_Apellido();
    
    const string get_DNI();
    
    TipoSexo get_Sexo();
    
    /**
     * @param string
     */
    void set_Nombre(string NuevoEstado);
    
    /**
     * @param string
     */
    void set_Apellido(string NuevoEstado);
    
    /**
     * @param TipoSexo
     */
    void set_Sexo(TipoSexo NuevoEstado);

protected: 
    string Nombre;
    string Apellido;
    const string DNI;
    TipoSexo Sexo;
};

#endif //_PERSONA_H