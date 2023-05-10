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
	vector <Articulo*> Articulos;
	Articulos.push_back(new Articulo(567, true, "Perfecto", "clavo", 2.05, 3.04, 4.01, 34));

	Cliente* Javier = new Cliente("Javier", "Peña", "45545166", Otro, "Manuel Ugarte 5500", Efectivo, Articulos ,"Foto", "ArtRoto", true);

	//for para los delete
	delete Articulos[0];
	return 0;
 
}