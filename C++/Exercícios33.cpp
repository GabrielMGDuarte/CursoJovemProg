#include <iostream> // bibilotca para importar função, como cin e cout
using namespace std; 

int op;

// principal função
main(){
	system("chcp 65001");
	system("cls");
	
	cout<<"Informe um número de 1 a 12 para seleção do mês:\n "
	
	    <<"\n[1]Janeiro"
	    <<"\n[2]Fevereiro"
	    <<"\n[3]Março"
	    <<"\n[4]Abril"
	    <<"\n[5]Maio"
	    <<"\n[6]Junho"
	    <<"\n[7]Julho"
	    <<"\n[8]Agosto"
	    <<"\n[9]Setembro"
	    <<"\n[10]Outubro"
	    <<"\n[11]Novembro"
	    <<"\n[12]Dezembro\n \n";
	    cin>>op;
	
	//processamento
	cout<<"\nO mês selecionado é: ";
	switch(op) {
		case 1: {
			//somar 
		    cout<<"Janeiro";
			break;
		}
		case 2: {
			//subtrair
			cout<<"Fevereiro";
			break;
		}
		case 3: {
			cout<<"Março";
			break;
		}
		case 4: {
			cout<<"Abril";
			break;
		}
		case 5: {
			cout<<"Maio";
			break;
		}
		case 6: {
			cout<<"Junho";
			break;
		}
		case 7: {
			cout<<"Julho";
			break;
		}
		case 8: {
			cout<<"Agosto";
			break;
		}
		case 9: {
			cout<<"Setembro";
			break;
		}
		case 10: {
			cout<<"Outubro";
			break;
		}
		case 11: {
			cout<<"Novembro";
			break;
		}
		case 12: {
			cout<<"Dezembro";
			break;	
		}
		default: {
			// op inválida
			break;
		}
		
	}
	
	//saída
	

}