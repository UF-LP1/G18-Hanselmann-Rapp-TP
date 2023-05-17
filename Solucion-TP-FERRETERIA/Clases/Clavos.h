#ifndef _CLAVOS_H
#define _CLAVOS_H

#include "ArtFerreteria.h"
#include "TipoClavo.h"

class Clavos: public ArtFerreteria 
{
public: 

    Clavos(unsigned int, bool, string, string, float, float, float, unsigned int, string, TipoClavo, string);

    ~Clavos();
    
    TipoClavo get_Clavito();
    
    string get_CabezaClavo();
   
    void set_Clavito(TipoClavo NuevoEstado);
 
    void set_CabezaClavo(string NuevoEstado);

private: 
    TipoClavo Clavito;
    string CabezaClavo;
};

#endif //_CLAVOS_H