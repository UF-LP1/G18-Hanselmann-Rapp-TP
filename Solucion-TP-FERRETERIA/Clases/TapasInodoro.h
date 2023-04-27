/**
 * Project Untitled
 */


#ifndef _TAPASINODORO_H
#define _TAPASINODORO_H

#include "Bazar.h"
#include "TipoTabla.h"


class TapasInodoro: public Bazar {
public: 

    TapasInodoro(TipoTabla, string, string);

    ~TapasInodoro();
    
TipoTabla get_Tabla();
    
string get_Anclajes();
    
string get_Disenio();
    
/**
 * @param string
 */
void set_Anclajes(string NuevoEstado);
    
/**
 * @param string
 */
void set_Disenio(string NuevoEstado);
    
/**
 * @param TipoTabla
 */
void set_Tabla(TipoTabla NuevoEstado);

private: 
    TipoTabla tipot;
    string Anclajes;
    string Disenio;
};

#endif //_TAPASINODORO_H