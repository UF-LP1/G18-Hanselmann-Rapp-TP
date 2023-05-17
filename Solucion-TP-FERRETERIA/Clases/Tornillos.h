#ifndef _TORNILLOS_H
#define _TORNILLOS_H

#include "ArtFerreteria.h"

class Tornillos: public ArtFerreteria 
{
public: 

    Tornillos(unsigned int Precio_, bool Cambio_, string EstadoArt_, string TipoProducto_, float Alto_, float Ancho_, float Largo_, unsigned int Cantidad_, string MaterialArtFerr_, string CabezaTornillo_, string Rosca_, string Utilidad_);

    ~Tornillos();
    
    string get_CabezaTornillo();
    
    string get_Rosca();
    
    string get_Utilidad();
 
    void set_CabezaTornillo(string NuevoEstado);
 
    void set_Rosca(string NuevoEstado);

    void set_Utilidad(string NuevoEstado);

private: 
    string CabezaTornillo;
    string Rosca;
    string Utilidad;
};

#endif //_TORNILLOS_H