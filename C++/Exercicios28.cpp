#include <iostream>
using namespace std;

int numero, negativos = 0;

int main() {
	system("chcp 65001");

    
    for (int i = 1; i <= 10; i++) {
    cout << "Digite o " << i << "º número: ";
    cin >> numero;
    
    if (numero < 0) {
    negativos++; // Conta números negativos
    }
    }

    cout<<"\nQuantidade de números negativos: " << negativos;

   
}