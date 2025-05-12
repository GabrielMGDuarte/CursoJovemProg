#include <iostream>
using namespace std;

int nota,nota1, nota2, media;

main(){
	system("chcp 65001");
	
	cout<<"\nDigite a 1ª nota:";
	cin>>nota;
	cout<<"\nDigite a 1ª nota:";
	cin>>nota1;
	cout<<"\nDigite a 1ª nota:";
	cin>>nota2;
	
	media= (nota+nota1+nota2)/3;
	
	cout<<"\A média das notas é:"<<media;
	
	if (media <= 5) {
	cout<<"\nReprovado";
	}else if (media >= 7){ 	
	cout<<"\nRecuperação";
    }else {
    cout<<"\nAprovado";	
	} 

}

