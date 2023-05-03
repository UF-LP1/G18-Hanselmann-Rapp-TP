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

    Ollas(unsigned int, bool, string, string, float, float, float, unsigned int, string, unsigned int, bool, TipoOlla, string);

    ~Ollas();
    
    TipoOlla get_Ollita();
    
    string get_MaterialOlla();
    
    /**
     * @param TipoOlla
     */
    void set_Ollita(TipoOlla NuevoEstado);
    
    /**
     * @param string
     */
    void set_MaterialOlla(string NuevoEstado);

private: 
    TipoOlla Ollita;
    string MaterialOlla;
};

#endif //_OLLAS_H