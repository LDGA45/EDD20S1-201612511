#include <iostream>
#include <string>
#include "NodoD.h"
using namespace std;

class Lista{
public:
        Lista();
//variables
        NodoD* primero;
        NodoD* ultimo;
//metodos
        void insertarPrimero(char c);
        void eliminarUltimo();
        NodoD* buscarString(string palabra);
        bool esVacia();
        void show();
};