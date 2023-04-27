/**
 * Project Untitled
 */


#ifndef _TARUGOS_H
#define _TARUGOS_H

#include "ArtFerreteria.h"
#include "TipoTarugo.h"


class Tarugos: public ArtFerreteria {
public: 
    
TipoTarugo get_Tarugo();
    
string get_Utilidad();
    
/**
 * @param TipoTarugo
 */
void set_Tarugo(TipoTarugo);
    
/**
 * @param string
 */
void set_Utilidad(string);
private: 
    enum TipoTarugo;
    string Utilidad;
};

#endif //_TARUGOS_H