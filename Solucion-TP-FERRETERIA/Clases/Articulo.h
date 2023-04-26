/**
 * Project Untitled
 */

#ifndef _ARTICULO_H
#define _ARTICULO_H

#include <iostream>
#include <string>
#include <vector>
#include <list>

using namespace std;

class Articulo 
{
public: 

    Articulo(float Precio_);
    
    float get_Precio();
    
    bool get_Cambio();
    
    string get_EstadoArt();
    
    const string get_TipoProducto();
    
    const unsigned float get_Alto();
    
    const unsigned float get_Ancho();
    
    unsigned int get_Largo();
    
    unsigned int get_Cantidad();
    
    /**
     * @param unsigned float
     */
    void set_Precio(void unsigned float);
    
    /**
     * @param bool
     */
    void set_Cambio(void bool);
    
    /**
     * @param string
     */
    void set_EstadoArt(void string);
    
    /**
     * @param unsigned int
     */
    void set_Largo(unsigned int);
        
    /**
     * @param unsigned int
     */
    void set_Cantidad(unsigned int);

protected: 
    float Precio;
    bool Cambio;
    string EstadoArt;
    const string TipoProducto;
    const float Alto;
    const float Ancho;
    unsigned int Largo;
    unsigned int Cantidad;
    string ArticuloVendido;
    float PrecioArtVendido;
};

#endif //_ARTICULO_H