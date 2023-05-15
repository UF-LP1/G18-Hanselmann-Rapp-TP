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

using namespace std;

class Horario 
{
public: 

    Horario(time_t, DiaSemana);
    ~Horario();
    
    time_t get_Hora();
    
    string get_DiaSemana();
        
    /**
     * @param string
     */
    void set_Hora(time_t NuevoEstado);
    
    /**
     * @param string
     */
    void set_DiaSemana(string NuevoEstado);
 
private: 
    time_t Hora;
    DiaSemana Semanita;
};

#endif //_HORARIO_H