#include "Cliente.h"

/**
 * Cliente implementation
 */

//&Articulos_

Cliente::Cliente(const string DNI_, string Nombre_, string Apellido_, TipoSexo Sexo_, TipoFotArt fotinartin_, string Direccion_, MetodoPago MetodoPagoCli_, list<Articulo> Articulos_, bool EnvoltorioIntaco_, list<HerramientasAlquiler> Herr_Alquiler_, bool EnvioDomicilio_, bool duplicadollave_, bool DeseaCambiarArt_) :Persona(DNI_, Nombre_, Apellido_, Sexo_)
{
    this->fotinartin = fotinartin_;
    this->Direccion = Direccion_;
    this->MetodoPagoCli = MetodoPagoCli_;
    this->Articulos = Articulos_;
    this->EnvoltorioIntacto = EnvoltorioIntaco_;
    this->Herr_Alquiler = Herr_Alquiler_;
    this->EnvioDomicilio = EnvioDomicilio_;
    this->duplicadollave = duplicadollave_;
    this->DeseaCambiarArt = DeseaCambiarArt_;
}

Cliente::~Cliente()
{

}


string Cliente::get_Nombre()
{
    return this->Nombre;
}

string Cliente::get_Direccion() 
{
    return this->Direccion;
}

MetodoPago Cliente::get_MetodoPagoCli() 
{
    return this->MetodoPagoCli;
}

list <Articulo> Cliente::get_Articulos()
{
    return this->Articulos;
}

TipoFotArt Cliente::get_fotinartin()
{
    return this->fotinartin;
}

bool Cliente::get_EnvoltorioIntacto() 
{
    return this->EnvoltorioIntacto;
}

list <HerramientasAlquiler> Cliente::get_Herr_Alquiler()
{
    return this->Herr_Alquiler;
}

bool Cliente::get_EnvioDomicilio()
{
    return this->EnvioDomicilio;
}

bool Cliente::get_Dupllaves()
{
    return this->duplicadollave;
}

bool Cliente::get_DeseaCambiarArt()
{
    return this->DeseaCambiarArt;
}

void Cliente::set_MetodoPagoCli(MetodoPago NuevoEstado) 
{
    this->MetodoPagoCli = NuevoEstado;
}

void Cliente::set_fotinartin(TipoFotArt NuevoEstado)
{
    this->fotinartin = NuevoEstado;
}

void Cliente::set_Direccion(string NuevoEstado)
{
    this->Direccion = NuevoEstado;
}

void Cliente::set_Articulos(list <Articulo> NuevoEstado)
{
    this->Articulos = NuevoEstado;
}

void Cliente::set_EnvoltorioIntacto(bool NuevoEstado)
{
    this->EnvoltorioIntacto = NuevoEstado;
}

void Cliente::set_Herr_Alquiler(list <HerramientasAlquiler> NuevoEstado)
{
    this->Herr_Alquiler = NuevoEstado;
}

void Cliente::set_EnvioDomicilio(bool NuevoEstado)
{
    this->EnvioDomicilio = NuevoEstado;
}

void Cliente::set_Dupllaves(bool NuevoEstado)
{
    this->duplicadollave = NuevoEstado;
} 

void Cliente::set_DeseaCambiarArt(bool NuevoEstado)
{
    this->DeseaCambiarArt = NuevoEstado;
}

int Cliente::elegir_art(Articulo& art)  //Agregar al carrito y probamos el Trycatch (Arreglarlo)
{
    list<Articulo>::iterator itArt;
 
    list<Articulo> arti = get_Articulos();
    try
    {
        itArt = arti.begin();
        int stock = 0, i = 0;
        stock = itArt->get_Cantidad();

        for (i = 0; i < arti.size(); i++, itArt++)
        {
            stock = itArt->get_Cantidad();
            if (stock <= 0)
            {
                throw stock;
            }
            else
            {
                this->Articulos.push_back(art);
                return itArt->get_Cantidad();
            }
        }
    }
    catch (int stock)
    {
        cout << "El articulo esta agotado." << endl;
        return -1;
    }
}

void Cliente::imprimir_MenuAgregar_Carrito(Tornillos torni, Clavos clavi, Herramientas herri, Tarugos tar, Mechas mech, Cerrojos cerro, Cerraduras cerra, LLaves llav, Cables cab, Lamparas lamp, Enchufes enchu, Portalamparas port, Ollas oll, Utencillos ute, TendederosRopa tendrop, TablasPlanchar tabpla, TapasInodoro tapin, BarralesCortina barr, EscobillasBanio esco)
{
    int opcion = 0;
    bool salir = true;

    system("cls");

    do
    {
        cout << "\n\n\t\t\tMENU AGREGAR CARRITO" << endl;
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

            Imprimir_Menu_ArtFerreteriaAgregarCarri(torni, clavi, herri, tar, mech);
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
            //Imprimir_Menu_Banio(barr, esco);

        case(0):
            system("cls");
            salir = false;
            //due.Menu_Principal();
            break;
        }

    } while (salir);
}

