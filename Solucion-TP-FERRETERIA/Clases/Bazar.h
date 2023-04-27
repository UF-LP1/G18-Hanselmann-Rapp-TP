/**
 * Project Untitled
 */


#ifndef _BAZAR_H
#define _BAZAR_H

#include "Articulo.h"


class Bazar: public Articulo {
public: 

    Bazar(string);

    ~Bazar();
    
string get_Color();
    
/**
 * @param string
 */
void set_Color(string NuevoEstado);

protected: 
    string Color;
};

#endif //_BAZAR_H