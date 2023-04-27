/**
 * Project Untitled
 */

#ifndef _CERROJOS_H
#define _CERROJOS_H

#include "Cerrajeria.h"
#include "TipoCerrojo.h"

class Cerrojos: public Cerrajeria
{
public: 
    Cerrrojos(unsigned int, bool, string, string, float, float, float, unsigned int, string, unsigned int, string, TipoCerrojo);
    ~Cerrojos();
    
    TipoCerrojo get_Cerroj();
    
    /**
     * @param TipoCerrojo
     */
    void set_Cerroj(TipoCerrojo NuevoEstado);

private: 
    TipoCerrojo Cerroj;
};

#endif //_CERROJOS_H