#include <iostream>
using namespace std;

int numeros[10]; // Array para armazenar os 10 números
int negativos = 0;

int main() {
    system("chcp 65001");
    system("cls");

    for (int i = 0; i < 10; i++) {
    cout<<"\Digite o "<< i + 1<<"º número: ";
    cin>>numeros[i];

    if(numeros[i] < 0) {
    negativos++;
    }
    }

    cout<<"\nQuantidade de números negativos: "<<negativos;
    
}