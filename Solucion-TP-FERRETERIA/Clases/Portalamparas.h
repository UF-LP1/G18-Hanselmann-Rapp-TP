/**
 * Project Untitled
 */


#ifndef _PORTALAMPARAS_H
#define _PORTALAMPARAS_H

#include "Electricidad.h"
#include "TipoPortalamparas.h"


class Portalamparas: public Electricidad {
public: 
    
    TipoPortalamparas get_Portalamparas();
    
/**
 * @param TipoPortalamparas
 */
    void set_PortaLamparas(TipoPortalamparas NuevoEstado);

private: 
    enum TipoPortalamparas;
};

#endif //_PORTALAMPARAS_H