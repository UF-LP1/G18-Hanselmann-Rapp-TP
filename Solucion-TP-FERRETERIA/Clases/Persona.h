/**
 * Project Untitled
 */

#ifndef _PERSONA_H
#define _PERSONA_H

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>
#include <iterator>
#include <forward_list>

using namespace std;

#include "TipoSexo.h"

class Persona 
{

protected:
    string Nombre;
    string Apellido;
    const string DNI;
    TipoSexo Sexo;

public: 

    Persona(const string, string, string, TipoSexo);

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
};

#endif //_PERSONA_H