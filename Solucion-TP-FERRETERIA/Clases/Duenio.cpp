#include "Duenio.h"

/**
 * Duenio implementation
 */

Duenio::Duenio(const string DNI_, string Nombre_, string Apellido_, TipoSexo Sexo_, bool Disponibilidad_):Persona(DNI_, Nombre_, Apellido_, Sexo_)
{
    this->Disponibilidad = Disponibilidad_;
}

Duenio::~Duenio()
{

}

string Duenio::get_Nombre()
{
    return this->Nombre;
}

bool Duenio::get_Disponibilidad() 
{
    return this->Disponibilidad;
}

void Duenio::set_Disponibilidad(bool NuevoEstado) 
{
    this->Disponibilidad = NuevoEstado;
}

void Duenio::atender_cliente(Cliente cli) 
{
    return;
}

bool Duenio::identificar_art(Cliente cli, Articulo art) //Identificamos si quiere cambiar un articulo segun una Foto o un Articulo Roto
{
    list<Articulo>::iterator itArt; 
    list<Articulo> arti = cli.get_Articulos();

    if (cli.get_fotinartin() == Foto || cli.get_fotinartin() == ArtRoto ) 
    {
        return true;
    }
    else 
    {
         return false;
    }

}

int Duenio::CambioArticulo(Articulo art, Cliente cli) //Revisamos si los Articulos tienen cambio o no según los criterios dados
{
    list<Articulo>::iterator itArt;

    int precio = 0, precio2 = 0;
    int i = 0;
    list<Articulo> arti = cli.get_Articulos();
    itArt = arti.begin();

    for (i = 0; i < arti.size(); i++, itArt++)
    {
         if (cli.get_EnvoltorioIntacto() == true)
         {
              if (itArt->get_Precio() < art.get_Precio())
              {
                   precio = art.get_Precio() - itArt->get_Precio();

                   return precio;
              }
              if (itArt->get_Precio() > art.get_Precio())
              {
                   precio2 = itArt->get_Precio() - art.get_Precio();

                   return precio2;
              }
              if (itArt->get_Precio() == art.get_Precio())
              {
                   cout << "No hay diferencia de precio." << endl;
                   return 0;
              }
              else
              {
                   cout << "No hay Cambio o el Envoltorio no esta Intacto." << endl;
              }
         }
            
    }
}

int Duenio::consrandom(int maximo, int minimo)
{
    srand(time(NULL));
    int valor = rand() % (maximo - minimo) + minimo;
    return valor;
}

void Duenio::imprimir_MenuPrincipal(Cliente cli, Tornillos torni, Clavos clavi, Herramientas herri, Tarugos tar, Mechas mech, Cerrojos cerro, Cerraduras cerra, LLaves llav, Cables cab, Lamparas lamp, Enchufes enchu, Portalamparas port, Ollas oll, Utencillos ute, TendederosRopa tendrop, TablasPlanchar tabpla, TapasInodoro tapin, BarralesCortina barr, EscobillasBanio esco)
{
   int opcion = 0;
   bool salir = true;
   
    do
    {
        system("cls");

        cout << "\n\n\t\t\tMENU CAMBIO DE ARTICULO" << endl;
        cout << "\t\t\t--------------" << endl;
        cout << "\t1. ArtFerreteria" << endl;
        cout << "\t2. Cerrajeria" << endl;
        cout << "\t3. Electricidad" << endl;
        cout << "\t4. Cocina" << endl;
        cout << "\t5. Bazar" << endl;
        cout << "\t6. Banio" << endl;
        cout << "\t0. SALIR" << endl;

        cout << "\tIngrese una Opcion: ";
        cin >> opcion;

        switch (opcion)
        {
            case(1):
                Imprimir_Menu_ArtFerreteria(cli, torni, clavi, herri, tar, mech);
                break;

            case(2):
                Imprimir_Menu_Cerrajeria(cerro, cerra, llav);
                break;

            case(3):
                Imprimir_Menu_Electricidad(cab, lamp, enchu, port);
                break;

            case(4):
                Imprimir_Menu_Cocina(oll, ute);
                break;

            case(5):
                Imprimir_Menu_Bazar(tendrop, tabpla, tapin);
                break;

            case(6):
                Imprimir_Menu_Banio(barr, esco);
                break; 

            case(0):
                salir = false;
                break;
        }
    } while (salir);

    system("cls");
}

