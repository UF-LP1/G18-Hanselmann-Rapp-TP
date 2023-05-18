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

	Ferreteria ferr("Jaimito", "Tucasa", "12344", "AJAJAJ@.COM", Efectivo);
	Duenio due("62739", "MaterClas", "Rodrigo", Maculino, true);
	Despachante despi("123456", "Jaimito", "Perez", Maculino, 67, "Auto", 40, "pedido");
	Cerrajero cerraj("123456", "Juanito", "Perez", Maculino, 67, "Auto", 40, "alarma");

	//Artferreteria
	Tornillos screw(1, true, "Perfecto", "tornillo", 2.03, 0.65, 0.80, 10, "Metal", "Cabezita", "Rosca", "Madera", Lateral);
	Clavos nail (2, true, "Perfecto", "clavo", 2.03, 0.65, 0.80, 20, "Acero", Anillados, "Cabezita");
	Herramientas tool(3, true, "Perfecto", "martillo", 2.03, 0.65, 0.80, 30, "Madera", Martillos, "Casio");
	Tarugos dowel(4, true, "Perfecto", "tarugo", 2.03, 0.65, 0.80, 40, "Metal", Multiuso, "Acero");

	//Cerrajeria
	Mechas wick(5, true, "Perfecto", "mecha", 2.03, 0.65, 0.80, 50, "Acero", Helicoideal, "Madera");
	Cerrojos bolt(6, true, "Perfecto", "cerrojo", 2.03, 0.65, 0.80, 60, "Acero", Doble);
	Cerraduras lock(7, true, "Perfecto", "cerradura", 2.03, 0.65, 0.80, 70, "Metal", Cilindricas);
	LLaves key(8, true, "Perfecto", "llave", 2.03, 0.65, 0.80, 80, "metal", DobleTambor, true);

	//Electricidad
	Cables cord(9, true, "Perfecto", "cable", 2.03, 0.65, 0.80, 90, 25, 35, Flexible, "aislado", "cubierta");
	Lamparas lamp(10, true, "Perfecto", "lampara", 2.03, 0.65, 0.80, 100, 26, 36, Fluorescentes, "ondulado");
	Enchufes plug(11, true, "Perfecto", "enchufe", 2.03, 0.65, 0.80, 110, 27, 37, Europlug);
	Portalamparas lampholder(12, true, "Perfecto", "portalampara", 2.03, 0.65, 0.80, 120, 28, 38, Bayoneta);

	//Cocina
	Utencillos utensil(13, true, "Perfecto", "utencillo", 2.03, 0.65, 0.80, 130, true, Tenedor, "Plastico");
	Ollas pot(14, true, "Perfecto", "ollas", 2.03, 0.65, 0.80, 140, true, Programables, "Acero");

	//Bazar
	TendederosRopa cloth(15, true, "Perfecto", "tendedor", 2.03, 0.65, 0.80, 150, "Azul", Radiador, "Plastico");
	TablasPlanchar ironing(16, true, "Perfecto", "tablaplanchar", 2.03, 0.65, 0.80, 160, "Rojo", Pared, "Casio", "Metal");
	TapasInodoro toilet(17, true, "Perfecto", "tapasinodoro", 2.03, 0.65, 0.80, 170, "Amarillo", Rectangular, "Anclaje", "Rectangular");

	//Banio
	BarralesCortina barral(18, true, "Perfecto", "barralescortina", 2.03, 0.65, 0.80, 180, true, Curvos, "plastico", 15);
	EscobillasBanio escob(19, true, "Perfecto", "escobillasbanio", 2.03, 0.65, 0.80, 190, true, Cerdas, "patitos", "Casio", "plastico");

	time_t tiempito;
	time(&tiempito);
	Horario horacio = Horario(tiempito);

	int i = 0;

	list <Articulo> Articulos;
	list <HerramientasAlquiler> Amoladorcita;

	Articulo art1(5, true, "Perfecto", "clavos", 2.05, 3.04, 4.01, 0);
	Articulo art2(15, true, "Perfecto", "taruchas", 2.05, 3.04, 4.01, 57);
	Articulo art3(10, true, "Perfecto", "mechas", 2.05, 3.04, 4.01, 4);

	Articulos.push_back(art1);
	Articulos.push_back(art2);
	Articulos.push_back(art3);

	HerramientasAlquiler herralq1(Amoladoras, "Casio", "Perfecta", 490, 57, 0);
	HerramientasAlquiler herralq2(Lijadoras, "Casio", "Medio", 490, 217, 3);
	HerramientasAlquiler herralq3(Perforadoras, "Casio", "Perfecta", 490, 567, 5);

	Amoladorcita.push_back(herralq1);
	Amoladorcita.push_back(herralq2);
	Amoladorcita.push_back(herralq3);

	Cliente Javier("45545166", "Javier", "Peña", Otro, Foto, "Manuel Ugarte 5500", Efectivo, Articulos, true, Amoladorcita, true, true, CHANGE);

	Articulo art(345, true, "Perfecto", "tornillos", 2.05, 3.04, 4.01, 98);

	LLaves llave(3, true, "Perfecto", "llave", 2.05, 3.04, 4.01, 98, "metal", LLavesMagneticas, true);

	string abierto = ferr.abrir(horacio) ? "Abierta" : "Cerrada"; //Uso el operador ternario para que me diga si esta Abierto o Cerrada

	string identif_art = due.identificar_art(Javier, art) ? "Trajo una Foto o un Articulo Roto." : "No trajo ni una Foto ni un Articulo Roto."; //Uso el operador ternario para que me devulva de forma string en vez de un bool

	string envia_Art = despi.enviar_articulo(art, Javier) ? "El cliente quiere un envio a su domicilio." : "El cliente no quiere un pedido a domicilio."; //Uso el operador ternario para que me devulva de forma string en vez de un bool

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
		cout << "\t8. Funcion try-catch" << endl;
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
			if (Javier.get_fotinartin() == Foto || Javier.get_fotinartin() == ArtRoto)
			{
				cout << "Alto: " << art.get_Alto() << endl;
				cout << "Ancho: " << art.get_Ancho() << endl;
				cout << "Largo: " << art.get_Largo() << endl;
			}
			salir = false;
			break;

		case(4):
			due.imprimir_MenuPrincipal(Javier, screw, nail, tool, dowel, wick, bolt, lock, key, cord, lamp, plug, lampholder, pot, utensil, cloth, ironing, toilet, barral, escob);
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

		case(8):
			try
			{
				Javier.elegir_art(art);
			}

			catch (int stock)
			{
				cout << "No funciona el stock ya que nos ha dado un valor irreal" << endl;
			}
			salir = false;
			break;

		case(0):
			cout << "Por que apreto la opcion de SALIR?:/" << endl;
			salir = false;
			break;
		}
	} while (salir);

}