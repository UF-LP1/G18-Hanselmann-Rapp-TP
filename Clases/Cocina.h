/**
 * Project Untitled
 */


#ifndef _COCINA_H
#define _COCINA_H

#include "Articulo.h"


class Cocina: public Articulo {
public: 
    
bool get_RepuestoArt();
    
/**
 * @param bool
 */
void set_RepuestoArt(void bool);
protected: 
    bool RepuestoArt;
};

#endif //_COCINA_H