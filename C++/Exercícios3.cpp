#include <iostream>
using namespace std;

float peso, peso1, peso2, peso3, peso4, media, soma;


main(){
	system("chcp 65001");
	
	cout<<"\nDigite o peso da 1ª pessoa :  ";
	cin>>peso;
	
	cout<<"\nDigite o peso da 2ª pessoa :  ";
	cin>>peso1;
	
	cout<<"\nDigite o peso da 3ª pessoa :  ";
	cin>>peso2;
	
	cout<<"\nDigite o peso da 4ª pessoa :  ";
	cin>>peso3;
	
	cout<<"\nDigite o peso da 5ª pessoa :  ";
	cin>>peso4;
	
	soma = 	peso + peso1 + peso2 + peso3 + peso4;
	media = soma / 5;
	cout<<"\nA média dos pesos é : "<<media;
	
	
}