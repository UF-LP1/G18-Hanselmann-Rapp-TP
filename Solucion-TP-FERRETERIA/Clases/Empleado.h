#ifndef _EMPLEADO_H
#define _EMPLEADO_H

#include "Persona.h"

class Empleado: public Persona 
{

protected:
    unsigned int Salario;
    string TipoTransporte;
    unsigned int TiempoTrabajado;

public: 

    Empleado(const string, string, string, TipoSexo, unsigned int, string, unsigned int);

    ~Empleado();
   
    unsigned int get_Salario();
    
    string get_TipoTransporte();
    
    unsigned int get_TiempoTrabajado();
    
    void set_Salario(unsigned int NuevoEstado);
 
    void set_TipoTransporte(string NuevoEstado);

    void set_TiempoTrabajado(unsigned int NuevoEstado);
};

#endif //_EMPLEADO_H