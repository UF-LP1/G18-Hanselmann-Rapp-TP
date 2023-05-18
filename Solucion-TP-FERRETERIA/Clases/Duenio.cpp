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

int Duenio::consrandom(int maximo, int minimo) //habria que borrarla
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
                Imprimir_Menu_Cerrajeria(cli, cerro, cerra, llav);
                break;

            case(3):
                Imprimir_Menu_Electricidad(cli, cab, lamp, enchu, port);
                break;

            case(4):
                Imprimir_Menu_Cocina(cli, oll, ute);
                break;

            case(5):
                Imprimir_Menu_Bazar(cli, tendrop, tabpla, tapin);
                break;

            case(6):
                Imprimir_Menu_Banio(cli, barr, esco);
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
    int tornillito = 0, clavito = 0, herramientita = 0, tarugo = 0, mecha = 0;

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
               tornillito = Duenio::CambioArticulo(torni, cli);
               if (tornillito > 0)
               {
                   cout << "Va a tener que pagar por el cambio: " << tornillito << endl;
               }
               if (tornillito == 0)
               {
                   cout << "No hay diferencia de precio." << endl;
               }
            }   
            break;

        case (2):
            if (clavi.get_Cambio() == true)
            {
                clavito = Duenio::CambioArticulo(clavi, cli);
                if (clavito > 0)
                {
                    cout << "Va a tener que pagar por el cambio: " << clavito << endl;
                }
                if (clavito == 0)
                {
                    cout << "No hay diferencia de precio." << endl;
                }
            }
            break;

        case (3):
            if (herri.get_Cambio() == true)
            {
                herramientita = Duenio::CambioArticulo(herri, cli);
                if (herramientita > 0)
                {
                    cout << "Va a tener que pagar por el cambio: " << clavito << endl;
                }
                if (herramientita == 0)
                {
                    cout << "No hay diferencia de precio." << endl;
                }
            }
            break;

        case (4):
            if (tar.get_Cambio() == true)
            {
                tarugo = Duenio::CambioArticulo(tar, cli);
                if (tarugo > 0)
                {
                    cout << "Va a tener que pagar por el cambio: " << tarugo << endl;
                }
                if (tarugo == 0)
                {
                    cout << "No hay diferencia de precio." << endl;
                }
            }
            break;

        case (5):
            if (mech.get_Cambio() == true)
            {
                mecha = Duenio::CambioArticulo(mech, cli);
                if (mecha > 0)
                {
                    cout << "Va a tener que pagar por el cambio: " << mecha << endl;
                }
                if (mecha == 0)
                {
                    cout << "No hay diferencia de precio." << endl;
                }
            }
            break;

        case(0):
            regresar = false;
            break;

        }
    } while (regresar);
}

void Duenio::Imprimir_Menu_Cerrajeria(Cliente cli, Cerrojos cerro, Cerraduras cerra, LLaves llav)
{
    int opcion = 0;
    bool regresar = true;
    int cerrojito = 0, crrajdurita = 0, llavecita = 0;

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
            if (cerro.get_Cambio() == true)
            {
                Duenio::CambioArticulo(cerro, cli);
            }
            break;

        case (2):
            if (cerra.get_Cambio() == true)
            {
                Duenio::CambioArticulo(cerra, cli);
            }
            break;

        case (3):
            if (llav.get_Cambio() == true)
            {
                Duenio::CambioArticulo(llav, cli);
            }
            break;

        case (0):
            regresar = false;
            break;

        }
    } while (regresar);
}

void Duenio::Imprimir_Menu_Electricidad(Cliente cli, Cables cab, Lamparas lamp, Enchufes enchu, Portalamparas port)
{
    int opcion = 0;
    bool regresar = true;

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
            if (cab.get_Cambio() == true)
            {
                Duenio::CambioArticulo(cab, cli);
            }
            break;

        case (2):
            if (lamp.get_Cambio() == true)
            {
                Duenio::CambioArticulo(lamp, cli);
            }
            break;

        case (3):
            if (enchu.get_Cambio() == true)
            {
                Duenio::CambioArticulo(enchu, cli);
            }
            break;

        case (4):
            if (port.get_Cambio() == true)
            {
                Duenio::CambioArticulo(port, cli);
            }
            break;

        case (0):
            regresar = false;
            break;

        }
    } while (regresar);
}

void Duenio::Imprimir_Menu_Cocina(Cliente cli, Ollas oll, Utencillos ute)
{
    int opcion = 0;
    bool regresar = true;
   
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
            if (oll.get_Cambio() == true)
            {
                Duenio::CambioArticulo(oll, cli);
            }
            break;

        case (2):
            if (ute.get_Cambio() == true)
            {
                Duenio::CambioArticulo(ute, cli);
            }
            break;

        case (0):
            regresar = false;
            break;

        }
    } while (regresar);
}

void Duenio::Imprimir_Menu_Bazar(Cliente cli, TendederosRopa tendrop, TablasPlanchar tabpla, TapasInodoro tapin)
{
    int opcion = 0;
    bool regresar = true;

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
            if (tapin.get_Cambio() == true)
            {
                Duenio::CambioArticulo(tapin, cli);
            }
            break;

        case (2):
            if (tabpla.get_Cambio() == true)
            {
                Duenio::CambioArticulo(tabpla, cli);
            }
            break;

        case (3):
            if (tendrop.get_Cambio() == true)
            {
                Duenio::CambioArticulo(tendrop, cli);
            }
            break;

        case (0):
            regresar = false;
            break;

        }
    } while (regresar);
}

void Duenio::Imprimir_Menu_Banio(Cliente cli, BarralesCortina barr, EscobillasBanio esco)
{
    int opcion = 0;
    bool regresar = true;

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
            if (esco.get_Cambio() == true)
            {
                Duenio::CambioArticulo(esco, cli);
            }
            break;

        case (2):
            if (barr.get_Cambio() == true)
            {
                Duenio::CambioArticulo(barr, cli);
            }
            break;

        case (0):
            regresar = false;
            break;

        }
    } while (regresar);
}