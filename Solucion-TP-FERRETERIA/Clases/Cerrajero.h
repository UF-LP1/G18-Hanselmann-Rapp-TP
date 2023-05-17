/**
 * Project Untitled
 */

#ifndef _CERRAJERO_H
#define _CERRAJERO_H

#include "Cliente.h"
#include "Empleado.h"
#include "Cerrajeria.h"
#include "LLaves.h"

class Cerrajero: public Empleado 
{
public: 

    Cerrajero(string, string, string, TipoSexo, unsigned int, string, time_t, string);
    ~Cerrajero();

    string get_Nombre();
      
    string get_Alarma();

    void set_Alarma(string NuevoEstado);
   
    bool DuplicarLlaves(LLaves llavelinda, Cliente cli);
    
private: 
    string Alarma;
};

#endif //_CERRAJERO_H