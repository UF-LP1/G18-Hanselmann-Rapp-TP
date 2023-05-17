#ifndef _CERRADURAS_H
#define _CERRADURAS_H

#include "Cerrajeria.h"
#include "TipoCerradura.h"

class Cerraduras: public Cerrajeria 
{
public: 
    Cerraduras(unsigned int Precio_, bool Cambio_, string EstadoArt_, string TipoProducto_, float Alto_, float Ancho_, float Largo_, unsigned int Cantidad_, string MaterialCerraj_, TipoCerradura Cerrad_);

    ~Cerraduras();
    
    TipoCerradura get_Cerrad();
    
    void set_Cerrad(TipoCerradura NuevoEstado);

private: 
    TipoCerradura Cerrad;
};

#endif //_CERRADURAS_H