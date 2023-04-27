/**
 * Project Untitled
 */


#ifndef _COCINA_H
#define _COCINA_H

#include "Articulo.h"


class Cocina: public Articulo {
public: 

    Cocina(bool);

    ~Cocina();
    
bool get_RepuestoArt();
    
/**
 * @param bool
 */
void set_RepuestoArt(bool NuevoEstado);

protected: 
    bool RepuestoArt;
};

#endif //_COCINA_H