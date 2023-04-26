/**
 * Project Untitled
 */


#ifndef _TORNILLOS_H
#define _TORNILLOS_H

#include "ArtFerreteria.h"


class Tornillos: public ArtFerreteria {
public: 
    
string get_Cabeza();
    
string get_Rosca();
    
string get_Utilidad();
    
/**
 * @param string
 */
void set_Cabeza(void string);
    
/**
 * @param string
 */
void set_Rosca(void string);
    
/**
 * @param string
 */
void set_Utilidad(void string);
private: 
    string Cabeza;
    string Rosca;
    string Utilidad;
};

#endif //_TORNILLOS_H