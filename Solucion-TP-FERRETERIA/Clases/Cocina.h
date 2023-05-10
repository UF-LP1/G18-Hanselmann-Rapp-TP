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

    Cocina(unsigned int, bool, string, string, float, float, float, unsigned int, bool);

    ~Cocina();
    
    bool get_RepuestoArt();
    
    /**
     * @param bool
     */
    void set_RepuestoArt(bool NuevoEstado);

};

#endif //_COCINA_H