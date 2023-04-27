/**
 * Project Untitled
 */


#ifndef _BARRALESCORTINA_H
#define _BARRALESCORTINA_H

#include "Banio.h"

class BarralesCortina: public Banio {
public: 
    
TipoBarrales get_Barrales();
    
string get_MaterialBarrales();
    
/**
 * @param TipoBarrales
 */
void set_Barrales(TipoBarrales NuevoEstado);
    
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
    enum TipoBarrales;
    string MaterialBarrales;
    unsigned int Ganchos;
};

#endif //_BARRALESCORTINA_H