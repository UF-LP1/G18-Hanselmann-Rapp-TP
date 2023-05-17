/**
 * Project Untitled
 */

#ifndef _LLAVES_H
#define _LLAVES_H

#include "Cerrajeria.h"
#include "TipoLLave.h"

class LLaves: public Cerrajeria 
{
public: 
    LLaves(unsigned int, bool, string, string, float, float, float, unsigned int, string, TipoLLave, bool);

    ~LLaves();
    
    TipoLLave get_LLavecita();

    bool get_PermisoEdificio();
    
    /**
     * @param TipoLlave
     */
    void set_LLavecita(TipoLLave NuevoEstado);

    void set_PermisoEdificio(bool NuevoEstado);

private: 
    TipoLLave LLavecita;
    bool PermisoEdificio;
};
#endif //_LLAVES_H