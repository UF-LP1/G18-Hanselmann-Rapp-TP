/**
 * Project Untitled
 */

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
    float cobrar(Articulo art);
    
    /**
     * @param Articulo
     */
    string revisar_art(Articulo art);
    
    /**
     * @param Cliente
     * @param Ferreteria
     */
    bool atenderCliente(Cliente cli, Ferreteria ferr);
    
    void abrir_ferreteria();
    
    void cerrar_ferreteria();
    
    /**
     * @param Ferreteria
     * @param Herramientas
     */
    bool buscar_Herramientas(Ferreteria ferr, HerramientasAlquiler herralq);
    
    /**
     * @param Cliente
     * @param Herramientas
     */
    bool dar_HerramientasCliente(Cliente cli, HerramientasAlquiler herralq);
    
    /**
     * @param Empleado
     */
    bool llamar_Empleado(Empleado emp);

private: 
    bool Disponibilidad;
};

#endif //_DUENIO_H