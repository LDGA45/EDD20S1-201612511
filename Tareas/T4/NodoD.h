#include <iostream>
#include <string>
using namespace std;

class NodoDoble{

public:

	NodoDoble(char letra);

	char letra;

	NodoDoble* siguiente;
	NodoDoble* anterior;

};