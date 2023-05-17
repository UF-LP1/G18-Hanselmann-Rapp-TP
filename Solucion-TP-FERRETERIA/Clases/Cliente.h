/**
 * Project Untitled
 */

#ifndef _CLIENTE_H
#define _CLIENTE_H

#include "Persona.h"
#include "MetodoPago.h"
#include "HerramientasAlquiler.h"
#include "Empleado.h"
#include "Articulo.h"

class Cliente: public Persona 
{
public: 

    Cliente(const string, string, string, TipoSexo, string, string, string, MetodoPago, list<Articulo>, bool, list <HerramientasAlquiler>, bool);

    ~Cliente();

    string get_Nombre();
    
    string get_Direccion();
    
    MetodoPago get_MetodoPagoCli();
    
    list <Articulo> get_Articulos();
        
    string get_Foto();
    
    string get_ArtRoto();
    
    bool get_EnvoltorioIntacto();

    list <HerramientasAlquiler> get_Herr_Alquiler();

    bool get_EnvioDomicilio();
    
    /**
     * @param MetodoPago
     */
    void set_MetodoPagoCli(MetodoPago NuevoEstado);

    void set_Foto(string NuevoEstado);

    void set_ArtRoto(string NuevoEstado);

    void set_Direccion(string NuevoEstado);
    
    /**
     * @param string
     */
    void set_Articulos(list <Articulo> NuevoEstado);
    
    void set_EnvoltorioIntacto(bool NuevoEstado);
    
    /**
     * @param Precio
     */
    void elegir_art(Articulo art); 

    void set_Herr_Alquiler(list <HerramientasAlquiler> NuevoEstado);

    void set_EnvioDomicilio(bool NuevoEstado);

private: 
    string Foto;
    string ArtRoto;
    string Direccion;
    MetodoPago MetodoPagoCli;
    list <Articulo> Articulos;
    list <HerramientasAlquiler> Herr_Alquiler;
    bool EnvoltorioIntacto;
    bool EnvioDomicilio;
};

#endif //_CLIENTE_H