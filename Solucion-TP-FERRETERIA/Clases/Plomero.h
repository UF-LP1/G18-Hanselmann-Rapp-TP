/**
 * Project Untitled
 */

#ifndef _PLOMERO_H
#define _PLOMERO_H

#include "TipoTuberia.h"
#include "Empleado.h"

class Plomero: public Empleado 
{
public: 

    Plomero(string, string, string, TipoSexo, unsigned int, string, time_t, TipoTuberia, float, float);
    ~Plomero();

    string get_Nombre();
    
    TipoTuberia get_Tuberias();
    
    float get_Longitud();
    
    float get_Ancho();
    
    /**
     * @param TipoTuberia
     */
    void set_Tuberias(TipoTuberia tub);
    
    /**
     * @param unsigned float
     */
    void set_Longitud(float NuevoEstado);
    
    /**
     * @param unsigned float
     */
    void set_Ancho(float NuevoEstado);
    
    void Mantenimiento_tuberias();

private: 
    TipoTuberia Tuberias;
    float Longitud;
    float Ancho;
};

#endif //_PLOMERO_H