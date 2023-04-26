/**
 * Project Untitled
 */


#ifndef _CLIENTE_H
#define _CLIENTE_H

#include "Persona.h"
#include "HerramientasAlquiler.h"
#include "Empleado.h"
#include "Articulo.h"

class Cliente: public Persona {
public: 
    
const string get_Direccion();
    
MetodoPago get_Pago();
    
vector <Articulo> get_Articulos();
        
const string get_Foto();
    
const string get_ArtRoto();
    
const bool get_EnvoltorioIntacto();
    
/**
 * @param MetodoPago
 */
void set_Pago(void MetodoPago);
    
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
    enumeration MetodoPago;
    vector <Articulo> Articulos;
    const string Foto;
    const string ArtRoto;
    const bool EnvoltorioIntacto;
};

#endif //_CLIENTE_H