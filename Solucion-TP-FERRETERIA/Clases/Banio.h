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
    
    Banio(unsigned int, bool, string, string, float, float, float, unsigned int, bool);

    ~Banio();

    bool get_RepuestoArt();
    
    /**
     * @param bool
     */
    void set_RepuestoArt(bool NuevoEstado);

};

#endif //_BANIO_H