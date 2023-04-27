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

    Cliente(string, string, string, TipoSexo, string, MetodoPago, vector<Articulo>, const string, const string, const bool);

    ~Cliente();
    
    string get_Direccion();
    
    MetodoPago get_MetodoPagoCli();
    
    vector <Articulo> get_Articulos();
        
    const string get_Foto();
    
    const string get_ArtRoto();
    
    const bool get_EnvoltorioIntacto();
    
    /**
     * @param MetodoPago
     */
    void set_MetodoPagoCli(MetodoPago NuevoEstado);

    void set_Direccion(string NuevoEstado);
    
    /**
     * @param string
     */
    void set_Articulos(vector <Articulo> NuevoEstado);
    
    /**
     * @param unsigned int
     */

    
    void MostrarFoto();
    
    void MostrarArtRoto();
    
    void MostrarEnvoltorioInt();
    
    /**
     * @param Precio
     */
    void elegir_art(Articulo art); 

private: 
    string Direccion;
    MetodoPago MetodoPagoCli;
    vector <Articulo> Articulos;
    const string Foto;
    const string ArtRoto;
    const bool EnvoltorioIntacto;
};

#endif //_CLIENTE_H