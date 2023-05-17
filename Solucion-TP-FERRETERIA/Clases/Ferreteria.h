#define _CRT_SECURE_NO_WARNINGS

#include "Horario.h"
#include "Articulo.h"
#include "Duenio.h"

#ifndef _FERRETERIA_H
#define _FERRETERIA_H

class Ferreteria 
{
public: 

    Ferreteria(const string, const string, const string, const string, MetodoPago);

    ~Ferreteria();
    
    const string get_Nombre();
    
    const string get_Direccion();
    
    const string get_Telefono();
    
    const string get_Mail();
    
    MetodoPago get_MetodoPagoFerreteria();
      
    /**
     * @param string
     */
    void set_MetodoPagoFerreteria(MetodoPago NuevoEstado);
      
    /**
     * @param Horario
     */
    bool abrir(Horario hor);

    /**
     * @param Articulo
     * @param Empleado
     */
    bool dar_ArticuloEmpleado(Articulo art, Empleado emp);

    int generar_Presupuesto(Cliente cli);


private: 
    const string Nombre;
    const string Direccion;
    const string Telefono;
    const string Mail;
    MetodoPago MetodoPagoFerreteria;
};
#endif //_FERRETERIA_H