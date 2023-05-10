/**
 * Project Untitled
 */

#include "Horario.h"
#include "Articulo.h"
#include "Duenio.h"

#ifndef _FERRETERIA_H
#define _FERRETERIA_H

class Ferreteria 
{
public: 

    Ferreteria(const string, const string, const string, const string, MetodoPago, list<string>, list<int>, unsigned int, unsigned int, unsigned int);

    ~Ferreteria();
    
    const string get_Nombre();
    
    const string get_Direccion();
    
    const string get_Telefono();
    
    const string get_Mail();
    
    MetodoPago get_MetodoPagoFerreteria();
  
    list <string> get_ArticulosTotales();

    list<int> get_CantArtTotales();

    unsigned int get_AlquilerLocal();

    unsigned int get_ExpensasLocal();

    unsigned int get_PrecioCargamento();
    
    /**
     * @param string
     */
    void set_MetodoPagoFerreteria(MetodoPago NuevoEstado);
            
    void set_ArticulosTotales(list <string> NuevoEstado);

    void set_CantArtTotales(list <int> NuevoEstado);

    void set_AlquilerLocal(unsigned int NuevoEstado);

    void set_ExpensasLocal(unsigned int NuevoEstado);

    void set_PrecioCargamento(unsigned int NuevoEstado);

    /**
     * @param Horario
     */
    bool abrir(Horario hora);
        
    /**
     * @param Cliente
     */
    bool dar_ArticuloCliente(Cliente cli, Articulo art);
    
    /**
     * @param Articulo
     * @param Empleado
     */
    bool dar_ArticuloEmpleado(Articulo art, Empleado emp);

    int generar_Presupuesto(Articulo arti, vector<Articulo*> v, Cliente cli);


private: 
    const string Nombre;
    const string Direccion;
    const string Telefono;
    const string Mail;
    MetodoPago MetodoPagoFerreteria;
    list <string> ArticulosTotales;
    list <int> CantArtTotales;
    unsigned int AlquilerLocal;
    unsigned int ExpensasLocal;
    unsigned int PrecioCargamento;
};
#endif //_FERRETERIA_H