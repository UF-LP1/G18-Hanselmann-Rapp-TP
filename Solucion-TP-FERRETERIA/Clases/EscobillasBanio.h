/**
 * Project Untitled
 */

#ifndef _ESCOBILLASBANIO_H
#define _ESCOBILLASBANIO_H

#include "Banio.h"
#include "TipoEscobillaBanio.h"

class EscobillasBanio: public Banio 
{
public: 

    EscobillasBanio(unsigned int Precio_, bool Cambio_, string EstadoArt_, string TipoProducto_, float Alto_, float Ancho_, float Largo_, unsigned int Cantidad_, bool RepuestoArt_, TipoEscobilla EscobillinBanio_, string DisenioEscobilla_, string MarcaEscobilla_, string MaterialEscobilla_);

    ~EscobillasBanio();
    
    TipoEscobilla get_EscobillinBanio();
    
    string get_DisenioEscobilla();
    
    string get_MarcaEscobilla();
    
    string get_MaterialEscobilla();
 
    void set_EscobillinBanio(TipoEscobilla NuevoEstado);

    void set_DisenioEscobilla(string NuevoEstado);

    void set_MarcaEscobilla(string NuevoEstado);

    void set_MaterialEscobilla(string NuevoEstado);

private: 
    TipoEscobilla EscobillinBanio;
    string DisenioEscobilla;
    string MarcaEscobilla;
    string MaterialEscobilla;
};

#endif //_ESCOBILLASBANIO_H