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
    LLaves(unsigned int, bool, string, string, float, float, float, unsigned int, string, unsigned int, string, TipoLLave);

    ~LLaves();
    
    TipoLLave get_LLavecita();
    
    /**
     * @param TipoLlave
     */
    void set_LLavecita(TipoLLave NuevoEstado);

private: 
    TipoLLave LLavecita;
};
#endif //_LLAVES_H