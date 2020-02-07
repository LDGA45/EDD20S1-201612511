#include <iostream>
#include <cstdlib>
#include <string>
#include "ListaSimple.h"



Lista::Lista()
{
	head = NULL;
}

void Lista::insert(int id, string nombre) {
	Nodo* nuevo = new Nodo(id, nombre);
	nuevo->siguiente = head;
	head = nuevo;
}

void Lista::eliminate(Nodo* n) {
	Nodo* aux;
	for (aux = head; aux != NULL; aux = aux->siguiente) {
		if (n == aux) {
			aux->siguiente = NULL;
			
		}
	}
}

Nodo* Lista::search(int n) {
	Nodo* aux;
	for(aux = head; aux != NULL; aux = aux->siguiente) {
		if (n == aux->id) {
			return aux;
		}
	}
	return NULL;
}

void Lista::show() {
	Nodo* aux;
	for (aux = head; aux != NULL; aux = aux->siguiente)
		cout << aux->id<< ", "<< aux->nombre << "=> ";

}