#include <iostream>
using namespace std;

int peso,pesos;

main(){
    system("chcp 65001");

	
	do{
	cout<<"Digite um peso: ";
	cin>>peso;
	
	pesos = pesos + peso;
	}while(pesos <= 180);
	cout<<"Peso máximo 180KG";   
  
}	
	
	