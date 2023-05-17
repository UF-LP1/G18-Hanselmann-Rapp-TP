/**
 * Project Untitled
 */

#ifndef _TAPASINODORO_H
#define _TAPASINODORO_H

#include "Bazar.h"
#include "TipoTablaInodoro.h"

class TapasInodoro: public Bazar 
{
public: 

    TapasInodoro(unsigned int Precio_, bool Cambio_, string EstadoArt_, string TipoProducto_, float Alto_, float Ancho_, float Largo_, unsigned int Cantidad_, string Color_, TipoTablaInodoro Inodorito_, string Anclajes_, string DisenioTablIno_);

    ~TapasInodoro();
    
    TipoTablaInodoro get_Inodorito();
    
    string get_Anclajes();
    
    string get_DisenioTablIno();

    void set_Anclajes(string NuevoEstado);

    void set_DisenioTablIno(string NuevoEstado);

    void set_Inodorito(TipoTablaInodoro NuevoEstado);

private: 
    TipoTablaInodoro Inodorito;
    string Anclajes;
    string DisenioTablIno;
};
#endif //_TAPASINODORO_H