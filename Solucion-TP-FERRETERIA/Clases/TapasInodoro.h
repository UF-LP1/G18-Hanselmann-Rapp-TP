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

    TapasInodoro(unsigned int, bool, string, string, float, float, float, unsigned int, string, TipoTablaInodoro, string, string);

    ~TapasInodoro();
    
    TipoTablaInodoro get_Inodorito();
    
    string get_Anclajes();
    
    string get_DisenioTablIno();
    
    /**
     * @param string
     */
    void set_Anclajes(string NuevoEstado);
    
    /**
     * @param string
     */
    void set_DisenioTablIno(string NuevoEstado);
    
    /**
     * @param TipoTabla
     */
    void set_Inodorito(TipoTablaInodoro NuevoEstado);

private: 
    TipoTablaInodoro Inodorito;
    string Anclajes;
    string DisenioTablIno;
};
#endif //_TAPASINODORO_H