#include "NodoD.h"
#include <iostream>
#include <string>
using namespace std;

NodoD::NodoD(char _letra){
    letra = _letra;
    siguiente = NULL;
    anterior = NULL;
}

