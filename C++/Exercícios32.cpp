#include <iostream> // bibilotca para importar função, como cin e cout
using namespace std; 

int op;

// principal função
main(){
	system("chcp 65001");
	system("cls");
	
	cout<<"Informe um número de 1 a 7:\n "
	
	    <<"\n[1]Segunda-feira\n"
	    <<"\n[2]Terça-feira\n"
	    <<"\n[3]Quarta-feira\n"
	    <<"\n[4]Quinta-feira\n"
	    <<"\n[5]Sexta-feira\n"
	    <<"\n[6]Sábado\n"
	    <<"\n[7]Domingo\n \n";
    cin>>op;
	
	
	//processamento
	cout<<"\nO dia da semana selecionado é: ";
	switch(op) {
		case 1: { 
		    cout<<"Segunda-feira";
			break;
		}
		case 2: {
			cout<<"Terça-feira";
			break;
		}
		case 3: {
			cout<<"Quarta-feira";
			break;
		}
		case 4: {
			cout<<"Quinta-feira";
			break;
		}
		case 5: {
			cout<<"Sexta-feira";
			break;
		}
		case 6: {
			cout<<"Sábado";
			break;
		}
		case 7: {
			cout<<"Domingo";
			break;
		}
		default: {
			// op inválida
			break;
		}
		
	}
	
	//saída
	

}