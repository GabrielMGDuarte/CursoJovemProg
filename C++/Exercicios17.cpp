#include <iostream>
using namespace std;

float nota1, nota2, nota3, media;
    
int main() {
    system("chcp 65001");
    
    cout<<"\nDigite a primeira nota: ";
    cin>>nota1;

    cout<<"\nDigite a segunda nota: ";
    cin>>nota2;

    cout<<"\nDigite a terceira nota: ";
    cin>>nota3;

    media = (nota1 * 2 + nota2 * 3 + nota3 * 5) / (2 + 3 + 5);

    cout<<"\nA média final é: " << media << endl;
}