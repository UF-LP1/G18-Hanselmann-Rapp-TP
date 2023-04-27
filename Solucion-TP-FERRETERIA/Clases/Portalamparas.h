/**
 * Project Untitled
 */


#ifndef _PORTALAMPARAS_H
#define _PORTALAMPARAS_H

#include "Electricidad.h"
#include "TipoPortalamparas.h"


class Portalamparas: public Electricidad {
public: 

    Portalamparas(TipoPortalamparas);

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