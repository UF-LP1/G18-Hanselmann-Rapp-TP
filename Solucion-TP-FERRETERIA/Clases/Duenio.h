#ifndef _DUENIO_H
#define _DUENIO_H

#include "Persona.h"
#include "Cliente.h"

class Duenio: public Persona
{
public: 
    
    Duenio(const string, string, string, TipoSexo, bool);

    ~Duenio();

    string get_Nombre();
    
    bool get_Disponibilidad();
  
    void set_Disponibilidad(bool NuevoEstado);
    
    void atender_cliente(Cliente cli);
    
    bool identificar_art(Cliente cli, Articulo art);
    
    int CambioArticulo(Articulo art, Cliente cli);
  
private: 
    bool Disponibilidad;
};

#endif //_DUENIO_H