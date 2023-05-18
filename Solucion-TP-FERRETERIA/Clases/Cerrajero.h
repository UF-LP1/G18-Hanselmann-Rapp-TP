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

    Cerrajero(string Nombre_, string Apellido_, string DNI_, TipoSexo Sexo_, unsigned int Salario_, string TipoTransporte_, unsigned int TiempoTrabajado_, string Alarma_);
   
    ~Cerrajero();

    string get_Nombre();
      
    string get_Alarma();

    void set_Alarma(string NuevoEstado);
   
    bool DuplicarLlaves(LLaves llavelinda, Cliente cli);
    
private: 
    string Alarma;
};

#endif //_CERRAJERO_H