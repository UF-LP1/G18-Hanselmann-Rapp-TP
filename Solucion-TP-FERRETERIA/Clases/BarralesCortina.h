/**
 * Project Untitled
 */


#ifndef _BARRALESCORTINA_H
#define _BARRALESCORTINA_H

#include "Banio.h"
#include"TipoBarreles.h"

class BarralesCortina: public Banio {
public: 
    
    BarralesCortina(TipoBarreles, string, unsigned int);

    ~BarralesCortina();

TipoBarreles get_Barrales();
    
string get_MaterialBarrales();
    
/**
 * @param TipoBarrales
 */
void set_Barrales(TipoBarreles NuevoEstado);
    
/**
 * @param string
 */
void set_MaterialBarrales(string NuevoEstado);
    
unsigned int get_Ganchos();
    
/**
 * @param unsigned int
 */
void set_Ganchos(unsigned int NuevoEstado);

private: 
    TipoBarreles tipoba;
    string MaterialBarreles;
    unsigned int Ganchos;
};

#endif //_BARRALESCORTINA_H