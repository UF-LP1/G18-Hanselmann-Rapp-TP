/**
 * Project Untitled
 */

#ifndef _CLIENTE_H
#define _CLIENTE_H

#include "Persona.h"
#include "HerramientasAlquiler.h"
#include "Empleado.h"
#include "Articulo.h"

class Cliente: public Persona 
{
public: 

    Cliente(string Direccion_, MetodoPago MetodoPago_, vector<Articulo> Articulos_, string Foto_, string ArtRoto_, bool EnvoltorioIntacto_);

    ~Cliente();
    
    const string get_Direccion();
    
    MetodoPago get_Pago();
    
    vector <Articulo> get_Articulos();
        
    const string get_Foto();
    
    const string get_ArtRoto();
    
    const bool get_EnvoltorioIntacto();
    
    /**
     * @param MetodoPago
     */
    void set_Pago(MetodoPago NuevoEstado);
    
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
    void elegir_art(void Precio);

private: 
    const string Direccion;
    enum MetodoPago;
    vector <Articulo> Articulos;
    const string Foto;
    const string ArtRoto;
    const bool EnvoltorioIntacto;
};

#endif //_CLIENTE_H