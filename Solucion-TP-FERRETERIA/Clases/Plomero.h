/**
 * Project Untitled
 */

#include "TipoTuberia.h"
#include "Empleado.h"

#ifndef _PLOMERO_H
#define _PLOMERO_H

class Plomero: public Empleado 
{
public: 

    Plomero(TipoTuberia tub, float Longitud_, float Ancho_);
    ~Plomero();
    
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
    const float Longitud;
    const float Ancho;
};

#endif //_PLOMERO_H