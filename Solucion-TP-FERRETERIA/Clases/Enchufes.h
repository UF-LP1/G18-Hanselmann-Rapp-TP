/**
 * Project Untitled
 */

#ifndef _ENCHUFES_H
#define _ENCHUFES_H

#include "Electricidad.h"
#include "TipoEnchufe.h"

class Enchufes: public Electricidad 
{
public: 

    Enchufes(unsigned int, bool, string, string, float, float, float, unsigned int, string, unsigned int, unsigned int, unsigned int, TipoEnchufe);

    ~Enchufes();
    
    TipoEnchufe get_Enchu();
    
    /**
     * @param TipoEnchufe
     */
    void set_Enchu(TipoEnchufe NuevoEstado);

private: 
    TipoEnchufe Enchu;
};

#endif //_ENCHUFES_H