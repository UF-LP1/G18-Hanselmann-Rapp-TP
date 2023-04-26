/**
 * Project Untitled
 */


#ifndef _CLAVOS_H
#define _CLAVOS_H

#include "ArtFerreteria.h"


class Clavos: public ArtFerreteria {
public: 
    
void get_Clavo();
    
string get_Cabeza();
    
/**
 * @param TipoClavo
 */
void set_Clavo(void TipoClavo);
    
/**
 * @param string
 */
void set_Cabeza(void string);
private: 
    enumeration TipoClavo;
    string Cabeza;
};

#endif //_CLAVOS_H