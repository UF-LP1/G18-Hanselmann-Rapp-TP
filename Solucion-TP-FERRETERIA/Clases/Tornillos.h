#ifndef _TORNILLOS_H
#define _TORNILLOS_H

#include "ArtFerreteria.h"

class Tornillos: public ArtFerreteria 
{
public: 

    Tornillos(unsigned int, bool, string, string, float, float, float, unsigned int, string, string, string, string);

    ~Tornillos();
    
    string get_CabezaTornillo();
    
    string get_Rosca();
    
    string get_Utilidad();
 
    void set_CabezaTornillo(string NuevoEstado);
 
    void set_Rosca(string NuevoEstado);

    void set_Utilidad(string NuevoEstado);

private: 
    string CabezaTornillo;
    string Rosca;
    string Utilidad;
};

#endif //_TORNILLOS_H