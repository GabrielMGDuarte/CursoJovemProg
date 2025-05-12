#include <iostream>
using namespace std;

float segundos, minu, horas;


main(){
	system("chcp 65001");
	
	cout<<"\nDigite um valor para segundos: ";
	cin>>segundos;
	
	minu= segundos/60;
	cout<<"A conversão para minutos é: "<<minu;
	
	horas= minu/60;
	cout<<"\nA conversão para horas é: "<<horas;
	
	
	
	
	
}