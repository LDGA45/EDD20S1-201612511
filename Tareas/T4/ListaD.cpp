#include "ListaD.h"



ListaDoble::ListaDoble()
{
	primero = NULL;
	ultimo = NULL;
}

bool ListaDoble::Vacio() {

	if ((primero = NULL) && (ultimo = NULL)) {
		return true;
		cout << "primero";
	}
	else { return false; }
}

void ListaDoble::AgregarPrimero(char c) {
	NodoDoble* niu = new NodoDoble(c);
	niu->siguiente = primero;

	if (ultimo != NULL) {
	}
	else {
		ultimo = niu;
	}

	if(primero != NULL) {
		primero->anterior = niu;
	}
		primero = niu;

}


void ListaDoble::EliminarULTIMO() {
	if (ultimo != NULL) {
		ultimo = ultimo->anterior;
		ultimo->siguiente = NULL;
	}
}

NodoDoble* ListaDoble::busqueda(string palabra) {
	NodoDoble* aux = primero;

	while (aux != NULL) {
		if ((char) palabra[0] == aux->letra) {

			NodoDoble* aux2 = aux;
			int a = 0;
			while ( a  < palabra.length() && aux2!= NULL) {
				if ((char)palabra[a] != aux2->letra) {
					cout << "entro";
					return NULL;
				}
				aux2 = aux2->siguiente;
				a++;
			}
			if (a  != palabra.length()) {
				return NULL;
			}
			return aux;
		}
		aux = aux->siguiente;
	}
	return NULL;
}

void ListaDoble::show() {
	NodoDoble* aux;
	for (aux = primero; aux != NULL; aux = aux->siguiente) {
		cout << aux->letra << "-> ";
	}
}
