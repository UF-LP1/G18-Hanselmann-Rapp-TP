/**
 * Project Untitled
 */

#ifndef _TORNILLOS_H
#define _TORNILLOS_H

#include "ArtFerreteria.h"

class Tornillos: public ArtFerreteria 
{
public: 

    Tornillos(unsigned int, bool, string, string, float, float, float, unsigned int, string, unsigned int, string, string, string, string);
    ~Tornillos();
    
    string get_Cabeza();
    
    string get_Rosca();
    
    string get_Utilidad();
    
    /**
     * @param string
     */
    void set_Cabeza(string NuevoEstado);
    
    /**
     * @param string
     */
    void set_Rosca(string NuevoEstado);
    
    /**
     * @param string
     */
    void set_Utilidad(string NuevoEstado);

private: 
    string Cabeza;
    string Rosca;
    string Utilidad;
};

#endif //_TORNILLOS_H