/**
 * Project Untitled
 */

#ifndef _BANIO_H
#define _BANIO_H

#include "Articulo.h"

class Banio: public Articulo 
{
protected:
    bool RepuestoArt;

public: 
    
    Banio(unsigned int Precio_, bool Cambio_, string EstadoArt_, string TipoProducto_, float Alto_, float Ancho_, float Largo_, unsigned int Cantidad_, bool RepuestoArt_);

    ~Banio();

    bool get_RepuestoArt();
    
    void set_RepuestoArt(bool NuevoEstado);

};

#endif //_BANIO_H