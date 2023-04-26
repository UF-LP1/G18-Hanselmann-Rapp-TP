/**
 * Project Untitled
 */


#ifndef _ESCOBILLASBAÑO_H
#define _ESCOBILLASBAÑO_H

#include "Banio.h"


class EscobillasBaño: public Banio {
public: 
    
string get_TipoEscobilla();
    
string get_Disenio();
    
string get_Marca();
    
string get_MaterialEscobilla();
    
/**
 * @param string
 */
void set_TipoEscobilla(void string);
    
/**
 * @param string
 */
void set_Disenio(void string);
    
/**
 * @param string
 */
void set_Marca(void string);
    
/**
 * @param string
 */
void set_MaterialEscobilla(void string);
private: 
    string TipoEscobilla;
    string Disenio;
    string Marca;
    string MaterialEscobilla;
};

#endif //_ESCOBILLASBAÑO_H