/**
 * Project Untitled
 */


#ifndef _BAZAR_H
#define _BAZAR_H

#include "Articulo.h"


class Bazar: public Articulo {
public: 
    
string get_Color();
    
/**
 * @param string
 */
void set_Color(void string);
protected: 
    string Color;
};

#endif //_BAZAR_H