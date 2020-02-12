#include <iostream>
#include <cstdlib>
#include <string>
#include "Lista.h"
using namespace std;


int main(int argc, char *argv[])
{
	Lista lista = Lista();
	lista.insertar(12511, "Luis");
    lista.insertar(12288, "Marco");
	lista.insertar(12185, "Byron");
	lista.insertar(12481, "Ronald");
	lista.insertar(52166, " Pedro");
	lista.insertar(65153, "Juan");
	
	lista.mostrar();
	lista.eliminar(lista.buscar(4));

	cout << "\n";

	lista.insertar(201612507, "Carlos");
	lista.mostrar();


	system("pause");
	return 0;
}