#include <iostream>
using namespace std;

int num, num1, result;
char ope;

main(){
	system("chcp 65001");
	cout<<"Qual operação quer realizar? \n+ - / *\n";
	cin>>ope;
	
	cout<<"\nDigite o 1º número: ";
	cin>>num;
	cout<<"\nDigite o 2º número: ";
	cin>>num1;
	
	if(ope == '+'){
		result = num + num1;
		cout<<"\nO resultado da operação é: "<< result;
	} else if (ope == '-'){
		result = num - num1;
		cout<<"\nO resultado da oporeção é: "<< result;
	}else if (ope == '*'){
		result = num * num1;
		cout<<"\nO resultado da oporação é: "<< result;
	}else if (ope == '/'){
		result = num / num1;
		cout<<"\nO resultado da operação é: "<< result;
    }
		
}