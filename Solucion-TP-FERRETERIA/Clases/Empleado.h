/**
 * Project Untitled
 */

#ifndef _EMPLEADO_H
#define _EMPLEADO_H

#include "Persona.h"

class Empleado: public Persona 
{

protected:
    unsigned int Salario;
    string TipoTransporte;
    time_t TiempoTrabajado;

public: 

    Empleado(string, string, string, TipoSexo, unsigned int, string, time_t);

    ~Empleado();
    
    unsigned int get_Salario();
    
    string get_TipoTransporte();
    
    time_t get_TiempoTrabajado();
    
    /**
     * @param unsigned float
     */
    void set_Salario(unsigned int NuevoEstado);
    
    /**
     * @param string
     */
    void set_TipoTransporte(string NuevoEstado);
    
    /**
     * @param string
     */
    void set_DireccionCliente(string NuevoEstado);
    
    /**
     * @param time_t
     */
    void set_TiempoTrabajado(time_t NuevoEstado);
};

#endif //_EMPLEADO_H