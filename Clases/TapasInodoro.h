/**
 * Project Untitled
 */


#ifndef _TAPASINODORO_H
#define _TAPASINODORO_H

#include "Bazar.h"


class TapasInodoro: public Bazar {
public: 
    
TipoTabla get_Tabla();
    
string get_Anclajes();
    
string get_Disenio();
    
/**
 * @param string
 */
void set_Anclajes(void string);
    
/**
 * @param string
 */
void set_Disenio(void string);
    
/**
 * @param TipoTabla
 */
void set_Tabla(void TipoTabla);
private: 
    enumeration TipoTabla;
    string Anclajes;
    string Disenio;
};

#endif //_TAPASINODORO_H