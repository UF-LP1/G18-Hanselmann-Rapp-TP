/**
 * Project Untitled
 */

#ifndef _CERRAJERIA_H
#define _CERRAJERIA_H

#include "Articulo.h"

class Cerrajeria: public Articulo 
{
protected:
    string MaterialCerraj;

public: 

    Cerrajeria(unsigned int, bool, string, string, float, float, float, unsigned int, string);

    ~Cerrajeria();
    
    string get_MaterialCerraj();
    
    /**
     * @param string
     */
    void set_MaterialCerraj(string NuevoEstado);

};

#endif //_CERRAJERIA_H