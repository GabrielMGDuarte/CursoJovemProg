#include <iostream>
using namespace std;

float horas, qtde_horas,oper;

main(){
	system("chcp 65001");
	
	cout<<"\nDigite o valor da hora trabalhada: R$ ";
	cin>>horas;
	
	cout<<"\nDigite a quantidade de horas trabalhadas/mês: ";
	cin>>qtde_horas;
	
	oper = horas * qtde_horas;	
	cout<<"\nO valor que o trabalhador vai receber no final do mês é : R$ "<<oper;
	
	
	
	
}

