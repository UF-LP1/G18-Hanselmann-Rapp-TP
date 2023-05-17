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

    Cliente(string, string, const string, TipoSexo, string, MetodoPago, list<Articulo>, const string, const string, bool);

    ~Cliente();
    
    string get_Direccion();
    
    MetodoPago get_MetodoPagoCli();
    
    list <Articulo> get_Articulos();
        
    const string get_Foto();
    
    const string get_ArtRoto();
    
    bool get_EnvoltorioIntacto();
    
    /**
     * @param MetodoPago
     */
    void set_MetodoPagoCli(MetodoPago NuevoEstado);

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

private: 
    string Direccion;
    MetodoPago MetodoPagoCli;
    list <Articulo> Articulos;
    const string Foto;
    const string ArtRoto;
    bool EnvoltorioIntacto;
};

#endif //_CLIENTE_H