void Cliente::Imprimir_Menu_ArtFerreteriaAgregarCarri(Tornillos torni, Clavos clavi, Herramientas herri, Tarugos tar, Mechas mech)
{
    int opcion = 0, funciona = 0;

    bool regresar = true, salir = true;

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

            funciona = elegir_art(torni);
            if (funciona != 1)
            {
                cout << "Se agregaron los tornillos correctamente a su lista de Articulos." << endl;
            }
            else
            {
                cout << "No funciona." << endl;
            }
            break;

        case (2):
            funciona = elegir_art(clavi);
            if (funciona != 1)
            {
                cout << "Se agregaron los clavos correctamente a su lista de Articulos." << endl;
            }
            else
            {
                cout << "No funciona." << endl;
            }
            break;

        case (3):
            funciona = elegir_art(herri);
            if (funciona != 1)
            {
                cout << "Se agrego correctamente a su lista de Articulos." << endl;
            }
            else
            {
                cout << "No funciona." << endl;
            }
            break;

        case (4):
            funciona = elegir_art(tar);
            if (funciona != 1)
            {
                cout << "Se agrego correctamente a su lista de Articulos." << endl;
            }
            else
            {
                cout << "No funciona." << endl;
            }
            break;

        case (5):
            funciona = elegir_art(mech);
            if (funciona != 1)
            {
                cout << "Se agrego correctamente a su lista de Articulos." << endl;
            }
            else
            {
                cout << "No funciona." << endl;
            }
            break;

        case(0):
            regresar = false;
            break;

        }

    } while (regresar);

   system("cls");

}

void Cliente::Imprimir_Menu_Cerrajeria(Cerrojos cerro, Cerraduras cerra, LLaves llav)
{
    {
        int opcion = 0, funciona = 0;
        bool regresar = true;

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
                funciona = elegir_art(cerro);
                if (funciona != 1)
                {
                    cout << "Se agrego correctamente a su lista de Articulos." << endl;
                }
                else
                {
                    cout << "No funciona." << endl;
                }
                break;

            case (2):
                funciona = elegir_art(cerra);
                if (funciona != 1)
                {
                    cout << "Se agrego correctamente a su lista de Articulos." << endl;
                }
                else
                {
                    cout << "No funciona." << endl;
                }
                break;

            case (3):
                funciona = elegir_art(llav);
                if (funciona != 1)
                {
                    cout << "Se agrego correctamente a su lista de Articulos." << endl;
                }
                else
                {
                    cout << "No funciona." << endl;
                }
                break;

            case (0):
                regresar = false;
                break;

            }
        } while (regresar);

        system("cls");

    }
}

void Cliente::Imprimir_Menu_Electricidad(Cables cab, Lamparas lamp, Enchufes enchu, Portalamparas port)
{
    int opcion = 0, funciona = 0;
    bool regresar = true;

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
            funciona = elegir_art(cab);
            if (funciona != 1)
            {
                cout << "Se agrego correctamente a su lista de Articulos." << endl;
            }
            else
            {
                cout << "No funciona." << endl;
            }
            break;

        case (2):
            funciona = elegir_art(lamp);
            if (funciona != 1)
            {
                cout << "Se agrego correctamente a su lista de Articulos." << endl;
            }
            else
            {
                cout << "No funciona." << endl;
            }
            break;

        case (3):
            funciona = elegir_art(enchu);
            if (funciona != 1)
            {
                cout << "Se agrego correctamente a su lista de Articulos." << endl;
            }
            else
            {
                cout << "No funciona." << endl;
            }
            break;

        case (4):
            funciona = elegir_art(port);
            if (funciona != 1)
            {
                cout << "Se agrego correctamente a su lista de Articulos." << endl;
            }
            else
            {
                cout << "No funciona." << endl;
            }
            break;

        case (0):
            regresar = false;
            break;

        }
    } while (regresar);

    system("cls");
}

void Cliente::Imprimir_Menu_Cocina(Ollas oll, Utencillos ute)
{
    int opcion = 0, funciona = 0;
    bool regresar = true;

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
            funciona = elegir_art(oll);
            if (funciona != 1)
            {
                cout << "Se agrego correctamente a su lista de Articulos." << endl;
            }
            else
            {
                cout << "No funciona." << endl;
            }
            break;

        case (2):
            funciona = elegir_art(ute);
            if (funciona != 1)
            {
                cout << "Se agrego correctamente a su lista de Articulos." << endl;
            }
            else
            {
                cout << "No funciona." << endl;
            }
            break;

        case (0):
            regresar = false;
            break;

        }
    } while (regresar);

    system("cls");

}

void Cliente::Imprimir_Menu_Bazar(TendederosRopa tendrop, TablasPlanchar tabpla, TapasInodoro tapin)
{
    int opcion = 0, funciona = 0;
    bool regresar = true;

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
            funciona = elegir_art(tapin);
            if (funciona != 1)
            {
                cout << "Se agrego correctamente a su lista de Articulos." << endl;
            }
            else
            {
                cout << "No funciona." << endl;
            }
            break;

        case (2):
            funciona = elegir_art(tabpla);
            if (funciona != 1)
            {
                cout << "Se agrego correctamente a su lista de Articulos." << endl;
            }
            else
            {
                cout << "No funciona." << endl;
            }
            break;

        case (3):
            funciona = elegir_art(tendrop);
            if (funciona != 1)
            {
                cout << "Se agrego correctamente a su lista de Articulos." << endl;
            }
            else
            {
                cout << "No funciona." << endl;
            }
            break;

        case (0):
            regresar = false;
            break;

        }
    } while (regresar);

    system("cls");
}

void Cliente::Imprimir_Menu_Banio(BarralesCortina barr, EscobillasBanio esco)
{

}