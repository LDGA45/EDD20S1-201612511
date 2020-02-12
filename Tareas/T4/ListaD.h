
#include "NodoD.h"

class ListaDoble{
public:
	ListaDoble();

	NodoDoble* primero;
	NodoDoble* ultimo;

	bool Vacio();
	void show();
	void AgregarPrimero(char c);
	NodoDoble* busqueda(string palabra);
	void EliminarULTIMO();

};