#include <iostream>
using namespace std;

const int TAM = 15;
int numeros[TAM];

int main() {
    system("chcp 65001");
    system("cls");

    // Preenchendo o array com números aleatórios entre 0 e 100
    for (int i = 0; i < TAM; i++) {
    numeros[i] = rand() % 101; // números entre 0 e 100
    }
    // Exibindo os números gerados
    cout <<"Números aleatórios gerados:\n";
    for (int i = 0; i < TAM; i++) {
        cout<<numeros[i]<<"\n";
    }


}