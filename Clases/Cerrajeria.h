/**
 * Project Untitled
 */


#ifndef _CERRAJERIA_H
#define _CERRAJERIA_H

#include "Articulo.h"


class Cerrajeria: public Articulo {
public: 
    
string get_Material();
    
/**
 * @param string
 */
void set_Material(void string);
protected: 
    string Material;
};

#endif //_CERRAJERIA_H