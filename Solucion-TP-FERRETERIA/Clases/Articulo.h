#ifndef _ARTICULO_H
#define _ARTICULO_H

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>
#include <iterator>

using namespace std;

class Articulo 
{
protected:
    unsigned int Precio;
    bool Cambio;
    string EstadoArt;
    string TipoProducto;
    float Alto;
    float Ancho;
    float Largo;
    unsigned int Cantidad;
    static unsigned int CantidadMaximaArticulos;
    friend class ArtFerreteria;
    friend class Banio;
    friend class Bazar;
    friend class Cerrajeria;
    friend class Cocina;
    friend class Electricidad;

public: 

    Articulo(unsigned int, bool, string, string, float, float, float, unsigned int);

    ~Articulo();
    
    unsigned int get_Precio();
    
    bool get_Cambio();
    
    string get_EstadoArt();
    
    string get_TipoProducto();
    
    float get_Alto();
    
    float get_Ancho();
    
    float get_Largo();
    
    unsigned int get_Cantidad();

    static unsigned int get_CantidadMaximaArticulos();

    void set_Precio(unsigned int NuevoEstado);
 
    void set_Cambio(bool NuevoEstado);
    
    void set_EstadoArt(string NuevoEstado);
         
    void set_TipoProducto(string NuevoEstado);

    void set_Alto(float NuevoEstado);

    void set_Ancho(float NuevoEstado);

    void set_Largo(float NuevoEstado);

    void set_Cantidad(unsigned int NuevoEstado);

};
#endif //_ARTICULO_H