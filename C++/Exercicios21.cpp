#include <iostream>
using namespace std;

double sms,local,par_reside,valor,trabalho,amor,fatidico,arma,soma;

main() {
	system("chcp 65001");
	cout<<"\nResponda as seguintes perguntas com 1 para Positivo ou 0 para Negativo.";
		
	cout<<"\nTrocou mensagens com a vítima? \nR: ";
	cin>>sms;
	cout<<"\nEsteve no local do crime? \nR: ";
	cin>>local;
    cout<<"\nÉ parente ou reside perto da vítima? \nR: ";
    cin>>par_reside;
    cout<<"\nDevia algum valor para a vítima? \nR: ";
    cin>>valor;
    cout<<"\nTrabalha ou trabalhou com a vítima?\nR: ";
    cin>>trabalho;
    cout<<"\nPossui algum tipo de relacionamento amoroso com a vítima?\nR: ";
    cin>>amor;
    cout<<"\nFicou feliz pelo destino fatídico na vítima?\nR: ";
    cin>>fatidico;
	cout<<"\nPossui algum tipo de arma de fogo?\nR: ";
	cin>>arma;
	
	soma = sms + local + par_reside + valor + trabalho + amor + fatidico + arma;
//Positivo para 4 perguntas, a pessoa deve ser classificada como: "Suspeito do Crime"
//- Positivo para entre 5 e 7 perguntas, a pessoa deve ser classificada como "Possível Criminoso"
//- Positivo para 8 perguntas, a pessoa deve ser classificada como: "Assassino"
//- Caso contrário, a pessoa deverá ser classificado como: "Inocente"
	cout << "\nClassificação: ";
    if (soma == 4) {
        cout << "Suspeito.\n";
    } else if (soma >= 5 && soma <= 7) {
        cout << "Possível Criminoso.\n";
    } else if (soma =''= 8 ) {
        cout << "Assassino.\n";
    } else {
        cout << "Inocente.\n";
    }

	
}


