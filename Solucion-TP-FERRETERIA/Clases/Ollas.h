/**
 * Project Untitled
 */


#ifndef _OLLAS_H
#define _OLLAS_H

#include "Cocina.h"
#include "TipoOlla.h"


class Ollas: public Cocina {
public: 

    Ollas(enum TipoOlla, string);

    ~Ollas();
    
TipoOlla get_Olla();
    
string get_MaterialOlla();
    
/**
 * @param TipoOlla
 */
void set_Olla(TipoOlla NuevoEstado);
    
/**
 * @param string
 */
void set_MaterialOlla(string NuevoEstado);

private: 
    enum TipoOlla;
    string MaterialOlla;
};

#endif //_OLLAS_H