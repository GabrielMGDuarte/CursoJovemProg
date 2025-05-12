#include <iostream>
using namespace std;


int pessoas;
float altura,alturas,media;

main() {
	system("chcp 65001");
		
	cout<<"Digite uma quantidade de pessoas: ";
	cin>>pessoas;
	
	for(int i = 0; i != pessoas; i++){
	cout<<"\nDigite a altura: ";
	cin>>altura;
	alturas = alturas + altura;
	}
	
	media = alturas / pessoas; 
	cout<< "/nA média das alturas é: "<<media;
		
}