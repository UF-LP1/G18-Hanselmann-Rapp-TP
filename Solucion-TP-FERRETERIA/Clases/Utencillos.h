/**
 * Project Untitled
 */

#ifndef _UTENCILLOS_H
#define _UTENCILLOS_H

#include "Cocina.h"
#include "TipoUtencillo.h"

class Utencillos: public Cocina 
{
public: 

    Utencillos(unsigned int Precio_, bool Cambio_, string EstadoArt_, string TipoProducto_, float Alto_, float Ancho_, float Largo_, unsigned int Cantidad_, bool RepuestoArt_, TipoUtencillo Uten_, string MaterialUtencillo_);

    ~Utencillos();
    
    TipoUtencillo get_Uten();
    
    string get_MaterialUtencillo();
    
    void set_Uten(TipoUtencillo NuevoEstado);

    void set_MaterialUtencillo(string NuevoEstado);

private: 
    TipoUtencillo Uten;
    string MaterialUtencillo;
};

#endif //_UTENCILLOS_H