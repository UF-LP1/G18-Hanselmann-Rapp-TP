/**
 * Project Untitled
 */

#ifndef _BAZAR_H
#define _BAZAR_H

#include "Articulo.h"

class Bazar: public Articulo 
{
protected:
    string Color;

public: 

    Bazar(unsigned int Precio_, bool Cambio_, string EstadoArt_, string TipoProducto_, float Alto_, float Ancho_, float Largo_, unsigned int Cantidad_, string Color_);

    ~Bazar();
    
    string get_Color();
    
    void set_Color(string NuevoEstado);

};
#endif //_BAZAR_H