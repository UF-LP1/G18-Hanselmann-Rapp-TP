/**
 * Project Untitled
 */


#ifndef _HERRAMIENTAS_H
#define _HERRAMIENTAS_H

#include "ArtFerreteria.h"


class Herramientas: public ArtFerreteria {
public: 
    
TipoHerramienta get_Herramienta();
    
/**
 * @param TipoHerramienta
 */
void set_Herramiena(void TipoHerramienta);
    
string get_Marca();
    
/**
 * @param string
 */
void set_Marca(void string);
private: 
    enumeration TipoHerramienta;
    string Marca;
};

#endif //_HERRAMIENTAS_H