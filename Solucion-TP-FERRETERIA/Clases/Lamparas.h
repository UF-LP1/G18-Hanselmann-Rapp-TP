/**
 * Project Untitled
 */


#ifndef _LAMPARAS_H
#define _LAMPARAS_H

#include "Electricidad.h"
#include "TipoLampara.h"


class Lamparas: public Electricidad {
public: 

    Lamparas(unsigned int, bool, string, string, float, float, float, unsigned int, string, unsigned int, unsigned int, unsigned int, TipoLampara, string);

    ~Lamparas();
    
TipoLampara get_Lampara();
    
string get_Disenio();
    
/**
 * @param TipoLampara
 */
void set_Lampara(TipoLampara NuevoEstado);
    
/**
 * @param string
 */
void set_Disenio(string NuevoEstado);

private: 
    TipoLampara Lamp;
    string Disenio;
};

#endif //_LAMPARAS_H