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
    
    BarralesCortina(unsigned int, bool, string, string, float, float, float, unsigned int, bool, TipoBarreles, string, unsigned int);

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