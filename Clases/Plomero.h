/**
 * Project Untitled
 */


#ifndef _PLOMERO_H
#define _PLOMERO_H

#include "Empleado.h"


class Plomero: public Empleado {
public: 
    
TipoTuberia get_Tuberias();
    
unsigned float get_Longitud();
    
unsigned float get_Ancho();
    
/**
 * @param TipoTuberia
 */
void set_Tuberias(void TipoTuberia);
    
/**
 * @param unsigned float
 */
void set_Longitud(void unsigned float);
    
/**
 * @param unsigned float
 */
void set_Ancho(void unsigned float);
    
void Mantenimiento_tuberias();
    class Class1 {
    };
private: 
    enumeration TipoTuberia;
    unsigned float Longitud;
    unsigned float Ancho;
};

#endif //_PLOMERO_H