/**
 * Project Untitled
 */

#ifndef _LAMPARAS_H
#define _LAMPARAS_H

#include "Electricidad.h"
#include "TipoLampara.h"

class Lamparas: public Electricidad 
{
public: 

    Lamparas(unsigned int, bool, string, string, float, float, float, unsigned int, unsigned int, unsigned int, TipoLampara, string);

    ~Lamparas();
    
    TipoLampara get_Lamp();
    
    string get_Disenio();
    
    void set_Lamp(TipoLampara NuevoEstado);
    
    void set_Disenio(string NuevoEstado);

private: 
    TipoLampara Lamp;
    string Disenio;
};

#endif //_LAMPARAS_H