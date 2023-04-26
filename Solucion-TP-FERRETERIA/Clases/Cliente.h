/**
 * Project Untitled
 */


#ifndef _CLIENTE_H
#define _CLIENTE_H

#include "Persona.h"


class Cliente: public Persona {
public: 
    
const string get_Direccion();
    
MetodoPago get_Pago();
    
string get_Articulo();
    
unsigned int get_CantArt();
    
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
void set_Articulo(void string);
    
/**
 * @param unsigned int
 */
void set_CantArt(void unsigned int);
    
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
    string Articulo;
    unsigned int CantArt;
    const string Foto;
    const string ArtRoto;
    const bool EnvoltorioIntacto;
};

#endif //_CLIENTE_H