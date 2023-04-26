/**
 * Project Untitled
 */


#ifndef _ARTFERRETERIA_H
#define _ARTFERRETERIA_H

#include "Ferreteria.h"
#include "Articulo.h"


class ArtFerreteria: public Ferreteria, public Articulo {
public: 
    
string get_Material();
    
/**
 * @param string
 */
void set_Material(void string);
protected: 
    string Material;
};

#endif //_ARTFERRETERIA_H