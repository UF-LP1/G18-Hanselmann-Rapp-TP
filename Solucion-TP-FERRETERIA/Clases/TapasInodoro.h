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

    TapasInodoro(unsigned int, bool, string, string, float, float, float, unsigned int, string, unsigned int, string, TipoTablaInodoro, string, string);

    ~TapasInodoro();
    
    TipoTablaInodoro get_TablaInodoro();
    
    string get_Anclajes();
    
    string get_Disenio();
    
    /**
     * @param string
     */
    void set_Anclajes(string NuevoEstado);
    
    /**
     * @param string
     */
    void set_Disenio(string NuevoEstado);
    
    /**
     * @param TipoTabla
     */
    void set_TablaInodoro(TipoTablaInodoro NuevoEstado);

private: 
    TipoTablaInodoro Inodorito;
    string Anclajes;
    string Disenio;
};
#endif //_TAPASINODORO_H