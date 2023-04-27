/**
 * Project Untitled
 */


#ifndef _TENDEDEROSROPA_H
#define _TENDEDEROSROPA_H

#include "Bazar.h"
#include "TipoTendedero.h"


class TendederosRopa: public Bazar {
public: 

    TendederosRopa(TipoTendedero, string);

    ~TendederosRopa();
    
TipoTendedero get_Tendedero();
    
string get_MaterialTendedero();
    
/**
 * @param TipoTendedero
 */
void set_Tendedero(TipoTendedero NuevoEstado);
    
/**
 * @param string
 */
void set_MaterialTendedero(string NuevoEstado);

private: 
    TipoTendedero tipoten;
    string MaterialTendedero;
};

#endif //_TENDEDEROSROPA_H