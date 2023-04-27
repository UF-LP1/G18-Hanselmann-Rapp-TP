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

    Utencillos(unsigned int, bool, string, string, float, float, float, unsigned int, string, unsigned int, bool, TipoUtencillo, string);

    ~Utencillos();
    
    TipoUtencillo get_Utencillo();
    
    string get_MaterialUtencillo();
    
    /**
     * @param TipoUtencillo
     */
    void set_Utencillo(TipoUtencillo NuevoEstado);
    
    /**
     * @param string
     */
    void set_MaterialUtencillo(string NuevoEstado);

private: 
    TipoUtencillo tipouten;
    string MaterialUtencillo;
};

#endif //_UTENCILLOS_H