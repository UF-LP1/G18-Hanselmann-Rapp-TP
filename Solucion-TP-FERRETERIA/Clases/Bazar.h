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

    Bazar(unsigned int, bool, string, string, float, float, float, unsigned int, string);

    ~Bazar();
    
    string get_Color();
    
    void set_Color(string NuevoEstado);

};
#endif //_BAZAR_H