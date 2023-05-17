#ifndef _TARUGOS_H
#define _TARUGOS_H

#include "ArtFerreteria.h"
#include "TipoTarugo.h"

class Tarugos: public ArtFerreteria 
{
public: 

    Tarugos(unsigned int Precio_, bool Cambio_, string EstadoArt_, string TipoProducto_, float Alto_, float Ancho_, float Largo_, unsigned int Cantidad_, string MaterialArtFerr_, TipoTarugo Tarugin_, string UtilidadTarugo_);

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