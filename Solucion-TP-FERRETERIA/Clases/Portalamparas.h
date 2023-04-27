/**
 * Project Untitled
 */


#ifndef _PORTALAMPARAS_H
#define _PORTALAMPARAS_H

#include "Electricidad.h"
#include "TipoPortalamparas.h"


class Portalamparas: public Electricidad {
public: 

    Portalamparas(unsigned int, bool, string, string, float, float, float, unsigned int, string, unsigned int, unsigned int, unsigned int, TipoPortalamparas);

    ~Portalamparas();
    
    TipoPortalamparas get_Portalamparas();
    
/**
 * @param TipoPortalamparas
 */
    void set_PortaLamparas(TipoPortalamparas NuevoEstado);

private: 
    TipoPortalamparas Portalamp;
};

#endif //_PORTALAMPARAS_H