#ifndef _HORARIO_H
#define _HORARIO_H

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>
#include <iterator>
#include <ctime>

using namespace std;

class Horario 
{
private:
    time_t Hora;

public: 

    Horario(time_t Hora_);
    ~Horario();
    
    time_t get_Hora();
};

#endif //_HORARIO_H