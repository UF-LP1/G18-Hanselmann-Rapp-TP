/**
 * Project Untitled
 */


#ifndef _ELECTRICIDAD_H
#define _ELECTRICIDAD_H

#include "Articulo.h"


class Electricidad: public Articulo {
public: 

    Electricidad(unsigned int, unsigned int);

    ~Electricidad();
    
unsigned int get_Tension();
    
unsigned int get_Potencia();
    
/**
 * @param unsigned int
 */
void set_Tension(unsigned int NuevoEstado);
    
/**
 * @param unsigned int
 */
void set_Potencia(unsigned int NuevoEstado);

protected: 
    unsigned int Tension;
    unsigned int Potencia;
};

#endif //_ELECTRICIDAD_H