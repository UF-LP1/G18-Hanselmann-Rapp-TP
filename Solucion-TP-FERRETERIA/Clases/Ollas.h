/**
 * Project Untitled
 */

#ifndef _OLLAS_H
#define _OLLAS_H

#include "Cocina.h"
#include "TipoOlla.h"

class Ollas: public Cocina
{
public: 

    Ollas(unsigned int, bool, string, string, float, float, float, unsigned int, bool, TipoOlla, string);

    ~Ollas();
    
    TipoOlla get_Ollita();
    
    string get_MaterialOlla();
    
    void set_Ollita(TipoOlla NuevoEstado);
    
  
    void set_MaterialOlla(string NuevoEstado);

private: 
    TipoOlla Ollita;
    string MaterialOlla;
};

#endif //_OLLAS_H