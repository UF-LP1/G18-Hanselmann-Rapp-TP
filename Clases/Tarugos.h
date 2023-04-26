/**
 * Project Untitled
 */


#ifndef _TARUGOS_H
#define _TARUGOS_H

#include "ArtFerreteria.h"


class Tarugos: public ArtFerreteria {
public: 
    
TipoTarugo get_Tarugo();
    
string get_Utilidad();
    
/**
 * @param TipoTarugo
 */
void set_Tarugo(void TipoTarugo);
    
/**
 * @param string
 */
void set_Utilidad(void string);
private: 
    enumeration TipoTarugo;
    string Utilidad;
};

#endif //_TARUGOS_H