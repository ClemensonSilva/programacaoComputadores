#include <iostream>
using namespace std;
char codificar(char);
char decodificar(char);

int main(){
    char carac;
    cout << "Digite o caractere ";
    cin >> carac;

    cout << "Caractere codificado " << codificar(carac) << endl;
    cout << "Caractere decodificado " << decodificar(codificar(carac))<< endl;
    cout << "Caractere Inicial " << carac << endl  ;


    return 0;
}

char codificar(char carac){
    return carac+3;
}

char decodificar(char carac){
    return carac-3;
}
