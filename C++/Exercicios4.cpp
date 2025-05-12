#include <iostream>
using namespace std;

float tempc,conv;


main(){
	system("chcp 65001");
	
	cout<<"\nDigite um valor para temperatura em graus 'Cº':";
	cin>>tempc;
	
	conv= (9*tempc+160)/5;
	
	cout<<"\nA conversão para Fahrenheit é :"<<conv;
	
	
	
	
	
}