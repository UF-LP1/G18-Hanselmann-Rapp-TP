#ifndef _CLAVOS_H
#define _CLAVOS_H

#include "ArtFerreteria.h"
#include "TipoClavo.h"

class Clavos: public ArtFerreteria 
{
public: 

    Clavos(unsigned int Precio_, bool Cambio_, string EstadoArt_, string TipoProducto_, float Alto_, float Ancho_, float Largo_, unsigned int Cantidad_, string MaterialArtFerr_, TipoClavo Clavito_, string CabezaClavo_);

    ~Clavos();
    
    TipoClavo get_Clavito();
    
    string get_CabezaClavo();
   
    void set_Clavito(TipoClavo NuevoEstado);
 
    void set_CabezaClavo(string NuevoEstado);

private: 
    TipoClavo Clavito;
    string CabezaClavo;
};

#endif //_CLAVOS_H