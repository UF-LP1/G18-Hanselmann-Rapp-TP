#ifndef _DUENIO_H
#define _DUENIO_H

#include "Persona.h"
#include "Cliente.h"
#include "Tornillos.h"
#include "Tarugos.h"
#include "Clavos.h"
#include "Herramientas.h"
#include "Mechas.h"
#include "Cerraduras.h"
#include "LLaves.h"
#include "Cerrojos.h"
#include "Cables.h"
#include "Portalamparas.h"
#include "Lamparas.h"
#include "Enchufes.h"
#include "Utencillos.h"
#include "Ollas.h"
#include "TendederosRopa.h"
#include "TablasPlanchar.h"
#include "TapasInodoro.h"
#include "BarralesCortina.h"
#include "EscobillasBanio.h"

class Duenio: public Persona
{
public: 
    
    Duenio(const string DNI_, string Nombre_, string Apellido_, TipoSexo Sexo_, bool Disponibilidad_);

    ~Duenio();

    string get_Nombre();
    
    bool get_Disponibilidad();
  
    void set_Disponibilidad(bool NuevoEstado);
 
    void atender_cliente(Cliente cli);
    
    bool identificar_art(Cliente cli, Articulo art);
    
    int CambioArticulo(Articulo art, Cliente cli);

    int consrandom(int maximo, int minimo);

    void imprimir_MenuPrincipal(Articulo art, Cliente cli, Tornillos torni, Clavos clavi, Herramientas herri, Tarugos tar, Mechas mech, Cerrojos cerro, Cerraduras cerra, LLaves llav, Cables cab, Lamparas lamp, Enchufes enchu, Portalamparas port, Ollas oll, Utencillos ute, TendederosRopa tendrop, TablasPlanchar tabpla, TapasInodoro tapin, BarralesCortina barr, EscobillasBanio esco);

    void Imprimir_Menu_ArtFerreteria(Tornillos torni, Clavos clavi, Herramientas herri, Tarugos tar, Mechas mech);

    void Imprimir_Menu_Cerrajeria(Cerrojos cerro, Cerraduras cerra, LLaves llav);

    void Imprimir_Menu_Electricidad(Cables cab, Lamparas lamp, Enchufes enchu, Portalamparas port);

    void Imprimir_Menu_Cocina(Ollas oll, Utencillos ute);

    void Imprimir_Menu_Bazar(TendederosRopa tendrop, TablasPlanchar tabpla, TapasInodoro tapin);

    void Imprimir_Menu_Banio(BarralesCortina barr, EscobillasBanio esco);
  
private: 
    bool Disponibilidad;
};

#endif //_DUENIO_H