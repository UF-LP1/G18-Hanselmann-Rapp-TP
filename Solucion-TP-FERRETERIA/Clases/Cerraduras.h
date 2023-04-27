/**
 * Project Untitled
 */

#ifndef _CERRADURAS_H
#define _CERRADURAS_H

#include "Cerrajeria.h"
#include "TipoCerradura.h"

class Cerraduras: public Cerrajeria 
{
public: 
    Cerraduras(unsigned int, bool, string, string, float, float, float, unsigned int, string, unsigned int, string, TipoCerradura);
    ~Cerraduras();
    
    TipoCerradura get_Cerrad();
    
    /**
     * @param TipoCerradura
     */
    void set_Cerrad(TipoCerradura NuevoEstado);
private: 
    TipoCerradura Cerrad;
};

#endif //_CERRADURAS_H