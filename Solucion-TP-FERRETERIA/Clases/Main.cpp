#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>
#include <iterator>

#include "Cliente.h"
#include "Articulo.h"
#include "Ferreteria.h"

using namespace std;

int main() 
{
	Articulo Art1 = Articulo(567, true, "Perfecto", "clavo", 2.05, 3.04, 4.01, 34);

	vector <Articulo> Articulos;
	vector <Articulo>::iterator arr;

	int i = 0;

	for (arr = Articulos.begin(); arr != Articulos.end(); arr++, i++)
	{
		Articulos[i] = Art1;
		
	}

	Cliente* Javier = new Cliente("Javier", "Peña", "45545166", Otro, "Manuel Ugarte 5500", Efectivo, Articulos ,"Foto", "ArtRoto", true);

	return 0;
 
}