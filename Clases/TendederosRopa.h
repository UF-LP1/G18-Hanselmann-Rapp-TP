/**
 * Project Untitled
 */


#ifndef _TENDEDEROSROPA_H
#define _TENDEDEROSROPA_H

#include "Bazar.h"


class TendederosRopa: public Bazar {
public: 
    
TipoTendedero get_Tendedero();
    
string get_MaterialTendedero();
    
/**
 * @param TipoTendedero
 */
void set_Tendedero(void TipoTendedero);
    
/**
 * @param string
 */
void set_MaterialTendedero(void string);
private: 
    enumeration TipoTendedero;
    string MaterialTendedero;
};

#endif //_TENDEDEROSROPA_H