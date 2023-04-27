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

    Articulo(unsigned int Precio_, bool Cambio_, string EstadoArt_, string TipoProducto_, float Alto_, float Ancho_, float Largo_, unsigned int Cantidad_, string ArticuloVendido_, unsigned int PrecioArtVendido_);

    ~Articulo();
    
   unsigned int get_Precio();
    
    bool get_Cambio();
    
    string get_EstadoArt();
    
    const string get_TipoProducto();
    
    const float get_Alto();
    
    const float get_Ancho();
    
    const float get_Largo();
    
    unsigned int get_Cantidad();

    string get_ArticuloVendido();

    unsigned int get_PrecioArtVendio();
    
    /**
     * @param unsigned float
     */
    void set_Precio(unsigned int NuevoEstado);
    
    /**
     * @param bool
     */
    void set_Cambio(bool NuevoEstado);
    
    /**
     * @param string
     */
    void set_EstadoArt(string NuevoEstado);
         
    /**
     * @param unsigned int
     */
    void set_Cantidad(unsigned int NuevoEstado);

    void set_ArticuloVendido(string NuevoEstado);

    void set_PrecioArtVendio(unsigned int NuevoEstado);

protected: 
   unsigned int Precio;
    bool Cambio;
    string EstadoArt;
    const string TipoProducto;
    const float Alto;
    const float Ancho;
    const float Largo;
    unsigned int Cantidad;
    string ArticuloVendido;
    unsigned int PrecioArtVendido;
};

#endif //_ARTICULO_H