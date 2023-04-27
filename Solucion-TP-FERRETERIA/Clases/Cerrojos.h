/**
 * Project Untitled
 */


#ifndef _CERROJOS_H
#define _CERROJOS_H

#include "Cerrajeria.h"
#include "Cerrajeria.h"
#include "TipoCerrojo.h"


class Cerrojos: public Cerrajeria {
public: 
    
TipoCerrojo get_Cerrojo();
    
/**
 * @param TipoCerrojo
 */
void set_Cerrojo(TipoCerrojo NuevoEstado);

private: 
    enum TipoCerrojo;
};

#endif //_CERROJOS_H