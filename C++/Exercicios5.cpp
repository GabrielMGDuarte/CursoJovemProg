#include <iostream>
using namespace std;

float milhas;
double conv;


main(){
	system("chcp 65001");
	
	cout<<"\nDigite uma quantidade em milhas: ";
	cin>>milhas;
	
	conv= milhas*1.60934;
	
	cout<<"\nA conversão para quilometros é: "<<conv;

	
}