/**
 * Project Untitled
 */


#ifndef _PORTALAMPARAS_H
#define _PORTALAMPARAS_H

#include "Electricidad.h"


class Portalamparas: public Electricidad {
public: 
    
TipoPortalampara get_PortaLampara();
    
/**
 * @param TipoPortalamparas
 */
void set_PortaLampara(void TipoPortalamparas);
private: 
    enumeration TipoPortalamparas;
};

#endif //_PORTALAMPARAS_H