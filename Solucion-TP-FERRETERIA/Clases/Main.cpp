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
	int i = 0;

	Ferreteria ferr = Ferreteria("Jaimito", "Tucasa", " 12344", "AJAJAJ@.COM", Efectivo);

	vector <Articulo*> Articulos;
	vector <Articulo*> ::iterator iter;

	Articulos.push_back(new Articulo(567, true, "Perfecto", "clavo", 2.05, 3.04, 4.01, 34));
	Articulos.push_back(new Articulo(57869, true, "Perfecto", "tarucha", 2.05, 3.04, 4.01, 434));
	Articulos.push_back(new Articulo(5647827, true, "Perfecto", "tornillo", 2.05, 3.04, 4.01, 4524));

	Cliente Javier = Cliente("Javier", "Pe�a", "45545166", Otro, "Manuel Ugarte 5500", Efectivo, Articulos ,"Foto", "ArtRoto", true);

	cout << "El precio total es: " << ferr.generar_Presupuesto(Articulos, Javier) << endl;

	for (iter = Articulos.begin(); iter != Articulos.end(); i++, iter++)
	{
		delete Articulos[i];
	}

	return 0;
 
}