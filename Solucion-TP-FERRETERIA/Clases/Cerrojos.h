#ifndef _CERROJOS_H
#define _CERROJOS_H

#include "Cerrajeria.h"
#include "TipoCerrojo.h"

class Cerrojos: public Cerrajeria
{
public: 
    Cerrojos(unsigned int Precio_, bool Cambio_, string EstadoArt_, string TipoProducto_, float Alto_, float Ancho_, float Largo_, unsigned int Cantidad_, string MaterialCerraj_, TipoCerrojo Cerroj_);

    ~Cerrojos();
    
    TipoCerrojo get_Cerroj();

    void set_Cerroj(TipoCerrojo NuevoEstado);

private: 
    TipoCerrojo Cerroj;
};

#endif //_CERROJOS_H