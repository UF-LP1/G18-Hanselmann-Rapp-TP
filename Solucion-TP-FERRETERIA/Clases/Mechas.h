#ifndef _MECHAS_H
#define _MECHAS_H

#include "ArtFerreteria.h"
#include "TipoMecha.h"

class Mechas: public ArtFerreteria
{
public: 

    Mechas(unsigned int, bool, string, string, float, float, float, unsigned int, string, TipoMecha, string);

    ~Mechas();
    
    TipoMecha get_Mechita();
    
    string get_UtilidadMecha();

    void set_Mechita(TipoMecha NuevoEstado);

    void set_UtilidadMecha(string NuevoEstado);

private: 
    TipoMecha Mechita;
    string UtilidadMecha;
};
#endif //_MECHAS_H