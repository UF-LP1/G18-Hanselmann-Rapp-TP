/**
 * Project Untitled
 */


#ifndef _CERRADURAS_H
#define _CERRADURAS_H

#include "Cerrajeria.h"
#include "TipoCerradura.h"


class Cerraduras: public Cerrajeria {
public: 
    
TipoCerradura get_Tipo();
    
/**
 * @param TipoCerradura
 */
void set_Tipo(TipoCerradura NuevoEstado);

private: 
    enum TipoCerradura;
};

#endif //_CERRADURAS_H