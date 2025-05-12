#include <iostream>
using namespace std;

float velMaxima,velMotorista,comparativo;

main(){
	system("chcp 65001");
	
	cout<<"\nDigite a velocidade máxima permitida. \nR:";
	cin>>velMaxima;
	cout<<"\nQual a velocidade praticada pelo motorista? \nR:";
	cin>>velMotorista;
	
	comparativo = velMotorista - velMaxima;
	
	 if (comparativo <= 0) {
        cout << "O motorista não receberá multa.";
    } else if (comparativo <= 0.2 * velMaxima) {
        cout << "O motorista receberá uma multa de R$ 102,00.";
    } else {
        cout << "O motorista receberá uma multa de R$ 500,00.";
    }


}
	





