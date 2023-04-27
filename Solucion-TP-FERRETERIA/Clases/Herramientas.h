/**
 * Project Untitled
 */


#ifndef _HERRAMIENTAS_H
#define _HERRAMIENTAS_H

#include "ArtFerreteria.h"
#include "TipoHerramienta.h"


class Herramientas: public ArtFerreteria {
public: 
    
TipoHerramienta get_Herramienta();
    
/**
 * @param TipoHerramienta
 */
void set_Herramienta(TipoHerramienta NuevoEstado);
    
string get_Marca();
    
/**
 * @param string
 */
void set_Marca(string NuevoEstado);

private: 
    enum TipoHerramienta;
    string Marca;
};

#endif //_HERRAMIENTAS_H