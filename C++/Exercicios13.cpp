#include <iostream>
using namespace std;

int num;


main(){
	system("chcp 65001");
	
	cout<<"Digite um número: ";
	cin>>num;
	
	if(num%2==0){
	cout<<"\n" <<num<<" é Par";
	}else if(num > 0){
	cout<<"\n" <<num<<" é Impar";
		
	}
	
		
	
}