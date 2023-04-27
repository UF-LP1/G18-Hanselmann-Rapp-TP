/**
 * Project Untitled
 */


#ifndef _CABLES_H
#define _CABLES_H

#include "Electricidad.h"
#include "TipoConductor.h"


class Cables: public Electricidad {
public: 

    Cables(enum TipoConductor, string, string);

    ~Cables();
    
    
TipoConductor get_Conductores();
    
string get_Aislamiento();
    
string get_Cubierta();
    
/**
 * @param TipoConductor
 */
void set_Conductores(TipoConductor NuevoEstado);
    
/**
 * @param string
 */
void set_Aislamiento(string NuevoEstado);
    
/**
 * @param string
 */
void set_Cubierta(string NuevoEstado);

private: 
    enum TipoConductor;
    string Aislamiento;
    string Cubierta;
};

#endif //_CABLES_H