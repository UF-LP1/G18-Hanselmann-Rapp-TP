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

    float generar_Presupuesto( Empleado emp, Articulo art, HerramientasAlquiler herr);


private: 
    const string Nombre;
    const string Direccion;
    const string Telefono;
    const string Mail;
    string MetodoPago;
    unsigned int Monto;
    float AlquilerLocal;
    float ExpensasLocal;
    float PrecioCargamento;
};

#endif //_FERRETERIA_H