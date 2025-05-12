//FUP que calcule o imposto de renda de um contribuinte. Os dados de entrada são: o CPF, o número de dependentes e a renda mensal.
//Para cada dependente será feito um desconto de 5% do salário mínimo por dependente. Os valores da alíquota para cálculo do imposto são:

#include <iostream>
using namespace std;

string cpf;
int numDependentes;
double desconto, rendaLiquida, imposto, renMensal, salarioMinimo;

main(){
	system("chcp 65001");
	
	cout<<"\nDigite seu CPF: \nR:";
	cin>>cpf;
	
	cout<<"\nDigite quantos dependentes você tem: \nR:";
	cin>>numDependentes;
	
	cout<<"\nQual sua renda mensal? \nR: R$ ";
	cin>>renMensal;
	
	desconto = numDependentes * 0.05 * salarioMinimo;
	
    rendaLiquida = renMensal - desconto;
    
    double salarios = rendaLiquida / salarioMinimo;
    
    if (salarios <= 2) {
        imposto = 0.0;
    } else if (salarios <= 3) {
        imposto = rendaLiquida * 0.05;
    } else if (salarios <= 5) {
        imposto = rendaLiquida * 0.10;
    } else if (salarios <= 7) {
        imposto = rendaLiquida * 0.15;
    } else {
        imposto = rendaLiquida * 0.20;
    }

    // Saída
    cout << "\nCPF: " << cpf<<"\n";
    cout << "Renda mensal: R$ " <<renMensal<<"\n";
    cout << "Desconto por dependentes: R$ " <<desconto<<"\n";
    cout << "Renda líquida: R$ " <<rendaLiquida<<"\n";
    cout << "Imposto devido: R$ " <<imposto<<"\n";
	
	
}