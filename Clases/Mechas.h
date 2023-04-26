/**
 * Project Untitled
 */


#ifndef _MECHAS_H
#define _MECHAS_H

#include "ArtFerreteria.h"


class Mechas: public ArtFerreteria {
public: 
    
TipoMecha get_Mecha();
    
string get_Utilidad();
    
/**
 * @param TipoMecha
 */
void set_Mecha(void TipoMecha);
    
/**
 * @param string
 */
void set_Utilidad(void string);
private: 
    enumeration TipoMecha;
    string Utilidad;
};

#endif //_MECHAS_H