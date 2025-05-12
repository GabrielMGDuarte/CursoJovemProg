#include <iostream>
using namespace std;

float altura,imc;
char genero;

main(){
	system("chcp 65001");
	
	cout<<"\nQual seu genero? \nMasculino[M] \nFeminino[F]\nR:";
	cin>>genero;
	
	cout<<"\nDigite sua Altura: ";
	cin>>altura;
	

   if  (genero == 'M' || genero == 'm') {
    	imc = (72.7*altura)-58;
    	cout<<("\nSeu IMC é: ")<<imc;
   	}else if (genero == 'F' || genero == 'f')  {
   		imc = (62.1*altura)-44.7;
   		cout<<("\nSeu IMC é: ")<<imc;
	   }
}