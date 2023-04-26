/**
 * Project Untitled
 */


#ifndef _HORARIO_H
#define _HORARIO_H

class Horario {
public: 
    
string get_SemanaManiana();
    
string get_SemanaTarde();
    
string get_Sabados();
    
/**
 * @param string
 */
void set_SemanaManiana(void string);
    
/**
 * @param string
 */
void set_SemanaTarde(void string);
    
/**
 * @param string
 */
void set_Sabados(void string);
private: 
    string SemanaManiana;
    string SemanaTarde;
    string Sabados;
};

#endif //_HORARIO_H