#include <iostream>
using namespace std;


int numero;

main() {
	system("chcp 65001");
	
	do{
	cout<<"Digite um número: ";
	cin>>numero;
	
	if (numero == 1) {
            cout << "Batata\n";
        }
    } while (numero == 1);
//	}while(numero != 1); // enquanto for verdade ele vai fazer o looping
//	cout<<"Batata";   

}