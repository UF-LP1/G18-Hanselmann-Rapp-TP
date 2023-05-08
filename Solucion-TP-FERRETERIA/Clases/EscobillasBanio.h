/**
 * Project Untitled
 */

#ifndef _ESCOBILLASBANIO_H
#define _ESCOBILLASBANIO_H

#include "Banio.h"

class EscobillasBanio: public Banio 
{
public: 

    EscobillasBanio(unsigned int, bool, string, string, float, float, float, unsigned int, string, unsigned int, bool, string, string, string, string);

    ~EscobillasBanio();
    
    string get_TipoEscobilla();
    
    string get_DisenioEscobilla();
    
    string get_MarcaEscobilla();
    
    string get_MaterialEscobilla();
    
    /**
     * @param string
     */
    void set_TipoEscobilla(string NuevoEstado);
    
    /**
     * @param string
     */
    void set_DisenioEscobilla(string NuevoEstado);
    
    /**
     * @param string
     */
    void set_MarcaEscobilla(string NuevoEstado);
    
    /**
     * @param string
     */
    void set_MaterialEscobilla(string NuevoEstado);

private: 
    string TipoEscobilla;
    string DisenioEscobilla;
    string MarcaEscobilla;
    string MaterialEscobilla;
};

#endif //_ESCOBILLASBANIO_H