/**
 * Project Untitled
 */


#ifndef _CABLES_H
#define _CABLES_H

#include "Electricidad.h"


class Cables: public Electricidad {
public: 
    
TipoConductor get_Conductores();
    
string get_Aislamiento();
    
string get_Cubierta();
    
/**
 * @param TipoConductor
 */
void set_Conductores(void TipoConductor);
    
/**
 * @param string
 */
void set_Aislamiento(void string);
    
/**
 * @param string
 */
void set_Cubierta(void string);
private: 
    enumeration TipoConductor;
    string Aislamiento;
    string Cubierta;
};

#endif //_CABLES_H