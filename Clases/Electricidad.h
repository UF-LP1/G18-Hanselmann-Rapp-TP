/**
 * Project Untitled
 */


#ifndef _ELECTRICIDAD_H
#define _ELECTRICIDAD_H

#include "Articulo.h"


class Electricidad: public Articulo {
public: 
    
unsigned int get_Tension();
    
unsigned int get_Potencia();
    
/**
 * @param unsigned int
 */
void set_Tension(void unsigned int);
    
/**
 * @param unsigned int
 */
void set_Potencia(void unsigned int);
protected: 
    unsigned int Tension;
    unsigned int Potencia;
};

#endif //_ELECTRICIDAD_H