/**
 * Project Untitled
 */


#ifndef _ENCHUFES_H
#define _ENCHUFES_H

#include "Electricidad.h"
#include "TipoEnchufe.h"


class Enchufes: public Electricidad {
public: 

    Enchufes(TipoEnchufe);

    ~Enchufes();
    
TipoEnchufe get_Enchufe();
    
/**
 * @param TipoEnchufe
 */
void set_Enchufe(TipoEnchufe NuevoEstado);

private: 

    TipoEnchufe Enchu;
};

#endif //_ENCHUFES_H