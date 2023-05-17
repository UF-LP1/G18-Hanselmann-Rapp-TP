#ifndef _HERRAMIENTAS_H
#define _HERRAMIENTAS_H

#include "ArtFerreteria.h"
#include "TipoHerramienta.h"

class Herramientas: public ArtFerreteria 
{
public: 

    Herramientas(unsigned int Precio_, bool Cambio_, string EstadoArt_, string TipoProducto_, float Alto_, float Ancho_, float Largo_, unsigned int Cantidad_, string MaterialArtFerr_, TipoHerramienta HerramientaArtFerr_, string MarcaHerrFerr_);

    ~Herramientas();
    
    TipoHerramienta get_HerramientaArtFerr();

    string get_MarcaHerrFerr();

    void set_HerramientaArtFerr(TipoHerramienta NuevoEstado);
 
    void set_MarcaHerrFerr(string NuevoEstado);

private: 
    TipoHerramienta HerramientaArtFerr;
    string MarcaHerrFerr;
};

#endif //_HERRAMIENTAS_H