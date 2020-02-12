#include <iostream>
#include <cstdlib>
#include <string>
#include "ListaD.h"
using namespace std;

int main(int argc, char *argv[])
{
    ListaDoble lista = ListaDoble();

	string a = "hola";

	lista.AgregarPrimero('N');
	lista.AgregarPrimero('P');
	lista.AgregarPrimero('O');
	lista.AgregarPrimero('C');
	lista.AgregarPrimero('D');
	
	lista.AgregarPrimero('R');
	lista.AgregarPrimero('E');
	lista.AgregarPrimero('E');
	lista.AgregarPrimero('L');

	lista.show();

	lista.EliminarULTIMO();
	cout << "\n";
	lista.show();
	lista.EliminarULTIMO();
	cout << "\n";
	lista.show();
	cout << "\n";

	cout << lista.busqueda("LEER")->letra;

	
	system("pause");
	return 0;
}
