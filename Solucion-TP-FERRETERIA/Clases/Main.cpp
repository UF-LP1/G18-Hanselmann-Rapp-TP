#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>

#include "Cliente.h"
#include "Articulo.h"
#include "Ferreteria.h"

using namespace std;

int main() 
{
	Ferreteria ferr = Ferreteria("Jaimito", "Tucasa", " 12344", "AJAJAJ@.COM", Efectivo);
	time_t tiempito;
	time(&tiempito);
	Horario horacio = Horario(Lunes, tiempito);

	bool abierto = false;
	abierto = ferr.abrir(horacio);

	cout << "Abiero = 1 y Cerrado = 0" << endl;
	cout << "La ferreteria esta: " << abierto << endl;

	int i = 0;

	list <Articulo> Articulos;

	Articulos.push_back(Articulo(567, true, "Perfecto", "clavo", 2.05, 3.04, 4.01, 34));
	Articulos.push_back(Articulo(57869, true, "Perfecto", "tarucha", 2.05, 3.04, 4.01, 434));
	Articulos.push_back(Articulo(5647827, true, "Perfecto", "tornillo", 2.05, 3.04, 4.01, 4524));

	Cliente Javier = Cliente("Javier", "Peña", "45545166", Otro, "Manuel Ugarte 5500", Efectivo, Articulos,"Foto", "ArtRoto", true);

	cout << "El precio total es: " << ferr.generar_Presupuesto(Javier) << endl;

	//for (iter = Articulos.begin(); iter != Articulos.end(); iter++)
	//{
	//	delete iter;  // Eliminar el objeto apuntado por el puntero actual
	//}

	return 0;
}