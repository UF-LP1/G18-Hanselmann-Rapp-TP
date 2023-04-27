/**
 * Project Untitled
 */

#ifndef _EMPLEADO_H
#define _EMPLEADO_H

#include "Persona.h"

class Empleado: public Persona 
{
public: 

    Empleado(unsigned int Salario_, string TipoTransporte_, time_t TiempoTrabajado_);
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

protected: 
    unsigned int Salario;
    string TipoTransporte;
    time_t TiempoTrabajado;
};

#endif //_EMPLEADO_H