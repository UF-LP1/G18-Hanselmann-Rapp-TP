/**
 * Project Untitled
 */

#ifndef _CLIENTE_H
#define _CLIENTE_H

#include "Persona.h"
#include "MetodoPago.h"
#include "HerramientasAlquiler.h"
#include "Empleado.h"
#include "Articulo.h"
#include "FotoArtRoto.h"

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

class Cliente: public Persona 
{
public: 

    Cliente(const string DNI_, string Nombre_, string Apellido_, TipoSexo Sexo_, TipoFotArt fotinartin_, string Direccion_, MetodoPago MetodoPagoCli_, list<Articulo> Articulos_, bool EnvoltorioIntaco_, list<HerramientasAlquiler> Herr_Alquiler_, bool EnvioDomicilio_, bool duplicadollave_, bool DeseaCambiarArt_);

    ~Cliente();


    string get_Nombre();
    
    string get_Direccion();
    
    MetodoPago get_MetodoPagoCli();
    
    list <Articulo> get_Articulos();
        
    TipoFotArt get_fotinartin();
    
    bool get_EnvoltorioIntacto();

    list <HerramientasAlquiler> get_Herr_Alquiler();

    bool get_EnvioDomicilio();

    bool get_Dupllaves();

    bool get_DeseaCambiarArt();
    
    void set_MetodoPagoCli(MetodoPago NuevoEstado);

    void set_fotinartin(TipoFotArt NuevoEstado);

    void set_Direccion(string NuevoEstado);

    void set_Articulos(list <Articulo> NuevoEstado);
    
    void set_EnvoltorioIntacto(bool NuevoEstado);

    int elegir_art(Articulo art); 

    void set_Herr_Alquiler(list <HerramientasAlquiler> NuevoEstado);

    void set_EnvioDomicilio(bool NuevoEstado);

    void set_Dupllaves(bool NuevoEstado);

    void set_DeseaCambiarArt(bool NuevoEstado);

    void imprimir_MenuAgregar_Carrito(Articulo art2, Cliente cli, Tornillos torni, Clavos clavi, Herramientas herri, Tarugos tar, Mechas mech, Cerrojos cerro, Cerraduras cerra, LLaves llav, Cables cab, Lamparas lamp, Enchufes enchu, Portalamparas port, Ollas oll, Utencillos ute, TendederosRopa tendrop, TablasPlanchar tabpla, TapasInodoro tapin, BarralesCortina barr, EscobillasBanio esco);

    void Imprimir_Menu_ArtFerreteria(Articulo art2, Cliente cli, Tornillos torni, Clavos clavi, Herramientas herri, Tarugos tar, Mechas mech);

    void Imprimir_Menu_Cerrajeria(Articulo art2, Cliente cli, Cerrojos cerro, Cerraduras cerra, LLaves llav);

    void Imprimir_Menu_Electricidad(Articulo art2, Cliente cli, Cables cab, Lamparas lamp, Enchufes enchu, Portalamparas port);

    void Imprimir_Menu_Cocina(Articulo art2, Cliente cli, Ollas oll, Utencillos ute);

    void Imprimir_Menu_Bazar(Articulo art2, Cliente cli, TendederosRopa tendrop, TablasPlanchar tabpla, TapasInodoro tapin);

    void Imprimir_Menu_Banio(Articulo art2, Cliente cli, BarralesCortina barr, EscobillasBanio esco);

private: 
    
    TipoFotArt fotinartin;
    string Direccion;
    MetodoPago MetodoPagoCli;
    list <Articulo> Articulos; //*Articulos
    list <HerramientasAlquiler> Herr_Alquiler;
    bool EnvoltorioIntacto;
    bool EnvioDomicilio;
    bool duplicadollave;
    bool DeseaCambiarArt;
};

#endif //_CLIENTE_H