#ifndef _TORNILLOS_H
#define _TORNILLOS_H

#include "ArtFerreteria.h"
#include "TipoTornillo.h"

class Tornillos: public ArtFerreteria 
{
public: 

    Tornillos(unsigned int Precio_, bool Cambio_, string EstadoArt_, string TipoProducto_, float Alto_, float Ancho_, float Largo_, unsigned int Cantidad_, string MaterialArtFerr_, string CabezaTornillo_, string Rosca_, string Utilidad_, TipoTornillo tornillin_);

    ~Tornillos();
    
    string get_CabezaTornillo();
    
    string get_Rosca();
    
    string get_Utilidad();

    TipoTornillo get_tornillin();
 
    void set_CabezaTornillo(string NuevoEstado);
 
    void set_Rosca(string NuevoEstado);

    void set_Utilidad(string NuevoEstado);

    void set_tornillin(TipoTornillo NuevoEstado);

private: 
    string CabezaTornillo;
    string Rosca;
    string Utilidad;
    TipoTornillo tornillin;
};

#endif //_TORNILLOS_H