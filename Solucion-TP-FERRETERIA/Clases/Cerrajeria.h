#ifndef _CERRAJERIA_H
#define _CERRAJERIA_H

#include "Articulo.h"

class Cerrajeria: public Articulo 
{
protected:
    string MaterialCerraj;

public: 

    Cerrajeria(unsigned int Precio_, bool Cambio_, string EstadoArt_, string TipoProducto_, float Alto_, float Ancho_, float Largo_, unsigned int Cantidad_, string MaterialCerraj_);

    ~Cerrajeria();
    
    string get_MaterialCerraj();
 
    void set_MaterialCerraj(string NuevoEstado);

};

#endif //_CERRAJERIA_H