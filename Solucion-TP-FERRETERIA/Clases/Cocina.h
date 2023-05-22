/**
 * Project Untitled
 */

#ifndef _COCINA_H
#define _COCINA_H

#include "Articulo.h"

class Cocina: public Articulo 
{
protected:
    bool RepuestoArt;

public: 

    Cocina(unsigned int Precio_, bool Cambio_, string EstadoArt_, string TipoProducto_, float Alto_, float Ancho_, float Largo_, unsigned int Cantidad_, bool RepuestoArt_);

    ~Cocina();
    
    bool get_RepuestoArt();
    
    void set_RepuestoArt(bool NuevoEstado);

};

#endif //_COCINA_H