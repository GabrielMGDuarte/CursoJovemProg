#include <iostream> // bibilotca para importar função, como cin e cout
#include <cctype>
using namespace std; 

char op;

// principal função
main(){
	system("chcp 65001");
	system("cls");
	
	cout<<"\nInforme uma letra:\n";
    cin>>op;
	
	op=toupper(op);

	//processamento
	
	switch(op) {
		case 'A': {
		    cout<<"\nÉ uma vogal";
			break;
		}
		case 'E': {
			cout<<"\nÉ uma vogal";
			break;
		}
		case 'I': {
			cout<<"\nÉ uma vogal";
			break;
		}
		case 'O': {
			cout<<"\nÉ uma vogal";
			break;
		}
		case 'U': {
			cout<<"\nÉ uma vogal";
			break;
		}
		default: {
			cout<<"\nÉ uma consoante";
			break;
		}
		
	}
	
	//saída
	

}