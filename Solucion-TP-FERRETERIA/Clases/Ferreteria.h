/**
 * Project Untitled
 */

#include "Articulo.h"
#include "Duenio.h"

#ifndef _FERRETERIA_H
#define _FERRETERIA_H

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>
#include <iterator>

using namespace std;

class Ferreteria 
{
public: 
    
    const string get_Nombre();
    
    const string get_Direccion();
    
    const string get_Telefono();
    
    const string get_Mail();
    
    const string get_MetodoPago();
    
    unsigned int get_Monto();

    list <string> get_ArticulosTotales();

    list<int> get_CantArtTotales();
    
    /**
     * @param string
     */
    void set_MetodoPago(void string);
    
    /**
 * @param unsigned int
 */
void set_Monto(void unsigned int);
    
/**
 * @param Horario
 */
bool abrir(class Horario);
    
/**
 * @param Cliente
 */
articulos dar_art(class Cliente);
    
/**
 * @param Articulo
 * @param Empleado
 */
    bool dar_ArticuloEmpleado(class Articulo, class Empleado);

    void set_ArticulosTotales(list <string> NuevoEstado);

    void set_CantArtTotales(list <int> NuevoEstado);

    int generar_Presupuesto( Articulo art, Cliente cli);


private: 
    const string Nombre;
    const string Direccion;
    const string Telefono;
    const string Mail;
    string MetodoPago;
    unsigned int Monto;
    list <string> ArticulosTotales;
    list <int> CantArtTotales;
    float AlquilerLocal;
    float ExpensasLocal;
    float PrecioCargamento;
};

#endif //_FERRETERIA_H