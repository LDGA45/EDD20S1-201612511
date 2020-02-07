#include <iostream>
#include <string>
#include "Nodo.h"
using namespace std;

class Lista
{
public:
	Lista();
	void insert(int id, string nombre);
	void eliminate(Nodo* n);
	Nodo* search(int n);
	void show();

private:
	Nodo * head;
	
};