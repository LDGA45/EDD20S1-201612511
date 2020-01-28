#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{

	int M;
	
	cout<<"ingrese numero para matriz cuadrada: ";
	cin>>M;
	
	int matriz[M][M];
	
	for(int i=0;i<M;i++){
		cout<<"\n";
		for(int j=0;j<M;j++){
			if(i==0||i==M-1||j==0||j==M-1){
				cout<<"[1]";
			}
			else{
				cout<<"[ ]";
				}
			}

		}

	system("pause");
	}