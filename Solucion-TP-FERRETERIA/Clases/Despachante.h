#ifndef _DESPACHANTE_H
#define _DESPACHANTE_H

#include "Articulo.h"
#include "Cliente.h"
#include "Empleado.h"

class Despachante: public Empleado
{
public: 

    Despachante(const string DNI_, string Nombre_, string Apellido_, TipoSexo Sexo_, unsigned int Salario_, string TipoTransporte_, unsigned int TiempoTrabajado_, string Pedido_);
    ~Despachante();

    string get_Nombre();
        
    string get_Pedido();
  
    void set_Pedido(string NuevoEstado);
    
    bool enviar_articulo(Articulo arti, Cliente cli);

private: 
    string Pedido;
};

#endif //_DESPACHANTE_H