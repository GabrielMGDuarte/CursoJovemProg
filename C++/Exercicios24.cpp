#include <iostream>
using namespace std;


int numero;

main() {
	system("chcp 65001");
	
	cout<<"Digite um número para multiplicar: ";
	cin>>numero;
	//inicio; condição;passo
	
	for(int i = 0; i<=10;i++) {
		cout<<i<<"x"<<numero<<"="<<numero * i<<"\n";	
	}
    

}