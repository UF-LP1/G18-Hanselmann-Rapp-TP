/**
 * Project Untitled
 */


#ifndef _ENCHUFES_H
#define _ENCHUFES_H

#include "Electricidad.h"


class Enchufes: public Electricidad {
public: 
    
TipoEnchufe get_Enchufe();
    
/**
 * @param TipoEnchufe
 */
void set_Enchufe(void TipoEnchufe);
private: 
    enumeration TipoEnchufe;
};

#endif //_ENCHUFES_H