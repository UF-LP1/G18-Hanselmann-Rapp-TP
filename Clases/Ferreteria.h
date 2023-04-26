/**
 * Project Untitled
 */

#ifndef _FERRETERIA_H
#define _FERRETERIA_H

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
bool abrir(void Horario);
    
/**
 * @param Cliente
 */
articulos dar_art(void Cliente);
    
/**
 * @param Articulo
 * @param Empleado
 */
    bool dar_ArticuloEmpleado(void Articulo, void Empleado);

    unsigned float generar_Presupuesto(void Empleado, void Articulo, void Herramientas);


private: 
    const string Nombre;
    const string Direccion;
    const string Telefono;
    const string Mail;
    string MetodoPago;
    unsigned int Monto;
    unsigned float AlquilerLocal;
    unsigned float ExpensasLocal;
    unsigned float PrecioCargamento;
};

#endif //_FERRETERIA_H