/**
 * Project Untitled
 */

#ifndef _TENDEDEROSROPA_H
#define _TENDEDEROSROPA_H

#include "Bazar.h"
#include "TipoTendedero.h"

class TendederosRopa: public Bazar 
{
public: 

    TendederosRopa(unsigned int, bool, string, string, float, float, float, unsigned int, string, unsigned int, string, TipoTendedero, string);

    ~TendederosRopa();
    
    TipoTendedero get_Tendederito();
    
    string get_MaterialTendedero();
    
    /**
     * @param TipoTendedero
     */
    void set_Tendederito(TipoTendedero NuevoEstado);
    
    /**
     * @param string
     */
    void set_MaterialTendedero(string NuevoEstado);

private: 
    TipoTendedero Tendederito;
    string MaterialTendedero;
};
#endif //_TENDEDEROSROPA_H