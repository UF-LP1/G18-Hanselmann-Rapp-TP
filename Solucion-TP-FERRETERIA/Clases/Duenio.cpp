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

    if (cli.get_fotinartin() == ArtRoto || cli.get_fotinartin() == Foto)
    {
        return true;
    }
    if (cli.get_fotinartin() == 2)
    {
        return false;
    }
    else
        return false;
}

int Duenio::CambioArticulo(Articulo art, Cliente cli, Articulo cambi) //Revisamos si los Articulos tienen cambio o no según los criterios dados
//tendria que pasarle como parametro un segundo articulo que es el que desea cambiar el cliente.
{
    int precio = 0, precio2 = 0;

     if (cli.get_EnvoltorioIntacto() == true)
         {
              if (cambi.get_Precio() < art.get_Precio())
              {
                   precio = art.get_Precio() - cambi.get_Precio();

                   return precio;
              }
              if (cambi.get_Precio() > art.get_Precio())
              {
                   precio2 = art.get_Precio() - cambi.get_Precio();

                   return precio2;
              }
              if (cambi.get_Precio() == art.get_Precio())
              {
                   return 0;
              }
     }
     else
     {
         cout << "No hay Cambio o el Envoltorio no esta Intacto." << endl;
     }
}

void Duenio::imprimir_MenuCambioArticulo(Articulo art2, Cliente cli, Tornillos torni, Clavos clavi, Herramientas herri, Tarugos tar, Mechas mech, Cerrojos cerro, Cerraduras cerra, LLaves llav, Cables cab, Lamparas lamp, Enchufes enchu, Portalamparas port, Ollas oll, Utencillos ute, TendederosRopa tendrop, TablasPlanchar tabpla, TapasInodoro tapin, BarralesCortina barr, EscobillasBanio esco)
{
   int opcion = 0;
   bool salir = true;

   system("cls");
   
    do
    {
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
                Imprimir_Menu_ArtFerreteria(art2, cli, torni, clavi, herri, tar, mech);
                break;

            case(2):
                Imprimir_Menu_Cerrajeria(art2, cli, cerro, cerra, llav);
                break;

            case(3):
                Imprimir_Menu_Electricidad(art2, cli, cab, lamp, enchu, port);
                break;

            case(4):
                Imprimir_Menu_Cocina(art2, cli, oll, ute);
                break;

            case(5):
                Imprimir_Menu_Bazar(art2, cli, tendrop, tabpla, tapin);
                break;

            case(6):
                Imprimir_Menu_Banio(art2, cli, barr, esco);
                break; 

            case(0):
                system("cls");
                salir = false;
                cli.Menu_Principal();
                break;
        }

    } while (salir);
}

