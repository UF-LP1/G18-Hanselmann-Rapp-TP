#ifndef _DESPACHANTE_H
#define _DESPACHANTE_H

#include "Articulo.h"
#include "Cliente.h"
#include "Empleado.h"

class Despachante: public Empleado
{
public: 

    Despachante(const string, string, string, TipoSexo, unsigned int, string, time_t, string);
    ~Despachante();

    string get_Nombre();
        
    string get_Pedido();
  
    void set_Pedido(string NuevoEstado);
    
    static bool enviar_articulo(Articulo arti, Cliente cli);

private: 
    string Pedido;
};

#endif //_DESPACHANTE_H