#ifndef _DUENIO_H
#define _DUENIO_H

#include "Persona.h"
#include "Cliente.h"

class Duenio: public Persona
{
public: 
    
    Duenio(string, string, string, TipoSexo, bool);

    ~Duenio();

    bool get_Disponibilidad();
    
    /**
     * @param bool
     */
    void set_Disponibilidad(bool NuevoEstado);
    
    /**
     * @param Cliente
     */
    void atender_cliente(Cliente cli);
    
    /**
     * @param Cliente
     */
    void identificar_art(Cliente cli);
    
    /**
     * @param Articulo
     */
    int CambioArticulo(Articulo art, Cliente cli);
    
    /**
     * @param Articulo
     */
    string revisar_art(Articulo art);
    
    bool abrir_ferreteria(); 
    
    /**
     * @param Cliente
     * @param Herramientas
     */
    bool dar_HerramientasCliente(Cliente cli, HerramientasAlquiler herralq);

private: 
    bool Disponibilidad;
};

#endif //_DUENIO_H