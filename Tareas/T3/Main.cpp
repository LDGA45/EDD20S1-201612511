#include <iostream>
#include <cstdlib>
#include <string>
#include "ListaSimple.h"
using namespace std;


int main(int argc, char *argv[])
{
	Lista lista = Lista();
	lista.insert(201612511, "Luis Garcia");
    lista.insert(201612288, " Marco Salazar");
	lista.insert(201612185, " Byron Alvarez");
	lista.insert(201612481, "Ronald Martinez");

	lista.show();
	lista.eliminate(lista.search(4));

	cout << "\n";

	lista.insert(201612507, "Carlos ruiz");
	lista.show();


	system("pause");
}