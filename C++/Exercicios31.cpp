#include <iostream> // bibilotca para importar função, como cin e cout
using namespace std; 

int op;

// principal função
main(){
	system("chcp 65001");
	system("cls");
	
	cout<<"Informe o combustível que quer usar:\n "
	
	    <<"\n[1]Álcool\n"
	    <<"\n[2]Gasolina\n"
	    <<"\n[3]Diesel\n";
    cin>>op;
	
	
//	cout<<"\nInforme a operação desejada\n[+] - Somar \n[-] - Subtrair \n[*] - Multiplicar \n[/] - Dividir\n";
//	cin>>op;
	
	//processamento
	cout<<"\nO combustível selecionado é: ";
	switch(op) {
		case 1: {
			//somar 
		    cout<<"Álcool";
			break;
		}
		case 2: {
			//subtrair
			cout<<"Gasolina";
			break;
		}
		case 3: {
			cout<<"Diesel";
			break;
		}
		default: {
			// op inválida
			break;
		}
		
	}
	
	//saída
	

}