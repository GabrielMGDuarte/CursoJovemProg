#include <iostream>
using namespace std;


float capital, taxa, juros, montante;
int tempo;

main() {
    system("chcp 65001"); 

    cout<<"\nDigite o valor do capital: R$ ";
    cin>>capital;
    cout<<"\nDigite a taxa de juros (ex: 5% = 0.05): ";
    cin>>taxa;
    cout<<"\nDigite o tempo da aplicação(em dias): ";
    cin>>tempo;

   
    juros = capital * taxa * tempo;
    montante = capital + juros;

    cout<<"\nCapital informado: R$"<<capital<<"\n";
    cout<<"\nJuros calculados: R$"<<juros<<"\n";
    cout<<"\nMontante final: R$"<<montante<<"\n";

   
}