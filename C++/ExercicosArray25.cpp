#include <iostream>
using namespace std;

int pessoas;
float altura,soma_alturas,media;

main() {
	system("chcp 65001");
	system("cls");

	cout<<"Digite uma quantidade de pessoas: ";
	cin>>pessoas;

	float alturas[pessoas];

	for(int i = 0; i < pessoas; i++){  
	cout<<"\nDigite a altura: ";
	cin>>alturas[i];
    soma_alturas = soma_alturas + alturas[i];
	}
	
	media = soma_alturas / pessoas; 
	
	cout<< "\nA média das alturas é: "<<media;
	
	for(int i=0;i<pessoas; i++){
		
		cout<<"\nA altura da "<<i+1<<"ª pessoa é: "<<alturas[i];
	}	
}