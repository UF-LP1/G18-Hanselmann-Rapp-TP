/**
 * Project Untitled
 */

#ifndef _PERSONA_H
#define _PERSONA_H

#include <iostream>
#include <string>
#include <vector>
#include <list>

using namespace std;

class Persona 
{
public: 
    
    string get_Nombre();
    
    string get_Apellido();
    
    const string get_DNI();
    
    TipoSexo get_Sexo();
    
    /**
     * @param string
     */
    void set_Nombre(void string);
    
    /**
     * @param string
     */
    void set_Apellido(void string);
    
    /**
     * @param TipoSexo
     */
    void set_Sexo(void TipoSexo);
protected: 
    string Nombre;
    string Apellido;
    const string DNI;
    enumeration TipoSexo;
};

#endif //_PERSONA_H