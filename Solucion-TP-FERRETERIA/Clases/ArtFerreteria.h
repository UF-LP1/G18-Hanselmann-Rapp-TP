#ifndef _ARTFERRETERIA_H
#define _ARTFERRETERIA_H

#include "Articulo.h"

class ArtFerreteria: public Articulo 
{
protected:
    string MaterialArtFerr;

public: 

    ArtFerreteria(unsigned int, bool, string, string, float, float, float, unsigned int, string);

    ~ArtFerreteria();
    
    string get_MaterialArtFerr();
 
    void set_MaterialArtFerr(string NuevoEstado);

};
#endif //_ARTFERRETERIA_H