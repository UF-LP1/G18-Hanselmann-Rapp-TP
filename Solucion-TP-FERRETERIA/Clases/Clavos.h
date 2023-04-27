/**
 * Project Untitled
 */


#ifndef _CLAVOS_H
#define _CLAVOS_H

#include "ArtFerreteria.h"
#include "TipoClavo.h"


class Clavos: public ArtFerreteria {
public: 
    
void get_Clavo();
    
string get_Cabeza();
    
/**
 * @param TipoClavo
 */
void set_Clavo(TipoClavo NuevoEstado);
    
/**
 * @param string
 */
void set_Cabeza(string NuevoEstado);

private: 
    enum TipoClavo;
    string Cabeza;
};

#endif //_CLAVOS_H