#include <iostream>
using namespace std;

const int MAX_PESOS = 180;
int pesos[MAX_PESOS],total,contador;

main(){
    system("chcp 65001");

	do {
    cout << "Digite um peso: ";
    cin >> pesos[contador];

    total += pesos[contador];
    contador++;
    if (contador >= MAX_PESOS) {
    cout << "Limite de armazenamento atingido!";
    }

    } while (total <= 180);

    cout<<"\nPeso máximo de 180KG atingido ou ultrapassado.";
    // Mostrando os pesos digitados
    cout<<"\nPesos digitados: \n";
    for (int i = 0; i < contador; i++) {
        cout<<pesos[i]<<"\n";
    }

    cout<<"\nPeso total: "<<total<< "kg";
	
}	