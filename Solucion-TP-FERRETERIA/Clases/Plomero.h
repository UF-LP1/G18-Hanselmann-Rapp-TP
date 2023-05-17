#ifndef _PLOMERO_H
#define _PLOMERO_H

#include "TipoTuberia.h"
#include "Empleado.h"

class Plomero: public Empleado 
{
public: 

    Plomero(const string DNI_, string Nombre_, string Apellido_, TipoSexo Sexo_, unsigned int Salario_, string TipoTransporte_, time_t TiempoTrabajado_, TipoTuberia tub, float Longitud_, float Ancho_);
    ~Plomero();

    string get_Nombre();
    
    TipoTuberia get_Tuberias();
    
    float get_Longitud();
    
    float get_Ancho();
    
    void set_Tuberias(TipoTuberia tub);
 
    void set_Longitud(float NuevoEstado);

    void set_Ancho(float NuevoEstado);
    
private: 
    TipoTuberia Tuberias;
    float Longitud;
    float Ancho;
};

#endif //_PLOMERO_H