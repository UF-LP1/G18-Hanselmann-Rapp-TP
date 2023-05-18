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

    if (cli.get_Foto() == "Foto" || cli.get_ArtRoto() == "ArtRoto") 
    {
        cout << "Alto: " << art.get_Alto() << endl;
        cout << "Ancho: " << art.get_Ancho() << endl;
        cout << "Largo: " << art.get_Largo() << endl;
        return true;
    }
    else 
    {
        cout << "No trajo foto ni articulo roto" << endl;

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
        if (cli.get_DeseaCambiarArt() == true)
        {
            if (itArt->get_Cambio() == true)
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
    }
}

int Duenio::consrandom(int maximo, int minimo)
{
    srand(time(NULL));
    int valor = rand() % (maximo - minimo) + minimo;
    return valor;
}

void Duenio::imprimir_MenuPrincipal()
{
   int opcion = 0;
   bool salir = true;

    do
    {
        system("cls");

        cout << "\n\n\t\t\tMENU PRINCIPAL" << endl;
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
                Imprimir_Menu_ArtFerreteria();
                break;

            case(2):
                Imprimir_Menu_Cerrajeria();
                break;

            case(3):
                Imprimir_Menu_Electricidad();
                break;

            case(4):
                Imprimir_Menu_Cocina();
                break;

            case(5):
                Imprimir_Menu_Bazar();
                break;

            case(6):
                Imprimir_Menu_Banio();
                break; 

            case(0):
                salir = false;
                break;
        }
    } while (salir);

    system("cls");
}

void Duenio::Imprimir_Menu_ArtFerreteria()
{
    int opcion = 0;
    bool regresar = true;
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
            Tornillin = Duenio::consrandom(2, 0); //me va a decir que tipo de tornillo es
            break;

        case (2):
            clavitito = Duenio::consrandom(2, 0); //usar un random para el enum de clavos.
            break;

        case (3):
            herramientita = Duenio::consrandom(3, 0); //usar un random para el enum de herramientas.
            break;

        case (4):
            taruguillo = Duenio::consrandom(3, 0); //usar un random para el enum de tarugos.
            break;

        case (5):
            mechitita = Duenio::consrandom(2, 0);//usar un random para el enum de mechas.
            break;

        case(0):
            regresar = false;
            break;

        }
    } while (regresar);
}

void Duenio::Imprimir_Menu_Cerrajeria()
{
    int opcion = 0;
    bool regresar = true;

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
            //usar un random para el enum de cerrojos.
            break;

        case (2):
            //usar un random para el enum de cerraduras.
            break;

        case (3):
            //usar un random para el enum de llaves.
            break;

        case (0):
            regresar = false;
            break;

        }
    } while (regresar);
}

void Duenio::Imprimir_Menu_Electricidad()
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
            //usar un random para el enum de cables.
            break;

        case (2):
            //usar un random para el enum de lamparas.
            break;

        case (3):
            //usar un random para el enum de enchufes.
            break;

        case (4):
            //usar un random para el enum de portalamparas.
            break;

        case (0):
            regresar = false;
            break;

        }
    } while (regresar);
}

void Duenio::Imprimir_Menu_Cocina()
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
            //usar un random para el enum de ollas.
            break;

        case (2):
            //usar un random para el enum de utencillos.
            break;

        case (0):
            regresar = false;
            break;

        }
    } while (regresar);
}

void Duenio::Imprimir_Menu_Bazar()
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
            //usar un random para el enum de tapas de inodoro.
            break;

        case (2):
            //usar un random para el enum de tablas de planchar.
            break;

        case (3):
            //usar un random para el enum de tendederos de ropa.
            break;

        case (0):
            regresar = false;
            break;

        }
    } while (regresar);
}

void Duenio::Imprimir_Menu_Banio()
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
            //usar un random para el enum de escobillas de banio.
            break;

        case (2):
            //usar un random para el enum de barrales de cortina.
            break;

        case (0):
            regresar = false;
            break;

        }
    } while (regresar);
}