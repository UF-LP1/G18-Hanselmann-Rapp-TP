/**
 * Project Untitled
 */

#ifndef _HORARIO_H
#define _HORARIO_H

#include "DiaSemanita.h"
#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>
#include <iterator>
#include <time.h>

using namespace std;

class Horario 
{
private:

    DiaSemana Semanita;
    time_t Hora;

public: 

    Horario(DiaSemana, time_t);
    ~Horario();
    
    time_t get_Hora();
    
    DiaSemana get_Semanita();
        
    /**
     * @param string
     */
    void set_Hora(time_t NuevoEstado);
};

#endif //_HORARIO_H