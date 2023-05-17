/**
 * Project Untitled
 */

#ifndef _BARRALESCORTINA_H
#define _BARRALESCORTINA_H

#include "Banio.h"
#include"TipoBarreles.h"

class BarralesCortina: public Banio 
{
public: 
    
    BarralesCortina(unsigned int Precio_, bool Cambio_, string EstadoArt_, string TipoProducto_, float Alto_, float Ancho_, float Largo_, unsigned int Cantidad_, bool RepuestoArt_, TipoBarreles Barralito_, string MaterialBarreles_, unsigned int Ganchos_);

    ~BarralesCortina();

    TipoBarreles get_Barralito();
    
    string get_MaterialBarrales();

    unsigned int get_Ganchos();
    
    void set_Barralito(TipoBarreles NuevoEstado);

    void set_MaterialBarrales(string NuevoEstado);

    void set_Ganchos(unsigned int NuevoEstado);

private: 
    TipoBarreles Barralito;
    string MaterialBarreles;
    unsigned int Ganchos;
};

#endif //_BARRALESCORTINA_H