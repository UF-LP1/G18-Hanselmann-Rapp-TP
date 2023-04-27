/**
 * Project Untitled
 */

#ifndef _HERRAMIENTAS_H
#define _HERRAMIENTAS_H

#include "ArtFerreteria.h"
#include "TipoHerramienta.h"

class Herramientas: public ArtFerreteria 
{
public: 

    Herramientas(unsigned int, bool, string, string, float, float, float, unsigned int, string, unsigned int, string, TipoHerramienta, string);
    ~Herramientas();
    
    TipoHerramienta get_HerramientaArtFerr();

    string get_MarcaArtFerr();
    
    /**
     * @param TipoHerramienta
     */
    void set_HerramientaArtFerr(TipoHerramienta NuevoEstado);
    
    /**
     * @param string
     */
    void set_MarcaArtFerr(string NuevoEstado);

private: 
    TipoHerramienta HerramientaArtFerr;
    string MarcaArtFerr;
};

#endif //_HERRAMIENTAS_H