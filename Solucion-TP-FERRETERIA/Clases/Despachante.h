/**
 * Project Untitled
 */


#ifndef _DESPACHANTE_H
#define _DESPACHANTE_H

#include "Empleado.h"


class Despachante: public Empleado {
public: 
    
string get_Pedido();
    
/**
 * @param string
 */
void set_Pedido(void string);
    
void llevar_pedido();
private: 
    string Pedido;
};

#endif //_DESPACHANTE_H