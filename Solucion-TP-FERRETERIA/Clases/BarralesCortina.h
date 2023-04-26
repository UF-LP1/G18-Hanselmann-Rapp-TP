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
void set_Barrales(void TipoBarrales);
    
/**
 * @param string
 */
void set_MaterialBarrales(void string);
    
unsigned int get_Ganchos();
    
/**
 * @param unsigned int
 */
void set_Ganchos(void unsigned int);
private: 
    enumeration TipoBarrales;
    string MaterialBarrales;
    unsigned int Ganchos;
};

#endif //_BARRALESCORTINA_H