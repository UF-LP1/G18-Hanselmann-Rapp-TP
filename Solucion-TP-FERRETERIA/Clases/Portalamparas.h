/**
 * Project Untitled
 */

#ifndef _PORTALAMPARAS_H
#define _PORTALAMPARAS_H

#include "Electricidad.h"
#include "TipoPortalamparas.h"

class Portalamparas: public Electricidad 
{
public: 

    Portalamparas(unsigned int, bool, string, string, float, float, float, unsigned int, unsigned int, unsigned int, TipoPortalamparas);

    ~Portalamparas();
    
    TipoPortalamparas get_PortaLamp();
    
    /**
     * @param TipoPortalamparas
     */
    void set_PortaLamp(TipoPortalamparas NuevoEstado);

private: 
    TipoPortalamparas PortaLamp;
};

#endif //_PORTALAMPARAS_H