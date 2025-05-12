//O custo ao consumidor de um carro novo é a soma do custo de fábrica com a percentagem do distribuidor e dos impostos (aplicados ao custo de fábrica). 
//Supondo que a percentagem do distribuidor seja de 28% e os impostos de 45%, escrever um algoritmo que leia o custo de fábrica de um carro e escreva o custo ao consumidor.

#include <iostream>
using namespace std;

float custoCon, custoFab, impostos = 0.45, distribuidor = 0.28,soma;

main(){
	system("chcp 65001");
	
	cout<<"\nQual é o custo de fábrica? R:";
	cin>>custoFab;
	
	soma = custoFab + (custoFab * distribuidor) + (custoFab * impostos);
	
	cout<<"\nO custo ao consumidor é de: R$"<<soma;
	
	
}