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
	Ferreteria ferr = Ferreteria("Jaimito", "Tucasa", "12344", "AJAJAJ@.COM", Efectivo);
	time_t tiempito;
	time(&tiempito);
	Horario horacio = Horario(Lunes, tiempito);

	bool abierto = false;
	abierto = ferr.abrir(horacio);

	cout << "Abierto = 1 y Cerrado = 0" << endl;
	cout << "La ferreteria esta: " << abierto << endl;

	int i = 0;

	list <Articulo> Articulos;

	Articulos.push_back(Articulo(5, true, "Perfecto", "clavo", 2.05, 3.04, 4.01, 9));
	Articulos.push_back(Articulo(195, true, "Perfecto", "tarucha", 2.05, 3.04, 4.01, 57));
	Articulos.push_back(Articulo(10, true, "Perfecto", "tornillo", 2.05, 3.04, 4.01, 4));

	Cliente Javier = Cliente("Javier", "Peña", "45545166", Otro, "Manuel Ugarte 5500", Efectivo, Articulos,"Foto", "ArtRoto", true);

	cout << "El precio total es: " << ferr.generar_Presupuesto(Javier) << endl;

	return 0;
}