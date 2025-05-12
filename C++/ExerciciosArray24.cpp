#include <iostream>
using namespace std;

int numero;
int tabuada[11]; // Array para armazenar os resultados da tabuada

int main() {
	system("chcp 65001");
	system("cls");

    cout<<"\nDigite um número para multiplicar: ";
    cin>>numero;

    // Preenchendo o array com os resultados
    for (int i = 0; i <= 10; i++) {
    tabuada[i] = numero * i;
    }

    // Imprimindo a tabuada
    cout<<"\nTabuada do "<<numero<< ":\n";
    for (int i = 0; i <= 10; i++) {
    cout<<numero<< " x " <<i<< " = "<<tabuada[i]<<"\n";
    }
}