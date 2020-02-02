#include <cstdlib>
#include <iostream>


using namespace std;

class moneda{
public:

	string nombre;
	int ID;

	moneda();

	void Transferencias(int ID);
	void TransferenciasFrom(int Res, int Emi);


};