#ifndef _ARTFERRETERIA_H
#define _ARTFERRETERIA_H

#include "Articulo.h"

class ArtFerreteria: public Articulo 
{
protected:
    string MaterialArtFerr;

public: 

    ArtFerreteria(unsigned int Precio_, bool Cambio_, string EstadoArt_, string TipoProducto_, float Alto_, float Ancho_, float Largo_, unsigned int Cantidad_, string MaterialArtFerr_);

    ~ArtFerreteria();
    
    string get_MaterialArtFerr();
 
    void set_MaterialArtFerr(string NuevoEstado);

};
#endif //_ARTFERRETERIA_H