/**
 * Project Untitled
 */


#ifndef _UTENCILLOS_H
#define _UTENCILLOS_H

#include "Cocina.h"


class Utencillos: public Cocina {
public: 
    
TipoUtencillo get_Utencillo();
    
string get_MaterialUtencillo();
    
/**
 * @param TipoUtencillo
 */
void set_Utencillo(void TipoUtencillo);
    
/**
 * @param string
 */
void set_MaterialUtencillo(void string);
private: 
    enumeration TipoUtencillo;
    string MaterialUtencillo;
};

#endif //_UTENCILLOS_H