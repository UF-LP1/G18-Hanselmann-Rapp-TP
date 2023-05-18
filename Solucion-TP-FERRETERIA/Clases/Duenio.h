#ifndef _DUENIO_H
#define _DUENIO_H

#include "Persona.h"
#include "Cliente.h"

class Duenio: public Persona
{
public: 
    
    Duenio(const string DNI_, string Nombre_, string Apellido_, TipoSexo Sexo_, bool Disponibilidad_);

    ~Duenio();

    string get_Nombre();
    
    bool get_Disponibilidad();
  
    void set_Disponibilidad(bool NuevoEstado);
    
    void atender_cliente(Cliente cli);
    
    bool identificar_art(Cliente cli, Articulo art);
    
    int CambioArticulo(Articulo art, Cliente cli);

    void imprimir_MenuPrincipal();

    void Imprimir_Menu_ArtFerreteria();

    void Imprimir_Menu_Cerrajeria();

    void Imprimir_Menu_Electricidad();

    void Imprimir_Menu_Cocina();

    void Imprimir_Menu_Bazar();

    void Imprimir_Menu_Banio();
  
private: 
    bool Disponibilidad;
};

#endif //_DUENIO_H