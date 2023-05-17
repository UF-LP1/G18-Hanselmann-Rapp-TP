#ifndef _CERRAJERIA_H
#define _CERRAJERIA_H

#include "Articulo.h"

class Cerrajeria: public Articulo 
{
protected:
    string MaterialCerraj;
    friend class Cerraduras;
    friend class Cerrojos;
    friend class LLaves;

public: 

    Cerrajeria(unsigned int, bool, string, string, float, float, float, unsigned int, string);

    ~Cerrajeria();
    
    string get_MaterialCerraj();
 
    void set_MaterialCerraj(string NuevoEstado);

};

#endif //_CERRAJERIA_H