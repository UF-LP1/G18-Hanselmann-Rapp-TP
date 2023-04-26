/**
 * Project Untitled
 */


#ifndef _LAMPARAS_H
#define _LAMPARAS_H

#include "Electricidad.h"


class Lamparas: public Electricidad {
public: 
    
TipoLampara get_Lampara();
    
string get_Disenio();
    
/**
 * @param TipoLampara
 */
void set_Lampara(void TipoLampara);
    
/**
 * @param string
 */
void set_Disenio(void string);
private: 
    enumeration TipoLampara;
    string Disenio;
};

#endif //_LAMPARAS_H