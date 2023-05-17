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

    Ollas(unsigned int Precio_, bool Cambio_, string EstadoArt_, string TipoProducto_, float Alto_, float Ancho_, float Largo_, unsigned int Cantidad_, bool RepuestoArt_, TipoOlla Ollita_, string MaterialOlla_);

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