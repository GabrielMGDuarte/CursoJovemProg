#include <iostream>
using namespace std;

float ipi, valor1, valor2, valorTotal;
int cod1, quant1, cod2, quant2;


main() {
	system("chcp 65001");

    cout<<"\nDigite a porcentagem do IPI: ";
    cin>>ipi;

    cout<<"\nDigite o código da peça 1: ";
    cin>>cod1;
    cout<<"\nDigite o valor unitário da peça 1: ";
    cin>>valor1;
    cout<<"\nDigite a quantidade da peça 1: ";
    cin>>quant1;

    cout<<"\nDigite o código da peça 2: ";
    cin>>cod2;
    cout<<"\nDigite o valor unitário da peça 2: ";
    cin>>valor2;
    cout<<"\nDigite a quantidade da peça 2: ";
    cin>>quant2;

    valorTotal = (valor1*quant1 + valor2*quant2)*(ipi/100 + 1);

    
    cout<<"\nO valor total a ser pago é: R$ "<<valorTotal;

    
}