void Duenio::Imprimir_Menu_ArtFerreteria(Articulo art2, Cliente cli, Tornillos torni, Clavos clavi, Herramientas herri, Tarugos tar, Mechas mech)
{
    int opcion = 0;
    bool regresar = true, salir = true;
    int tornillito = 0, clavito = 0, herramientita = 0, tarugo = 0, mecha = 0;

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

    do
    {
        cin >> opcion;

        switch (opcion)
        {
        case (1):
            if (torni.get_Cambio() == true)
            {
               tornillito = Duenio::CambioArticulo(torni, cli, art2);
               if (tornillito > 0)
               {
                   cout << "Va a tener que pagar por el cambio: " << tornillito << endl;
               }
               else if (tornillito < 0)
               {
                   cout << "La Ferreteria le va a tener que devolver por el cambio: " << tornillito*-1 << endl;
               }
               else if (tornillito == 0)
               {
                   cout << "No hay diferencia de precio." << endl;
               }
            }   
            break;

        case (2):
            if (clavi.get_Cambio() == true)
            {
                clavito = Duenio::CambioArticulo(clavi, cli, art2);
                if (clavito > 0)
                {
                    cout << "Va a tener que pagar por el cambio: " << clavito << endl;
                }
                else if (clavito < 0)
                {
                    cout << "La Ferreteria le va a tener que devolver por el cambio: " << clavito * -1 << endl;
                }
                else if (clavito == 0)
                {
                    cout << "No hay diferencia de precio." << endl;
                }
            }
            break;

        case (3):
            if (herri.get_Cambio() == true)
            {
                herramientita = Duenio::CambioArticulo(herri, cli, art2);
                if (herramientita > 0)
                {
                    cout << "Va a tener que pagar por el cambio: " << herramientita << endl;
                }
                else if (herramientita < 0)
                {
                    cout << "La Ferreteria le va a tener que devolver por el cambio: " << herramientita * -1 << endl;
                }
                else if (herramientita == 0)
                {
                    cout << "No hay diferencia de precio." << endl;
                }
            }
            break;

        case (4):
            if (tar.get_Cambio() == true)
            {
                tarugo = Duenio::CambioArticulo(tar, cli, art2);
                if (tarugo > 0)
                {
                    cout << "Va a tener que pagar por el cambio: " << tarugo << endl;
                }
                else if (tarugo < 0)
                {
                    cout << "La Ferreteria le va a tener que devolver por el cambio: " << tarugo * -1 << endl;
                }
                else if (tarugo == 0)
                {
                    cout << "No hay diferencia de precio." << endl;
                }
            }
            break;

        case (5):
            if (mech.get_Cambio() == true)
            {
                mecha = Duenio::CambioArticulo(mech, cli, art2);
                if (mecha > 0)
                {
                    cout << "Va a tener que pagar por el cambio: " << mecha << endl;
                }
                else if (mecha < 0)
                {
                    cout << "La Ferreteria le va a tener que devolver por el cambio: " << mecha * -1 << endl;
                }
                else if (mecha == 0)
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

    system("cls");
}

void Duenio::Imprimir_Menu_Cerrajeria(Articulo art2, Cliente cli, Cerrojos cerro, Cerraduras cerra, LLaves llav)
{
    int opcion = 0;
    bool regresar = true;
    int cerrojito = 0, cerrajedurita = 0, llavecita = 0;

    system("cls");

    cout << "\n\n\t\t\tMENU CERRAJERIA" << endl;
    cout << "\t\t\t------------------------" << endl;
    cout << "\n\t1. Cerrojos" << endl;
    cout << "\t2. Cerraduras" << endl;
    cout << "\t3. Llaves" << endl;
    cout << "\t0. REGRESAR" << endl;

    cout << "\n\tIngrese una opcion: ";

    do
    {
        cin >> opcion;

        switch (opcion)
        {
        case (1):
            if (cerro.get_Cambio() == true)
            {
                cerrojito = Duenio::CambioArticulo(cerro, cli, art2);
                if (cerrojito > 0)
                {
                    cout << "Va a tener que pagar por el cambio: " << cerrojito << endl;
                }
                else if (cerrojito < 0)
                {
                    cout << "La Ferreteria le va a tener que devolver por el cambio: " << cerrojito * -1 << endl;
                }
                else if (cerrojito == 0)
                {
                    cout << "No hay diferencia de precio." << endl;
                }
            }
            break;

        case (2):
            if (cerra.get_Cambio() == true)
            {
                cerrajedurita = Duenio::CambioArticulo(cerra, cli, art2);
                if (cerrajedurita > 0)
                {
                    cout << "Va a tener que pagar por el cambio: " << cerrajedurita << endl;
                }
                else if (cerrajedurita < 0)
                {
                    cout << "La Ferreteria le va a tener que devolver por el cambio: " << cerrajedurita * -1 << endl;
                }
                else if (cerrajedurita == 0)
                {
                    cout << "No hay diferencia de precio." << endl;
                }
            }
            break;

        case (3):
            if (llav.get_Cambio() == true)
            {
                llavecita = Duenio::CambioArticulo(llav, cli, art2);
                if (llavecita > 0)
                {
                    cout << "Va a tener que pagar por el cambio: " << llavecita << endl;
                }
                else if (llavecita < 0)
                {
                    cout << "La Ferreteria le va a tener que devolver por el cambio: " << llavecita * -1 << endl;
                }
                else if (llavecita == 0)
                {
                    cout << "No hay diferencia de precio." << endl;
                }
            }
            break;

        case (0):
            regresar = false;
            break;

        }
    } while (regresar);

    system("cls");

}

void Duenio::Imprimir_Menu_Electricidad(Articulo art2, Cliente cli, Cables cab, Lamparas lamp, Enchufes enchu, Portalamparas port)
{
    int opcion = 0;
    bool regresar = true;

    int cablecito = 0, lamparita = 0, enchufecito = 0, portalamparita = 0;

    system("cls");

    cout << "\n\n\t\t\tMENU ELECTRICIDAD" << endl;
    cout << "\t\t\t------------------------" << endl;
    cout << "\n\t1. Cables" << endl;
    cout << "\t2. Lamparas" << endl;
    cout << "\t3. Enchufes" << endl;
    cout << "\t4. Portalamparas" << endl;
    cout << "\t0. REGRESAR" << endl;

    cout << "\n\tIngrese una opcion: ";

    do
    {
        cin >> opcion;

        switch (opcion)
        {
        case (1):
            if (cab.get_Cambio() == true)
            {
                cablecito = Duenio::CambioArticulo(cab, cli, art2);
                if (cablecito > 0)
                {
                    cout << "Va a tener que pagar por el cambio: " << cablecito << endl;
                }
                else if (cablecito < 0)
                {
                    cout << "La Ferreteria le va a tener que devolver por el cambio: " << cablecito * -1 << endl;
                }
                else if (cablecito == 0)
                {
                    cout << "No hay diferencia de precio." << endl;
                }
            }
            break;

        case (2):
            if (lamp.get_Cambio() == true)
            {
                lamparita = Duenio::CambioArticulo(lamp, cli, art2);
                if (lamparita > 0)
                {
                    cout << "Va a tener que pagar por el cambio: " << lamparita << endl;
                }
                else if (lamparita < 0)
                {
                    cout << "La Ferreteria le va a tener que devolver por el cambio: " << lamparita * -1 << endl;
                }
                else if (lamparita == 0)
                {
                    cout << "No hay diferencia de precio." << endl;
                }
            }
            break;

        case (3):
            if (enchu.get_Cambio() == true)
            {
                enchufecito = Duenio::CambioArticulo(enchu, cli, art2);
                if (enchufecito > 0)
                {
                    cout << "Va a tener que pagar por el cambio: " << enchufecito << endl;
                }
                else if (enchufecito < 0)
                {
                    cout << "La Ferreteria le va a tener que devolver por el cambio: " << enchufecito * -1 << endl;
                }
                else if (enchufecito == 0)
                {
                    cout << "No hay diferencia de precio." << endl;
                }
            }
            break;

        case (4):
            if (port.get_Cambio() == true)
            {
                portalamparita = Duenio::CambioArticulo(port, cli, art2);
                if (portalamparita > 0)
                {
                    cout << "Va a tener que pagar por el cambio: " << portalamparita << endl;
                }
                else if (portalamparita < 0)
                {
                    cout << "La Ferreteria le va a tener que devolver por el cambio: " << portalamparita * -1 << endl;
                }
                else if (portalamparita == 0)
                {
                    cout << "No hay diferencia de precio." << endl;
                }
            }
            break;

        case (0):
            regresar = false;
            break;

        }
    } while (regresar);

    system("cls");

}

void Duenio::Imprimir_Menu_Cocina(Articulo art2, Cliente cli, Ollas oll, Utencillos ute)
{
    int opcion = 0;
    bool regresar = true;

    int ollitas = 0, utencillito = 0;
   
    system("cls");

    cout << "\n\n\t\t\tMENU COCINA" << endl;
    cout << "\t\t\t------------------------" << endl;
    cout << "\n\t1. Ollas" << endl;
    cout << "\t2. Utencillos" << endl;
    cout << "\t0. REGRESAR" << endl;

    cout << "\n\tIngrese una opcion: ";

    do
    {
        cin >> opcion;

        switch (opcion)
        {
        case (1):
            if (oll.get_Cambio() == true)
            {
                ollitas = Duenio::CambioArticulo(oll, cli, art2);
                if (ollitas > 0)
                {
                    cout << "Va a tener que pagar por el cambio: " << ollitas << endl;
                }
                else if (ollitas < 0)
                {
                    cout << "La Ferreteria le va a tener que devolver por el cambio: " << ollitas * -1 << endl;
                }
                else if (ollitas == 0)
                {
                    cout << "No hay diferencia de precio." << endl;
                }
            }
            break;

        case (2):
            if (ute.get_Cambio() == true)
            {
                utencillito = Duenio::CambioArticulo(ute, cli, art2);
                if (utencillito > 0)
                {
                    cout << "Va a tener que pagar por el cambio: " << utencillito << endl;
                }
                else if (utencillito < 0)
                {
                    cout << "La Ferreteria le va a tener que devolver por el cambio: " << utencillito * -1 << endl;
                }
                else if (utencillito == 0)
                {
                    cout << "No hay diferencia de precio." << endl;
                }
            }
            break;

        case (0):
            regresar = false;
            break;

        }
    } while (regresar);

    system("cls");

}

void Duenio::Imprimir_Menu_Bazar(Articulo art2, Cliente cli, TendederosRopa tendrop, TablasPlanchar tabpla, TapasInodoro tapin)
{
    int opcion = 0;
    bool regresar = true;

    int tendederito = 0, tablita = 0, tapita = 0;

    system("cls");

    cout << "\n\n\t\t\tMENU BAZAR" << endl;
    cout << "\t\t\t------------------------" << endl;
    cout << "\n\t1. Tapas de Inodoro" << endl;
    cout << "\t2. Tablas de Planchar" << endl;
    cout << "\t3. Tendederos de Ropa" << endl;
    cout << "\t0. REGRESAR" << endl;

    cout << "\n\tIngrese una opcion: ";

    do
    {
        cin >> opcion;

        switch (opcion)
        {
        case (1):
            if (tapin.get_Cambio() == true)
            {
               tapita = Duenio::CambioArticulo(tapin, cli, art2);
                if (tapita > 0)
                {
                    cout << "Va a tener que pagar por el cambio: " << tapita << endl;
                }
                else if (tapita < 0)
                {
                    cout << "La Ferreteria le va a tener que devolver por el cambio: " << tapita * -1 << endl;
                }
                else if (tapita == 0)
                {
                    cout << "No hay diferencia de precio." << endl;
                }
            }
            break;

        case (2):
            if (tabpla.get_Cambio() == true)
            {
                tablita = Duenio::CambioArticulo(tabpla, cli, art2);
                if (tablita > 0)
                {
                    cout << "Va a tener que pagar por el cambio: " << tablita << endl;
                }
                else if (tablita < 0)
                {
                    cout << "La Ferreteria le va a tener que devolver por el cambio: " << tablita * -1 << endl;
                }
                else if (tablita == 0)
                {
                    cout << "No hay diferencia de precio." << endl;
                }
            }
            break;

        case (3):
            if (tendrop.get_Cambio() == true)
            {
                tendederito = Duenio::CambioArticulo(tendrop, cli, art2);
                if (tendederito > 0)
                {
                    cout << "Va a tener que pagar por el cambio: " << tendederito << endl;
                }
                else if (tendederito < 0)
                {
                    cout << "La Ferreteria le va a tener que devolver por el cambio: " << tendederito * -1 << endl;
                }
                else if (tendederito == 0)
                {
                    cout << "No hay diferencia de precio." << endl;
                }
            }
            break;

        case (0):
            regresar = false;
            break;

        }
    } while (regresar);

    system("cls");

}

void Duenio::Imprimir_Menu_Banio(Articulo art2, Cliente cli, BarralesCortina barr, EscobillasBanio esco)
{
    int opcion = 0;
    bool regresar = true;

    int barralito = 0, escobillita = 0;

    system("cls");

    cout << "\n\n\t\t\tMENU BANIO" << endl;
    cout << "\t\t\t------------------------" << endl;
    cout << "\n\t1. Escobillas de Banio" << endl;
    cout << "\t2. Barrales de Cortina" << endl;
    cout << "\t0. REGRESAR" << endl;

    cout << "\n\tIngrese una opcion: ";

    do
    {
         cin >> opcion;

        switch (opcion)
        {
        case (1):
            if (esco.get_Cambio() == true)
            {
                escobillita = Duenio::CambioArticulo(esco, cli, art2);
                if (escobillita > 0)
                {
                    cout << "Va a tener que pagar por el cambio: " << escobillita << endl;
                }
                else if (escobillita < 0)
                {
                    cout << "La Ferreteria le va a tener que devolver por el cambio: " << escobillita * -1 << endl;
                }
                else if (escobillita == 0)
                {
                    cout << "No hay diferencia de precio." << endl;
                }
            }
            break;

        case (2):
            if (barr.get_Cambio() == true)
            {
                barralito = Duenio::CambioArticulo(barr, cli, art2);
                if (barralito > 0)
                {
                    cout << "Va a tener que pagar por el cambio: " << barralito << endl;
                }
                else if (barralito < 0)
                {
                    cout << "La Ferreteria le va a tener que devolver por el cambio: " << barralito * -1 << endl;
                }
                else if (barralito == 0)
                {
                    cout << "No hay diferencia de precio." << endl;
                }
            }
            break;

        case (0):
            regresar = false;
            break;

        }
    } while (regresar);

    system("cls");

}