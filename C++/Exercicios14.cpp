//FUP QUE SOLICITE DOIS NUMEROS E VERIFIQUE QUAL É O MAIOR

#include <iostream>
using namespace std;

int num,num1;

main(){
	system("chcp 65001");
	
	cout<<"\nDigite um número \nR: ";
	cin>>num;
	
	cout<<"\nDigite outro número \nR: ";
	cin>>num1;
	
	if(num > num1){
	cout<<"\nO maior número é: "<<num;
    }else if(num1 > num){
    cout<<"\nO maoir número é: "<<num1;
	}else{
	cout<<"\Os números são iguais!";
	}
	
}
