/**
 * Project Untitled
 */

#ifndef _DESPACHANTE_H
#define _DESPACHANTE_H

#include "Articulo.h"
#include "Cliente.h"
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
    
    void enviar_articulo(Articulo arti, Cliente cli);

private: 
    string Pedido;
};

#endif //_DESPACHANTE_H