/**
 * Project Untitled
 */


#ifndef _BANIO_H
#define _BANIO_H

#include "Articulo.h"


class Banio: public Articulo {
public: 
    
bool get_RepuestoArt();
    
/**
 * @param bool
 */
void set_RepuestoArt(void bool);
protected: 
    bool RepuestoArt;
};

#endif //_BANIO_H