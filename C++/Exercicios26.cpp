#include <iostream>
using namespace std;

float peso,pesos,media;

main() {
	system("chcp 65001");
		
	
	for(int i=0; i !=5 ; i++){
	cout<<"\nDigite  peso: ";
	cin>>peso;
	pesos = pesos + peso;
	}
	
	media = pesos / 5;
	cout<< "\nA média de peso entre as 5 pessoas é: "<<media;
		
}