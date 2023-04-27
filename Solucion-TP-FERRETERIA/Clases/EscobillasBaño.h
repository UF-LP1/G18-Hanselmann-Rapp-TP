/**
 * Project Untitled
 */

#ifndef _ESCOBILLASBAÑO_H
#define _ESCOBILLASBAÑO_H

#include "Banio.h"

class EscobillasBaño: public Banio 
{
public: 

    EscobillasBaño(unsigned int, bool, string, string, float, float, float, unsigned int, string, unsigned int, bool, string, string, string, string);

    ~EscobillasBaño();
    
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

#endif //_ESCOBILLASBAÑO_H