/**
 * Project Untitled
 */

#ifndef _DESPACHANTE_H
#define _DESPACHANTE_H

#include "Empleado.h"

class Despachante: public Empleado
{
public: 

    Despachante(string, string, string, TipoSexo, unsigned int, string, time_t, string);
    ~Despachante();
    
    string get_Pedido();
    
    /**
     * @param string
     */
    void set_Pedido(string NuevoEstado);
    
    void llevar_pedido();

private: 
    string Pedido;
};

#endif //_DESPACHANTE_H