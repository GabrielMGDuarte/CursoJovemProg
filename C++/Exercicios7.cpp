#include <iostream>
using namespace std;

int quil,metros,cent;

main(){
	system("chcp 65001");
	
	cout<<"\nDigite uma quantidade para Quilometros: ";
	cin>>quil;
	
	metros = quil*1000;
	cout<<"\nA conversão para Metros é:"<<metros;
	
	cent= metros*100;
	cout<<"\nA conversão para Centímetros é: "<<cent;
	
	
}