void Duenio::Imprimir_Menu_ArtFerreteria(Cliente cli, Tornillos torni, Clavos clavi, Herramientas herri, Tarugos tar, Mechas mech)
{
    int opcion = 0;
    bool regresar = true, salir = true;
    int Tornillin = 0, clavitito = 0, herramientita = 0, taruguillo = 0, mechitita = 0;

    do
    {
        system("cls");

        cout << "\n\n\t\t\tMENU ARTICULOS DE FERRETERIA" << endl;
        cout << "\t\t\t------------------------" << endl;
        cout << "\n\t1. Tornillos" << endl;
        cout << "\t2. Clavos" << endl;
        cout << "\t3. Herramientas" << endl;
        cout << "\t4. Tarugos" << endl;
        cout << "\t5. Mechas" << endl;
        cout << "\t0. REGRESAR" << endl;

        cout << "\n\tIngrese una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case (1):
            if (torni.get_Cambio() == true)
            {
               Duenio::CambioArticulo(torni, cli);
            }
            break;

        case (2):
            clavitito = Duenio::consrandom(2, 0); //usar un random para el enum de clavos.
            clavi.get_Clavito() == clavitito;
            break;

        case (3):
            herramientita = Duenio::consrandom(3, 0); //usar un random para el enum de herramientas.
            herri.get_HerramientaArtFerr() == herramientita;
            break;

        case (4):
            taruguillo = Duenio::consrandom(3, 0); //usar un random para el enum de tarugos.
            tar.get_Tarugin() == taruguillo;
            break;

        case (5):
            mechitita = Duenio::consrandom(2, 0);//usar un random para el enum de mechas.
            //mech.get_Mechita() = mechitita;
            break;

        case(0):
            regresar = false;
            break;

        }
    } while (regresar);
}

void Duenio::Imprimir_Menu_Cerrajeria(Cerrojos cerro, Cerraduras cerra, LLaves llav)
{
    int opcion = 0;
    bool regresar = true;

    int cerrojitito = 0, cerradurita = 0, llavecitita = 0;

    do
    {
        system("cls");

        cout << "\n\n\t\t\tMENU CERRAJERIA" << endl;
        cout << "\t\t\t------------------------" << endl;
        cout << "\n\t1. Cerrojos" << endl;
        cout << "\t2. Cerraduras" << endl;
        cout << "\t3. Llaves" << endl;
        cout << "\t0. REGRESAR" << endl;

        cout << "\n\tIngrese una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case (1):
            cerrojitito = Duenio::consrandom(2, 0); //usar un random para el enum de cerrojos.
            cerro.get_Cerroj() == cerrojitito;
            break;

        case (2):
            cerradurita = Duenio::consrandom(4, 0); //usar un random para el enum de cerraduras.
            cerra.get_Cerrad() == cerradurita;
            break;

        case (3):
            llavecitita = Duenio::consrandom(3, 0); //usar un random para el enum de llaves.
            llav.get_LLavecita() == llavecitita;
            break;

        case (0):
            regresar = false;
            break;

        }
    } while (regresar);
}

void Duenio::Imprimir_Menu_Electricidad(Cables cab, Lamparas lamp, Enchufes enchu, Portalamparas port)
{
    int opcion = 0;
    bool regresar = true;

    int cablecito = 0, lamparitita = 0, enchufecitito = 0, portalamparitita = 0;

    do
    {
        system("cls");

        cout << "\n\n\t\t\tMENU ELECTRICIDAD" << endl;
        cout << "\t\t\t------------------------" << endl;
        cout << "\n\t1. Cables" << endl;
        cout << "\t2. Lamparas" << endl;
        cout << "\t3. Enchufes" << endl;
        cout << "\t4. Portalamparas" << endl;
        cout << "\t0. REGRESAR" << endl;

        cout << "\n\tIngrese una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case (1):
            cablecito = Duenio::consrandom(3, 0); //usar un random para el enum de cables.
            cab.get_Conductores() == cablecito;
            break;

        case (2):
            lamparitita = Duenio::consrandom(3, 0); //usar un random para el enum de lamparas.
            lamp.get_Lamp() == lamparitita;
            break;

        case (3):
            enchufecitito = Duenio::consrandom(3, 0); //usar un random para el enum de enchufes.
            enchu.get_Enchu() == enchufecitito;
            break;

        case (4):
            portalamparitita = Duenio::consrandom(3, 0); //usar un random para el enum de portalamparas.
            port.get_PortaLamp() == portalamparitita;
            break;

        case (0):
            regresar = false;
            break;

        }
    } while (regresar);
}

