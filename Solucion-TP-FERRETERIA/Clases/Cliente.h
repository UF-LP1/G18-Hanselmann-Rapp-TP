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

    Cliente(const string DNI_, string Nombre_, string Apellido_, TipoSexo Sexo_, string Foto_, string ArtRoto_, string Direccion_, MetodoPago MetodoPagoCli_, list<Articulo> Articulos_, bool EnvoltorioIntaco_, list<HerramientasAlquiler> Herr_Alquiler_, bool EnvioDomicilio_, bool duplicadollave_, bool DeseaCambiarArt_);

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

    bool get_Dupllaves();

    bool get_DeseaCambiarArt();
    
    void set_MetodoPagoCli(MetodoPago NuevoEstado);

    void set_Foto(string NuevoEstado);

    void set_ArtRoto(string NuevoEstado);

    void set_Direccion(string NuevoEstado);

    void set_Articulos(list <Articulo> NuevoEstado);
    
    void set_EnvoltorioIntacto(bool NuevoEstado);

    int elegir_art(Articulo art); 

    void set_Herr_Alquiler(list <HerramientasAlquiler> NuevoEstado);

    void set_EnvioDomicilio(bool NuevoEstado);

    void set_Dupllaves(bool NuevoEstado);

    void set_DeseaCambiarArt(bool NuevoEstado);

private: 
    
    string Foto;
    string ArtRoto;
    string Direccion;
    MetodoPago MetodoPagoCli;
    list <Articulo> Articulos; //*Articulos
    list <HerramientasAlquiler> Herr_Alquiler;
    bool EnvoltorioIntacto;
    bool EnvioDomicilio;
    bool duplicadollave;
    bool DeseaCambiarArt;
};

#endif //_CLIENTE_H