#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

#include "Lista.h"

int main(int argc, char *argv[])
{
    
	Lista lista = Lista();
    
    lista.insertarPrimero('p');
    lista.insertarPrimero('O');
    lista.insertarPrimero('o');
    lista.insertarPrimero('O');
    lista.show();

	system("pause");
}
