/**
 * Project Untitled
 */


#ifndef _DUENIO_H
#define _DUENIO_H

#include "Persona.h"


class Duenio: public Persona {
public: 
    
bool get_Disponibilidad();
    
/**
 * @param bool
 */
void set_Disponibilidad(void bool);
    
/**
 * @param Cliente
 */
void atender_cliente(void Cliente);
    
/**
 * @param Cliente
 */
void identificar_art(void Cliente);
    
/**
 * @param Articulo
 */
unisgned float cobrar(void Articulo);
    
/**
 * @param Articulo
 */
string revisar_art(void Articulo);
    
/**
 * @param Cliente
 * @param Ferreteria
 */
bool atenderCliente(void Cliente, void Ferreteria);
    
void abrir_ferreteria();
    
void cerrar_ferreteria();
    
/**
 * @param Ferreteria
 * @param Herramientas
 */
bool buscar_Herramientas(void Ferreteria, void Herramientas);
    
/**
 * @param Cliente
 * @param Herramientas
 */
bool dar_HerramientasCliente(void Cliente, void Herramientas);
    
/**
 * @param Empleado
 */
bool llamar_Empleado(void Empleado);
private: 
    bool Disponibilidad;
};

#endif //_DUENIO_H