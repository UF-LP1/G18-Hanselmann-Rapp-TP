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
	Clavos nail(2, true, "Perfecto", "clavo", 2.03, 0.65, 0.80, 20, "Acero", Anillados, "Cabezita");
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
	//Articulo que quiero cambiar.
	Articulo cambio(2, true, "Perfecto", "cables", 2.05, 3.04, 4.01, 3);

	LLaves llave(3, true, "Perfecto", "llave", 2.05, 3.04, 4.01, 98, "metal", LLavesMagneticas, true);

	string abierto = ferr.abrir(horacio) ? "Abierta" : "Cerrada"; //Uso el operador ternario para que me diga si esta Abierto o Cerrada

	string envia_Art = despi.enviar_articulo(art, Javier) ? "El cliente quiere un envio a su domicilio." : "El cliente no quiere un pedido a domicilio."; //Uso el operador ternario para que me devulva de forma string en vez de un bool

	int opcion = 0, opcion2 = 0, opcion3 = 0;
	string altura_direcCli;
	string direcCli;
	bool regresar = true;
	bool spidey = false;
	bool salir = true;
	bool seguir = false;

	due.Menu_Principal();
	do
	{
		cout << "\tIngrese una Opcion del Menu Principal: ";
		cin >> opcion;

		switch (opcion)
		{
		case(1):
			cout << "La ferreteria esta: " << abierto << endl;
			break;

		case(2):
			cout << "Amoladoras = 0, Lijadoras = 1, Perforadoras = 2" << endl;
			cout << "El precio total es: " << ferr.generar_Presupuesto(Javier) << endl;
			break;

		case(3):
			system("cls");

			cout << "\n\n\t\t\tMENU FOTO / ARTICULO ROTO" << endl;
			cout << "\t\t\t--------------" << endl;
			cout << "\t1. Tengo una Foto del Articulo." << endl;
			cout << "\t2. Tengo un Articulo Roto." << endl;
			cout << "\t3. Ninguna de las anteriores." << endl;
			cout << "\t0. REGRESAR." << endl;

			do
			{
				cout << "\tIngrese una Opcion del Menu Foto/Articulo Roto: ";
				cin >> opcion2;

				switch (opcion2)
				{
				case (1):
					Javier.get_fotinartin() == 0;
					if (due.identificar_art(Javier, art) == true)
					{
						cout << "Trajo una Foto con las siguientes medidas: " << endl;

						cout << "Alto: " << art.get_Alto() << endl;
						cout << "Ancho: " << art.get_Ancho() << endl;
						cout << "Largo: " << art.get_Largo() << endl;
					}
					break;

				case (2):
					Javier.get_fotinartin() == 1;
					if (due.identificar_art(Javier, art) == true)
					{
						cout << "Trajo un Articulo Roto con las siguientes medidas: " << endl;

						cout << "Alto: " << art.get_Alto() << endl;
						cout << "Ancho: " << art.get_Ancho() << endl;
						cout << "Largo: " << art.get_Largo() << endl;
					}
					break;

				case (3):
					cout << "No trajo ni una Foto ni un Articulo Roto." << endl;
					Javier.get_fotinartin() == 2;
					break;

				case (0):
					system("cls");
					regresar = false;
					due.Menu_Principal();

					break;
				}
			} while (regresar);
			break;

		case(4):
			due.imprimir_MenuCambioArticulo(cambio, Javier, screw, nail, tool, dowel, wick, bolt, lock, key, cord, lamp, plug, lampholder, pot, utensil, cloth, ironing, toilet, barral, escob);
			break;

		case(5):
			cout << "Ingresar direccion a la que desea enviar el Articulo: ";
			getline(std::cin, direcCli);
			getline(std::cin, altura_direcCli);

			if (Javier.get_EnvioDomicilio() == true)
			{
				cout << "Se envia el articulo " << art.get_TipoProducto() << " hacia " << direcCli << " " << altura_direcCli << endl;
			}

			break;

		case(6):
			system("cls");

			cout << "\n\n\t\t\tMENU DUPLICAR LLAVE" << endl;
			cout << "\t\t\t--------------" << endl;
			cout << "\t1. Quiero duplicar una llave simple." << endl;
			cout << "\t2. Quiero duplicar una llave doble tambor." << endl;
			cout << "\t3. Quiero duplicar una llave codificada." << endl;
			cout << "\t4. Quiero duplicar una llave magneticas." << endl;
			cout << "\t0. REGRESAR." << endl;

			do
			{
				cout << "\tIngrese una Opcion del Menu Duplicar Llave: ";
				cin >> opcion3;

				switch (opcion3)
				{
				case (1):
					llave.get_LLavecita() == 0;
					cout << "El cliente quiere duplicar una llave" << endl;
					if (cerraj.DuplicarLlaves(llave, Javier) == true)
					{
						cout << "Duplico una llave simple del edificio: " << Javier.get_Direccion() << endl;
					}
					break;

				case (2):
					llave.get_LLavecita() == 1;
					cout << "El cliente quiere duplicar una llave" << endl;
					if (cerraj.DuplicarLlaves(llave, Javier) == true)
					{
						cout << "Duplico una llave doble tambor del edificio : " << Javier.get_Direccion() << endl;
					}
					break;

				case (3):
					llave.get_LLavecita() == 2;
					cout << "El cliente quiere duplicar una llave" << endl;
					if (cerraj.DuplicarLlaves(llave, Javier) == true)
					{
						cout << "Duplico una llave codificada del edificio : " << Javier.get_Direccion() << endl;
					}
					break;

				case (4):
					llave.get_LLavecita() == 3;
					cout << "El cliente quiere duplicar una llave" << endl;
					if (cerraj.DuplicarLlaves(llave, Javier) == true)
					{
						cout << "Duplico una llave magnetica del edificio : " << Javier.get_Direccion() << endl;
					}
					break;

				case (0):
					system("cls");
					regresar = false;
					due.Menu_Principal();

					break;
				}
			} while (regresar);

			break;

		case(7):
			cout << "Cantidad de Articulos Totales en la Ferreteria: " << Articulo::get_CantidadMaximaArticulos() << endl;
			break;

		case(8):
			Javier.imprimir_MenuAgregar_Carrito(screw, nail, tool, dowel, wick, bolt, lock, key, cord, lamp, plug, lampholder, pot, utensil, cloth, ironing, toilet, barral, escob);
			break;

		case(0):
			system("cls");

			cout << "Por que apreto la opcion de SALIR?:/" << endl;
			cout << "Bueno si vas a salir de la Ferreteria queres ver un Spiderman? (1 o 0)" << endl;
			cin >> spidey;
			if (spidey == true)
			{
				cout << "//         .-+=..       ." << endl <<
					"//          .=+*=-     .++.     " << endl <<
					"//        =:. .-+++=-::.+++:     " << endl <<
					"//      . :++*+*=+****#**#*#*====-=+=**++=+++=.         " << endl <<
					"//          .:---=+*#*+*+++++++*++*++*++++++++**=-.     " << endl <<
					"//                      ..--==**********++*+++*++++==:       " << endl <<
					"//                            .=#@%%%%@@%**+*++**+++++*+=:..      " << endl <<
					"//                                :+%%%%%-.-+#**+*+++++++**+=:.            " << endl <<
					"//                                 .#+**#:   .-+**+**++++++*++*+=:.              " << endl <<
					"//                                  :*++-        -=*++**+++***++***+=-:.               " << endl <<
					"//                                  :#**-           -=**+**+++**********+=:                 " << endl <<
					"//                                   :=+*=            .+#*++***+++***+******+=.                  " << endl <<
					"//                                  .   ..              :##******+******####**%%+.                     " << endl <<
					"//                                                        +%********+#%@@@@@%**%@#.                       " << endl <<
					"//                                                         .*#+*#*+*%%@@@@@@@%#*##%+                           " << endl <<
					"//                                                           .+##*+%%%#%%@@@@%%%#*+*+..                              " << endl <<
					"//                                                             .=#*%#%@@%%@@@%#%@@@%#*+=:                              " << endl <<
					"//                                                               .=%#*#%@%%%@@@#%%@@@%%*+++-:.                           " << endl <<
					"//                                                                  =##*#%#*#%%%#%@@@@@@#*+++**+-.                           " << endl <<
					"//                                                                    -**#%#**#%#%@@@@@@@%#++***#%*=.   .                      " << endl <<
					"//                                                                       :-+##***#@@@@@@@@#*++***%#%%+.                           " << endl <<
					"//                                                                           .#+%%#%@@@@@#++**+**+*#*%%=.                           " << endl <<
					"//                                                                            **#%%%@@@%**+++*++*#*##**###*.                                                           .                     " << endl <<
					"//                                                                            :%*#%@@@%**#*+***++****#%##%%%-                                                         .-====:.                " << endl <<
					"//                                                                             :%##%%@#+##*++++++**+++****###*+=:                                                    .#%**####+-               " << endl <<
					"//                                                                              :%%##%#+#*++**++++*+++******######+:   .                                           .=#*+*****####+=.           " << endl <<
					"//                                                                               .*@%##+#*++**++++**+++******#**##*#+.                                           .+#*++*############*+:        " << endl <<
					"//                                                                                 :#%**+++++*****#********#*##***#**%:                                         :#*+**###############*##=.     " << endl <<
					"//                                                                                  :%*+*+*******++++++++++++**#####*@#                                        :%++*###*##############**#%=    " << endl <<
					"//                                                                                 -#*+**+=+++++****##*#******#****##%@:                                      .%++*##################*#**#%+.  " << endl <<
					"//                                                                              .=***#*+=+****#####***#**************#%-.                                     #++*#################*####***#+  " << endl <<
					"//                                                       ....                 .=*++*#+=++**####********#**********#**#*#.                                    -#++*###############***********#- " << endl <<
					"//                                                      ++++*=              :=*++**%*=++*###**##*****#*##******#***%#*+*+                                    #+++#*##########****************%." << endl <<
					"//                                                     .*+***#-           .*#+***+*%*++**%#******#*****************#%%*+%.                                   @*+**##########****************+#-" << endl <<
					"//                                                     .+*****#          .#%+++*=+##++*##%#*##**#********#*++*+*+++%@@@##-                                   *%++*#*****###******************+*" << endl <<
					"//                                                      -***#*#:         -@*++**+**#++**%@%*#**##***#**********#*+*@@@%@%#:                                  .*%++***###*********************+%" << endl <<
					"//                                                      .##****#.       .**++**++*+#++*#@@@#*##******#******+++*+*%@%=+@@%%=                                   +%*+**##***#*****************+*#" << endl <<
					"//                                                      .#***#*#-     .-####%#*+*#**#+*%@@@%%#****#**+**+++#++**+%@#-==%@#%%.                                   -%#*+****#******************+%-" << endl <<
					"//                                                       ***##*#+ .-=+#****++++*++*+%*+#@@%#%@@%###***++#*+**+**%@*:---%@#%@.                                    :#%+++********************+%* " << endl <<
					"//                                                 ....  :#+*****=*+++++++*+++**++#*#%*#%@*:===+*#%%%##**#****#%%=::::-@%#%#                                      =%+**+*******************%*  " << endl <<
					"//                                     .        :=++**#*++*+*****#*++*++*++***#****#+#%+*@@+-=====-=+*#%%#%%#*%@-.:::.+%#+%-                                     .%#+*********************#=   " << endl <<
					"//            ...                        -=+++++*+-++#%#*+#++*****%#********###*******#%*#%@%+==-------:=@@##**%%-...:%%*#+                                      -@#+*******************+#:    " << endl <<
					"//           .++++*=:....               -+-++*##%#+=+**+#%*++******###*######******###*#%#*%%@#=----::::#@#**+*+*%%**%%**#.                                      =@*+**##***************+.     " << endl <<
					"//            :*####***+++--:::.....::.:=**=+*###%#+++++*%****###****#%*+**+*#%%######*+*#%##%%@%*=::-=#@%++*++****%@@#*+=               .:---::=+***#######***++*%+**#####************=       " << endl <<
					"//              .-++#######***+*+++*+***+#%*+++*##%+++***#%#%%##*+***+*%%##*##*#%@%#**##%%@@%#**%@@@%@@%%***#****++*%****            .=+#%%@@@@@%#********++*+++*@%+*########*********=        " << endl <<
					"//                    :-==+++##%#############++*#*#%*+****#%%#********#%%##*****#%@**##%%%%@@@@%#**###***++**+++**+##+#+         .-=#%%%%@@@%@@%#++*++*+++****###%#**##########******%         " << endl <<
					"//                            .::--*%##*######*+****%#++***#%******###*****##****%%#***###%%%%%%@@%***#************#*%-      :=*%%%%%@@@@@@%@%#***************#*%%***###########****#+         " << endl <<
					"//                                  -#**##%%####*****#%#+***########**#**+**=+++++*#***##**#%@@@@@@@%%#***+#*++*##*#*.    -*%@%%##%%@@@%@@%@@*#*+#++#*++*#+**#**#%+**###########****%.         " << endl <<
					"//                                  -##%%*+********#**#%%**##*****#+*#*****#+***%*+*=*+*++*+*+*%%%@@@@@@@%%@%###*#*:   :+%%%%%##%%%@@@@@@@@@#+#*+#++#****#******#%***############**%:          " << endl <<
					"//                                   -#%@@%#*++******#%%%%%***+***#**####%%%%%%%%%%##******#*##*#*#%%@@@@@@@%*#%+.  .=#%%%@%##%@@@@@@@@@@@@%%**#*###%%%%%%###*####%%#**########**#+.           " << endl <<
					"//                                    +*%@@@%%%####*###############***+#%%%@@@@@@%#*###**##****#***###%%%%%@@##%. .=##%%@%%%%@@@@@@@@@@@@@@@%**#*******####%%%#####%%%#%%%%###*+=.             " << endl <<
					"//                                     +#*%%%##%%##****###*##***+#++++#%%@@@@@@@@@@@%#**#**+**#*******###%@@%#%-.+#*#%@@@%%@@@@@@@@@@@@@@@@@%%**#**#**##***#############%- .                   " << endl <<
					"//                                      :*##%%%%#%@@@%%%%#####*#####%%@@%@%@@@@@@@@@@%##********++*+*#%#%@@%##-=%**%@@@@@@@@@@@@@@@@@@@@@@@@@@@%%##############*######*+:.                     " << endl <<
					"//                                         -+%%%%#%%%%%%@@@@@@@%%%%@@%##%%@@@@@@@@@@@@@#******+*+**+*%#*#%%*=:#####@@@@@@@@@@@@@@@@@@%%@@@*::--=+*###########***+==-.                          " << endl <<
					"//        .:----=--:.                        -@##%%%@@%%%%#%%%%%%@@@@@@%%##%%@@@@@@@@@@%****#*******#%*#%%*:+%*###@@@@@@@@@@@@@@@@@@%@@@@=                                                     " << endl <<
					"//   . :=*#********####*=-.                  :@++*#%@@@%@@@@@@@@@@@@@@%%@@%%%%%%@@@@@@@@#**#***+*****#%#%@**%**##@@@@@@@@@@@@@@@@@@%@%@@*                                                      " << endl <<
					"//   :*##%%@@@%##%%##**###%#*=:.              =*+**#%@@%##%@@@@@@@@@@@%###%%%@@@%%%@@@@@#**+***##*#**##%*#%#####%@@@@@@@@@@@@@@@@@@@@@@@%.                                                     " << endl <<
					"//  +%%@@@@@@@@@%#%######%%%%%%%####**++=:.    :=+***#%%%##%%%@@@%#%%%@@%%%%%%%@@@@@@@@%%###**#*+*##*#**#%#####%@@@@@@@@@@@@@@@@@@@@@@@@%.                                                     " << endl <<
					"// =%#%@@@@@@@@@@@@@%#%@%#%%%@@@@%%%%%%%#%%%*+=:.:##***########%%%%#%%%%%@@@@@@@@@@@@@%*++*#++#*%#*#%+*%%####%%@@@@@@@@@@@@@@@@@@@@@@@@@:                                                      " << endl <<
					"// %#%@@@@@@@@@@@@@@@@%#%@%%#%@@@@@@@@@@@@@@%%##%**@%#*#########%%%%%%%%%%%@@@@@@@@@@@%***###%%#+*#%##%%#####%%@@@@@@@@@@@@@@@@@@@@@%@%:                                                       " << endl <<
					"// +%%@@@@@@@@@@@@@@@@@%##%@%##%%@@@@@@@@@@@@@@%%####%%######%%%%%%%%%%%%@@@@@@@@@@%##**####****##%*#%%#####%@@@@@@@@@@@@@@@@@@@@@@@@*.                                                        " << endl <<
					"//  =%%%@@@@@@@@@@@@@@@@%#%@@%#%%%%%@@@@@@@@@@@@@@%#%%#%%%%####%%%@@%%%%%@@@@@@@@@%#****+*#++*#%%%**%@%####%%@@@@@@@@@@@@@@@@@@@@%@@=                                                          " << endl <<
					"//   .*%%%@@@@@@@@@@@@@@%%%@@%%%%%%%%%%@@@@@@@@@@@@@@%%%%%%%%#**##%@@@@%@@@@@@@@@#***#****#####*%#@@@@%##%%%%@@@@@@@@@@@@@@@@@%@@@%-                                                           " << endl <<
					"//     .+%#%%@@@@@@@@@@@@%%@@@%%@@@%@@@%@@@@@@@@@@@@@@@%%%%%%%%*******##%%%%%%%%%***#*********#%#%@@@@%%#%%@@@@@@@@@@@@@@@@@@%@@@*.                                                            " << endl <<
					"//        +%%%@@@@@@@@@@@@%@@@@@@@@@@@@@@@@@%@@@@@%@@@@@@@@@@%%%%##***#***###***#****#***#****#%%@@@@@%%%%@@@@@@@@@@@@@@@@@@@%@#:                                                              " << endl <<
					"//         .*%%%%@@@@@@@@@@@@@@@@@@@@@@@@@@%*#%@@@@@@@@@@@@@@@@%%%%%%#####**##**##***#***#****%@@@@@@@%%%@@@@@@@@@@@@@@@@@@@%#-                                                                " << endl <<
					"//           .###%@@@@@@@@@%@@@@@@@@@@@@@@%%%#*#@@@@@@@@@@@%@@@@@%%%%%@@@%%%%%%%%%###%##*%#*%@@@@%@@@@%@@@@@@@@@@@@@@@@@%@@#-                                                                  " << endl <<
					"//            .*%%@@@@@@@@@@@@@@@@@@@@@@%#*##%%##@@@@@@@@@@@@@@@@@@%%%%%%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%@%@*:                                                                    " << endl <<
					"//              =%%@@@@@@@@@@@@@@@@@@%%%###*###%##%@@@@@@@@@@@@@@@@@@@@@@@@@@@%%%%@@@@@@@@@%%%@@@@@@@@@@@@@@@@@@@@@@%%%+:                                                                      " << endl <<
					"//               .+@%@@@@@@@@@@@@%%%#%%%%%%#####%%%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%%%%%%%%%%%@@@@@@@@@@@@@@@@%%@@@%%@#=.                                                                        " << endl <<
					"//                 .+%@@%@%%%%%%##%%%####%%%######%%%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%%%%%@@@@@@@@@@@@@@@%%%%%%@@@*:                                                                           " << endl <<
					"//                   .-*%#*###%%%%%##%%%%######%%##%%%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%*=.                                                                             " << endl <<
					"//                      .-+*#**##%%%%#######%%######%#%%@@@@@@@@@@@@@@@@@@@@@@@@@@@%%%%%%%%%@@%#*####**+==-::.                                                                                 " << endl <<
					"//                    .  .  .-++***#######################%@@@@@@@@@@@@@@@@@@@@@@%#++++++++=-.                                                                                                 " << endl <<
					"//                               :-=+**#################%###%%@@@@@@@@@@@@@@@@%#=:                                                                                                             " << endl <<
					"//                                    .-=**#*###################%%%%%@%%%#*=-.                                                                                                                 " << endl <<
					"//                                       .:-+*#*###################*=..                                                                                                                        " << endl <<
					"//                                            .-=+*###################*=-.                                                                                                                     " << endl <<
					"//                                                .:-=*#####*########*####+=-:.                                                                                                                " << endl <<
					"//                                                      :-+*######***###**###*####**=.                                                                                                         " << endl <<
					"//                                                          .:-+*#############**###*##*--:                                                                                                     " << endl <<
					"//                                                                :=+*#####***####***###**#*+==-:..                                                                                            " << endl <<
					"//                                                                     .:=#####*######****#**##**####**+=-:..                                                                                  " << endl <<
					"//                                                                        .-=**#######**###***##***##**#######*+-                                                                              " << endl <<
					"//                                                                              -+#######**##**#####*#########*##%+.                                                                           " << endl <<
					"//                                                                                 :=*############*##########%#####*+:                                                                         " << endl <<
					"//                                                                                    .:=+*%###########################-                                                                       " << endl <<
					"//                                                                                       . .-+*#######################**+                                                                      " << endl <<
					"//                                                                                             :=+##################++=-.                                                                      " << endl <<
					"//                                                                                             .   -=*##%%*+====-:.   .                                                                        " << endl;
			}
			else
				cout << "Que mala onda que sos." << endl;

			salir = false;
			break;
		}
	} while (salir);
}