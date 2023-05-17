#include <iostream>
#include <string>
#include <vector>
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
	Ferreteria ferr = Ferreteria("Jaimito", "Tucasa", "12344", "AJAJAJ@.COM", Efectivo);
	Duenio due = Duenio("62739", "MaterClas", "Rodrigo", Maculino, true);
	Despachante despi = Despachante("123456", "Jaimito", "Perez", Maculino, 67, "Auto", 40, "pedido");
	Cerrajero cerraj = Cerrajero("123456", "Juanito", "Perez", Maculino, 67, "Auto", 40, "alarma");

	time_t tiempito;
	time(&tiempito);
	Horario horacio = Horario(tiempito);

	bool abierto = false;
	abierto = ferr.abrir(horacio);

	cout << "Abierto = 1 y Cerrado = 0" << endl;
	cout << "La ferreteria esta: " << abierto << endl;

	int i = 0;

	list <Articulo> Articulos;
	list <HerramientasAlquiler> Amoladorcita;

	Articulos.push_back(Articulo(5, true, "Perfecto", "clavo", 2.05, 3.04, 4.01, 0));
	Articulos.push_back(Articulo(15, true, "Perfecto", "tarucha", 2.05, 3.04, 4.01, 57));
	Articulos.push_back(Articulo(10, true, "Perfecto", "tornillo", 2.05, 3.04, 4.01, 4));

	Amoladorcita.push_back(HerramientasAlquiler(Amoladoras, "Casio", "Perfecta", 490, 57, 0));
	Amoladorcita.push_back(HerramientasAlquiler(Lijadoras, "Casio", "Medio", 490, 217, 3));
	Amoladorcita.push_back(HerramientasAlquiler(Perforadoras, "Casio", "Perfecta", 490, 567, 5));

	Cliente Javier = Cliente("45545166", "Javier", "Peña", Otro,"Foto", "ArtRoto", "Manuel Ugarte 5500", Efectivo, Articulos, true, Amoladorcita, true, true);

	Articulo art = Articulo(345, true, "Perfecto", "clavo", 2.05, 3.04, 4.01, 98);

	LLaves llave = LLaves(3, true, "Perfecto", "llave", 2.05, 3.04, 4.01, 98, "metal", LLavesMagneticas, true);

	cout << "Amoladoras = 0, Lijadoras = 1, Perforadoras = 2" << endl;

	cout << "El precio total es: " << ferr.generar_Presupuesto(Javier) << endl;

	cout << "Va a tener que pagar por el cambio: " << due.CambioArticulo(art, Javier) << endl;

	cout << "1 = Trajo una Foto o ArtRoto y 0 = No trajo ninguna de las dos: " << due.identificar_art(Javier, art) << endl;

	cout << "1 = El cliente pide un envio a domicilio y 0 = El cliente no pide un envio a domicilio: " << despi.enviar_articulo(art, Javier) << endl;

	cout << "1 = El cliente pide duplicar llave y 0 = El cliente no pide duplicar llave: " << cerraj.DuplicarLlaves(llave, Javier) << endl;

	int stock = 0;

	try 
	{
		throw Javier.elegir_art(art);
	}

	catch(int stock)
	{
		cout << "Se encontro un error" << endl;
	}

	return 0;
}