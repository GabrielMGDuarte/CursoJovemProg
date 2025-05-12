//FUP que leia 3 valores a,b,c e verifique se eles formam ou não um triângulo. Supor que os valores lidos são inteiros e positivos. 
//Caso os valores formem um triângulo, calcule e escreva a área deste triângulo. Se não formam triângulo escreva os valores lidos.

#include <iostream>
using namespace std;

float a,b,c,base, altura, area;


main(){
	system("chcp 65001");
	
	cout<<"\nDigite um valor para A: ";
	cin>>a;
	cout<<"\nDigite um valor para B: ";
	cin>>b;
	cout<<"\nDigite um valor para C: ";
	cin>>c;
	
	if(a + b > c && b + c > a && a + c > b ){
		cout<<"\nDigite a base: ";
		cin>>base;

		cout<<"\nDigite a altura: ";
		cin>>altura;	
		
		area = 	(base * altura / 2);
		
		cout<<"\nA área do triângulo é: "<<area;
	
	}else{
		cout<<"\nOs valores digitados:"<<a<<", "<<b<<" e "<<c<<", não formam um triângulo";
	}


}
	
