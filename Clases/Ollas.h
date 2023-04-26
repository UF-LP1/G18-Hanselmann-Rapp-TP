/**
 * Project Untitled
 */


#ifndef _OLLAS_H
#define _OLLAS_H

#include "Cocina.h"


class Ollas: public Cocina {
public: 
    
TipoOlla get_Olla();
    
string get_MaterialOlla();
    
/**
 * @param TipoOlla
 */
void set_Olla(void TipoOlla);
    
/**
 * @param string
 */
void set_MaterialOlla(void string);
private: 
    enumeration TipoOlla;
    string MaterialOlla;
};

#endif //_OLLAS_H