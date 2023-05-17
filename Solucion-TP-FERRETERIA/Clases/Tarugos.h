#ifndef _TARUGOS_H
#define _TARUGOS_H

#include "ArtFerreteria.h"
#include "TipoTarugo.h"

class Tarugos: public ArtFerreteria 
{
public: 

    Tarugos(unsigned int, bool, string, string, float, float, float, unsigned int, string, TipoTarugo, string);

    ~Tarugos();
    
    TipoTarugo get_Tarugin();
    
    string get_UtilidadTarugo();

    void set_Tarugin(TipoTarugo NuevoEstado);

    void set_UtilidadTarugo(string NuevoEstado);

private: 
    TipoTarugo Tarugin;
    string UtilidadTarugo;
};

#endif //_TARUGOS_H