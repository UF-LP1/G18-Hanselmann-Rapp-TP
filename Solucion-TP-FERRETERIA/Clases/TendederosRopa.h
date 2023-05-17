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

    TendederosRopa(unsigned int Precio_, bool Cambio_, string EstadoArt_, string TipoProducto_, float Alto_, float Ancho_, float Largo_, unsigned int Cantidad_, string Color_, TipoTendedero Tendederito_, string MaterialTendedero_);

    ~TendederosRopa();
    
    TipoTendedero get_Tendederito();
    
    string get_MaterialTendedero();
    
    void set_Tendederito(TipoTendedero NuevoEstado);

    void set_MaterialTendedero(string NuevoEstado);

private: 
    TipoTendedero Tendederito;
    string MaterialTendedero;
};
#endif //_TENDEDEROSROPA_H