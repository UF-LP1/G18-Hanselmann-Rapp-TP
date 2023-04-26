/**
 * Project Untitled
 */


#ifndef _LLAVES_H
#define _LLAVES_H

#include "Cerrajeria.h"


class LLaves: public Cerrajeria {
public: 
    
TipoLlave get_Tipo();
    
/**
 * @param TipoLlave
 */
void set_Tipo(void TipoLlave);
private: 
    enumeration TipoLlave;
};

#endif //_LLAVES_H