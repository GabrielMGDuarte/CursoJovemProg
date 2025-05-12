#include <iostream>
using namespace std;

float pesos[5],soma,media;

main() {
	system("chcp 65001");
	system("cls");	
	
	for(int i=0; i !=5 ; i++){
	cout<<"\nDigite o peso da pessoa "<<i+1<<":";
	cin>>pesos[i];
	
    soma += pesos[i];
	}
	
	media = soma / 5;
	cout<<"\nA média de peso entre as 5 pessoas é: "<<media;
		
}