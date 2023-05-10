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

    Horario(string, string, string);
    ~Horario();
    
    string get_SemanaManiana();
    
    string get_SemanaTarde();
    
    string get_Sabados();
    
    /**
     * @param string
     */
    void set_SemanaManiana(string NuevoEstado);
    
    /**
     * @param string
     */
    void set_SemanaTarde(string NuevoEstado);
    
    /**
     * @param string
     */
    void set_Sabados(string NuevoEstado);

private: 
    string SemanaManiana;
    string SemanaTarde;
    string Sabados;
};

#endif //_HORARIO_H