#include "Lista.h"


Lista::Lista(){
    primero = NULL;
    ultimo = NULL;

}

bool Lista::esVacia(){

    if((primero = NULL )&& (ultimo = NULL) ){
        return true;
    }
    else return false;
}

void Lista::insertarPrimero(char _c){
    NodoD* nuevo = new NodoD(_c);
    if (esVacia()){
        primero = nuevo;
        ultimo = nuevo;
    }else{
        nuevo->siguiente = primero;
        primero->anterior = nuevo;
        nuevo = primero;
    }

}

void Lista::show() {
	NodoD* aux;
	for (aux = primero; aux != NULL; aux = aux->siguiente)
		cout << aux->letra << "=> ";

}