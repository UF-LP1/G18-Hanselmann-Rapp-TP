#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>

#include "TipoProducto.h"
#include "Cliente.h"
#include "Articulo.h"
#include "Ferreteria.h"
#include "Despachante.h"
#include "Cerrajero.h"

using namespace std;

int main() 
{
	bool CHANGE = false;
	unsigned int opcion = 0;
	cout << "¿Desea Cambiar un Articulo? (Poner 1 si quiere, o 0 si no quiere) " << endl;
	cin >> CHANGE;

	if (CHANGE == true)
	{
		cout << "¿Por que Articulo desea Cambiar?" << endl;
		cin >> opcion;

		switch (opcion)
			case(1):
				if(Tip)

		if (itArt->get_Cambio() == true)
		{
			if (cli.get_EnvoltorioIntacto() == true)
			{
				
			}
		}
	}

	Ferreteria ferr ("Jaimito", "Tucasa", "12344", "AJAJAJ@.COM", Efectivo);
	Duenio due ("62739", "MaterClas", "Rodrigo", Maculino, true);
	Despachante despi = Despachante("123456", "Jaimito", "Perez", Maculino, 67, "Auto", 40, "pedido");
	Cerrajero cerraj = Cerrajero("123456", "Juanito", "Perez", Maculino, 67, "Auto", 40, "alarma");

	time_t tiempito;
	time(&tiempito);
	Horario horacio = Horario(tiempito);

	string abierto = ferr.abrir(horacio)? "Abierta" : "Cerrada"; //Uso el operador ternario para que me diga si esta Abierto o Cerrada

	cout << "La ferreteria esta: " << abierto << endl;

	int i = 0;

	list <Articulo> Articulos;
	list <HerramientasAlquiler> Amoladorcita;

	
	Articulo art1 (5, true, "Perfecto", "clavo", 2.05, 3.04, 4.01, 0);
	Articulo art2 (15, true, "Perfecto", "tarucha", 2.05, 3.04, 4.01, 57);
	Articulo art3 (10, true, "Perfecto", "tornillo", 2.05, 3.04, 4.01, 4);

	Articulos.push_back(art1);
	Articulos.push_back(art2);
	Articulos.push_back(art3);

	HerramientasAlquiler herralq1(Amoladoras, "Casio", "Perfecta", 490, 57, 0);
	HerramientasAlquiler herralq2(Lijadoras, "Casio", "Medio", 490, 217, 3);
	HerramientasAlquiler herralq3(Perforadoras, "Casio", "Perfecta", 490, 567, 5);

	Amoladorcita.push_back(herralq1);
	Amoladorcita.push_back(herralq2);
	Amoladorcita.push_back(herralq3);

	Cliente Javier ("45545166", "Javier", "Peña", Otro,"Foto", "ArtRoto", "Manuel Ugarte 5500", Efectivo, Articulos, true, Amoladorcita, true, true, CHANGE);

	Articulo art (345, true, "Perfecto", "clavo", 2.05, 3.04, 4.01, 98);

	LLaves llave (3, true, "Perfecto", "llave", 2.05, 3.04, 4.01, 98, "metal", LLavesMagneticas, true);

	cout << "Amoladoras = 0, Lijadoras = 1, Perforadoras = 2" << endl;

	cout << "El precio total es: " << ferr.generar_Presupuesto(Javier) << endl;

	cout << "Va a tener que pagar por el cambio: " << due.CambioArticulo(art, Javier) << endl;

	string identif_art = due.identificar_art(Javier, art) ? "Trajo una Foto o un Articulo Roto." : "No trajo ni una Foto ni un Articulo Roto."; //Uso el operador ternario para que me devulva de forma string en vez de un bool

	cout << identif_art << endl;

	string envia_Art = despi.enviar_articulo(art, Javier) ? "El cliente quiere un envio a su domicilio." : "El cliente no quiere un envio a domicilio."; //Uso el operador ternario para que me devulva de forma string en vez de un bool

	cout << envia_Art << endl;

	string DupiLLavecita = cerraj.DuplicarLlaves(llave, Javier) ? "El cliente quiere duplicar una llave" : "El cliente no quiere duplicar ninguna llave."; //Uso el operador ternario para que me devulva de forma string en vez de un bool

	cout << DupiLLavecita << endl;

	cout << "Cantidad de Articulos Totales: " << Articulo::get_CantidadMaximaArticulos() << endl;

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