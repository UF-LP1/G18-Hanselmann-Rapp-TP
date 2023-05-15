/**
 * Project Untitled
 */

#ifndef _HORARIO_H
#define _HORARIO_H

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

    enum DiaSem { Lunes, Martes, Miercoles, Jueves, Viernes, Sabado, Domingo } Semanita;
    time_t Hora;

public: 

    Horario(DiaSem, time_t);
    ~Horario();
    
    time_t get_Hora();
    
    enum DiaSem get_Semanita();
        
    /**
     * @param string
     */
    void set_Hora(time_t NuevoEstado);

    void set_Semanita(DiaSem NuevoEstado);
};

#endif //_HORARIO_H