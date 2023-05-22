#ifndef _MECHAS_H
#define _MECHAS_H

#include "ArtFerreteria.h"
#include "TipoMecha.h"

class Mechas: public ArtFerreteria
{
public: 

    Mechas(unsigned int Precio_, bool Cambio_, string EstadoArt_, string TipoProducto_, float Alto_, float Ancho_, float Largo_, unsigned int Cantidad_, string MaterialArtFerr_, TipoMecha Mechita_, string UtilidadMecha_);

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