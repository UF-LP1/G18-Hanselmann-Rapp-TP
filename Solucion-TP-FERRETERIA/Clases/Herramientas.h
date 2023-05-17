#ifndef _HERRAMIENTAS_H
#define _HERRAMIENTAS_H

#include "ArtFerreteria.h"
#include "TipoHerramienta.h"

class Herramientas: public ArtFerreteria 
{
public: 

    Herramientas(unsigned int, bool, string, string, float, float, float, unsigned int, string, TipoHerramienta, string);

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