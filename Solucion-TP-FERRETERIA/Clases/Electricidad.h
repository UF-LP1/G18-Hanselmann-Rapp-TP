/**
 * Project Untitled
 */

#ifndef _ELECTRICIDAD_H
#define _ELECTRICIDAD_H

#include "Articulo.h"

class Electricidad: public Articulo 
{
protected:
    unsigned int Tension;
    unsigned int Potencia;

public: 

    Electricidad(unsigned int Precio_, bool Cambio_, string EstadoArt_, string TipoProducto_, float Alto_, float Ancho_, float Largo_, unsigned int Cantidad_, unsigned int Tension_, unsigned int Potencia_);

    ~Electricidad();
    
    unsigned int get_Tension();
    
    unsigned int get_Potencia();
    
    void set_Tension(unsigned int NuevoEstado);

    void set_Potencia(unsigned int NuevoEstado);

};

#endif //_ELECTRICIDAD_H