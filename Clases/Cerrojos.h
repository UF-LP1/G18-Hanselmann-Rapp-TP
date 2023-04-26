/**
 * Project Untitled
 */


#ifndef _CERROJOS_H
#define _CERROJOS_H

#include "Cerrajeria.h"
#include "Cerrajeria.h"


class Cerrojos: public Cerrajeria, public Cerrajeria {
public: 
    
TipoCerrojo get_Cerrojo();
    
/**
 * @param TipoCerrojo
 */
void set_Cerrojo(void TipoCerrojo);
private: 
    enumeration TipoCerrojo;
};

#endif //_CERROJOS_H