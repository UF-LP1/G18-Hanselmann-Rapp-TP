/**
 * Project Untitled
 */


#ifndef _CERRADURAS_H
#define _CERRADURAS_H

#include "Cerrajeria.h"


class Cerraduras: public Cerrajeria {
public: 
    
TipoCerradura get_Tipo();
    
/**
 * @param TipoCerradura
 */
void set_Tipo(void TipoCerradura);
private: 
    enumeration TipoCerradura;
};

#endif //_CERRADURAS_H