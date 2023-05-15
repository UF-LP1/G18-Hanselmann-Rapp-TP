/**
 * Project Untitled
 */

#ifndef _HORARIO_H
#define _HORARIO_H

#include "DiaSemana.h"
#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>
#include <iterator>

using namespace std;

class Horario 
{
public: 

    Horario(const DiaSemana, time_t);
    ~Horario();
    
    time_t get_Hora();
    
    const DiaSemana get_Semanita();
        
    /**
     * @param string
     */
    void set_Hora(time_t NuevoEstado);
     
private: 
    time_t Hora;
    enum DiaSemana Semanita {Lunes, Martes, Miercoles, Jueves, Viernes, Sabado, Domingo};
};

#endif //_HORARIO_H