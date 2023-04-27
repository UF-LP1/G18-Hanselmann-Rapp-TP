/**
 * Project Untitled
 */


#ifndef _BANIO_H
#define _BANIO_H

#include "Articulo.h"


class Banio: public Articulo {
public: 
    
    Banio(unsigned int, bool, string, string, float, float, float, unsigned int, string, unsigned int, bool);

    ~Banio();

bool get_RepuestoArt();
    
/**
 * @param bool
 */
void set_RepuestoArt(bool NuevoEstado);

protected: 
    bool RepuestoArt;
};

#endif //_BANIO_H