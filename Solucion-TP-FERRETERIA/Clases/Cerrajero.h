/**
 * Project Untitled
 */

#ifndef _CERRAJERO_H
#define _CERRAJERO_H

#include "Empleado.h"

class Cerrajero: public Empleado 
{
public: 

    Cerrajero(string, string, string, TipoSexo, unsigned int, string, time_t, string);
    ~Cerrajero();
    
    string get_Alarma();
    
    /**
     * @param string
     */
    void set_Alarma(string NuevoEstado);
    
    /**
     * @param string
     */
    string DuplicarLlaves(string);
    
    void Reparar_cerradura();

private: 
    string Alarma;
};

#endif //_CERRAJERO_H