void Duenio::Imprimir_Menu_Cocina(Ollas oll, Utencillos ute)
{
    int opcion = 0;
    bool regresar = true;
    int ollitita = 0, utencillitito = 0;

    do
    {
        system("cls");

        cout << "\n\n\t\t\tMENU COCINA" << endl;
        cout << "\t\t\t------------------------" << endl;
        cout << "\n\t1. Ollas" << endl;
        cout << "\t2. Utencillos" << endl;
        cout << "\t0. REGRESAR" << endl;

        cout << "\n\tIngrese una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case (1):
            ollitita = Duenio::consrandom(1, 0); //usar un random para el enum de ollas.
            oll.get_Ollita() == ollitita;
            break;

        case (2):
            utencillitito = Duenio::consrandom(2, 0); //usar un random para el enum de utencillos.
            ute.get_Uten() == utencillitito;
            break;

        case (0):
            regresar = false;
            break;

        }
    } while (regresar);
}

void Duenio::Imprimir_Menu_Bazar(TendederosRopa tendrop, TablasPlanchar tabpla, TapasInodoro tapin)
{
    int opcion = 0;
    bool regresar = true;

    int tendedorropita = 0, tablitaplanchar = 0, tapitainodoro = 0;

    do
    {
        system("cls");

        cout << "\n\n\t\t\tMENU BAZAR" << endl;
        cout << "\t\t\t------------------------" << endl;
        cout << "\n\t1. Tapas de Inodoro" << endl;
        cout << "\t2. Tablas de Planchar" << endl;
        cout << "\t3. Tendederos de Ropa" << endl;
        cout << "\t0. REGRESAR" << endl;

        cout << "\n\tIngrese una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case (1):
            tapitainodoro = Duenio::consrandom(2, 0); //usar un random para el enum de tapas de inodoro.
            tapin.get_Inodorito() == tapitainodoro;
            break;

        case (2):
            tablitaplanchar = Duenio::consrandom(3, 0); //usar un random para el enum de tablas de planchar.
            tabpla.get_Planchita() == tablitaplanchar;
            break;

        case (3):
            tendedorropita = Duenio::consrandom(2, 0); //usar un random para el enum de tendederos de ropa.
            tendrop.get_Tendederito() == tendedorropita;
            break;

        case (0):
            regresar = false;
            break;

        }
    } while (regresar);
}

void Duenio::Imprimir_Menu_Banio(BarralesCortina barr, EscobillasBanio esco)
{
    int opcion = 0;
    bool regresar = true;

    int barralincort = 0, escobillinban = 0;

    do
    {
        system("cls");

        cout << "\n\n\t\t\tMENU BANIO" << endl;
        cout << "\t\t\t------------------------" << endl;
        cout << "\n\t1. Escobillas de Banio" << endl;
        cout << "\t2. Barrales de Cortina" << endl;
        cout << "\t0. REGRESAR" << endl;

        cout << "\n\tIngrese una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case (1):
            escobillinban = Duenio::consrandom(1, 0); //usar un random para el enum de escobillas de banio.
            esco.get_EscobillinBanio() == escobillinban;
            break;

        case (2):
            barralincort = Duenio::consrandom(1, 0); //usar un random para el enum de barrales de cortina.
            barr.get_Barralito() == barralincort;
            break;

        case (0):
            regresar = false;
            break;

        }
    } while (regresar);
}