/**
 * Project Untitled
 */


#ifndef _CERRAJERO_H
#define _CERRAJERO_H

#include "Empleado.h"


class Cerrajero: public Empleado {
public: 
    
string get_Alarma();
    
/**
 * @param string
 */
void set_Alarma(void string);
    
/**
 * @param string
 */
string DuplicarLlaves(void string);
    
void Reparar_cerradura();
private: 
    string Alarma;
};

#endif //_CERRAJERO_H