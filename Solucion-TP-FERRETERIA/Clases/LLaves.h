#ifndef _LLAVES_H
#define _LLAVES_H

#include "Cerrajeria.h"
#include "TipoLLave.h"

class LLaves: public Cerrajeria 
{
public: 
    LLaves(unsigned int Precio_, bool Cambio_, string EstadoArt_, string TipoProducto_, float Alto_, float Ancho_, float Largo_, unsigned int Cantidad_, string MaterialCerraj_, TipoLLave LLavecita_, bool PermisoEdificio_);

    ~LLaves();
    
    TipoLLave get_LLavecita();

    bool get_PermisoEdificio();
    
    void set_LLavecita(TipoLLave NuevoEstado);

    void set_PermisoEdificio(bool NuevoEstado);

private: 
    TipoLLave LLavecita;
    bool PermisoEdificio;
};
#endif //_LLAVES_H