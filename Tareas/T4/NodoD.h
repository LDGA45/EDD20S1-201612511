#include <iostream>
#include <string>
using namespace std;

class NodoD{
public:
	NodoD(char letra);

	char letra;
	NodoD* siguiente;
    NodoD* anterior;
	
};