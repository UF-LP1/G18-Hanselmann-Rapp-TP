/**
 * Project Untitled
 */


#ifndef _EMPLEADO_H
#define _EMPLEADO_H

#include "Persona.h"


class Empleado: public Persona {
public: 
    
unsigned float get_Salario();
    
string get_TipoTransporte();
    
time_t get_TiempoTrabajado();
    
/**
 * @param unsigned float
 */
void set_Salario(void unsigned float);
    
/**
 * @param string
 */
void set_TipoTransporte(void string);
    
/**
 * @param string
 */
void set_DireccionCliente(void string);
    
/**
 * @param time_t
 */
void set_TiempoTrabajado(void time_t);
protected: 
    unsigned float Salario;
    string TipoTransporte;
    time_t TiempoTrabajado;
};

#endif //_EMPLEADO_H