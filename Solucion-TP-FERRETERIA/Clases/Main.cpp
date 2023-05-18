#include <iostream>
#include <string>
#include <list>
#include <algorithm>
#include <iterator>

#include "Cliente.h"
#include "Articulo.h"
#include "Ferreteria.h"
#include "Despachante.h"
#include "Cerrajero.h"

using namespace std;

int main() 
{
	bool CHANGE = false;
	
	Ferreteria ferr ("Jaimito", "Tucasa", "12344", "AJAJAJ@.COM", Efectivo);
	Duenio due ("62739", "MaterClas", "Rodrigo", Maculino, true);
	Despachante despi ("123456", "Jaimito", "Perez", Maculino, 67, "Auto", 40, "pedido");
	Cerrajero cerraj ("123456", "Juanito", "Perez", Maculino, 67, "Auto", 40, "alarma");

	Tornillos tornito (3, true, "Perfecto", "tornillo", 2.03, 0.65, 0.80, 30, "Metal", "Cabezita", "Rosca", "Madera", Lateral);	

	time_t tiempito;
	time(&tiempito);
	Horario horacio = Horario(tiempito);

	int i = 0;

	list <Articulo> Articulos;
	list <HerramientasAlquiler> Amoladorcita;

	Articulo art1(5, true, "Perfecto","clavos", 2.05, 3.04, 4.01, 0);
	Articulo art2(15, true, "Perfecto", "taruchas", 2.05, 3.04, 4.01, 57);
	Articulo art3 (10, true, "Perfecto", "mechas", 2.05, 3.04, 4.01, 4);

	Articulos.push_back(art1);
	Articulos.push_back(art2);
	Articulos.push_back(art3);

	HerramientasAlquiler herralq1(Amoladoras, "Casio", "Perfecta", 490, 57, 0);
	HerramientasAlquiler herralq2(Lijadoras, "Casio", "Medio", 490, 217, 3);
	HerramientasAlquiler herralq3(Perforadoras, "Casio", "Perfecta", 490, 567, 5);

	Amoladorcita.push_back(herralq1);
	Amoladorcita.push_back(herralq2);
	Amoladorcita.push_back(herralq3);

	Cliente Javier ("45545166", "Javier", "Peña", Otro, Foto, "Manuel Ugarte 5500", Efectivo, Articulos, true, Amoladorcita, true, true, CHANGE);

	Articulo art (345, true, "Perfecto", "tornillos", 2.05, 3.04, 4.01, 98);

	LLaves llave (3, true, "Perfecto", "llave", 2.05, 3.04, 4.01, 98, "metal", LLavesMagneticas, true);

	string abierto = ferr.abrir(horacio) ? "Abierta" : "Cerrada"; //Uso el operador ternario para que me diga si esta Abierto o Cerrada

	string identif_art = due.identificar_art(Javier, art) ? "Trajo una Foto o un Articulo Roto." : "No trajo ni una Foto ni un Articulo Roto."; //Uso el operador ternario para que me devulva de forma string en vez de un bool

	string envia_Art = despi.enviar_articulo(art, Javier) ? "El cliente quiere un envio a su domicilio." : "El cliente no quiere un pedido a domicilio."; //Uso el operador ternario para que me devulva de forma string en vez de un bool

	cout << envia_Art << endl;

	string DupiLLavecita = cerraj.DuplicarLlaves(llave, Javier) ? "El cliente quiere duplicar una llave" : "El cliente no quiere duplicar ninguna llave o no tengo el permiso para duplicar la llave."; //Uso el operador ternario para que me devulva de forma string en vez de un bool

	int opcion = 0;
	bool salir = true;
	
	do
	{
		system("cls");

		cout << "\n\n\t\t\tMENU PRINCIPAL" << endl;
		cout << "\t\t\t--------------" << endl;
		cout << "\t1. Funcion Abrir_Ferreteria()" << endl;
		cout << "\t2. Funcion Generar_Presupuesto()" << endl;
		cout << "\t3. Funcion IdentificarFoto_ArticuloRoto()" << endl;
		cout << "\t4. Funcion Cambio_Articulo()" << endl;
		cout << "\t5. Funcion Enviar_Articulo_Domicilio()" << endl;
		cout << "\t6. Funcion Duplicar_Llave()" << endl;
		cout << "\t7. FuncionStatic Cantidad_Articulos_Totales()" << endl;
		cout << "\t0. SALIR" << endl;

		cout << "\tIngrese una Opcion: ";
		cin >> opcion;

		switch (opcion)
		{
		case(1):
			cout << "La ferreteria esta: " << abierto << endl;
			salir = false;
			break;
			
		case(2):
			cout << "Amoladoras = 0, Lijadoras = 1, Perforadoras = 2" << endl;
			cout << "El precio total es: " << ferr.generar_Presupuesto(Javier) << endl;
			salir = false;
			break;

		case(3):
			cout << identif_art << endl;
			if (Javier.get_fotinartin() == Foto || Javier.get_fotinartin() == ArtRoto )
			{
				cout << "Alto: " << art.get_Alto() << endl;
				cout << "Ancho: " << art.get_Ancho() << endl;
				cout << "Largo: " << art.get_Largo() << endl;
			}
			salir = false;
			break;

		case(4):
			//due.imprimir_MenuPrincipal();
			cout << "Va a tener que pagar por el cambio: " << due.CambioArticulo(art, Javier) << endl;
			salir = false;
			break;

		case(5):
			cout << envia_Art << endl;
			if (Javier.get_EnvioDomicilio() == true)
			{
				cout << "Se envia el articulo " << art.get_TipoProducto() << " hacia " << Javier.get_Direccion() << endl;
			}
			salir = false;
			break;

		case(6):
			cout << DupiLLavecita << endl;
			if (Javier.get_Dupllaves() == true && llave.get_PermisoEdificio() == true)
			{
				cout << "Duplico una llave: " << llave.get_LLavecita() << " del edificio: " << Javier.get_Direccion() << endl;

			}
			salir = false;
			break;

		case(7):
			cout << "Cantidad de Articulos Totales: " << Articulo::get_CantidadMaximaArticulos() << endl;
			salir = false;
			break;

		case(0):
			cout << "Por que apreto la opcion de SALIR?:/" << endl;
			salir = false;
			break;
		}
	} while (salir);

	try 
	{
		Javier.elegir_art(art);
	}

	catch(int stock)
	{
		cout << "Se encontro un error" << endl;
	}

	return 0;
}