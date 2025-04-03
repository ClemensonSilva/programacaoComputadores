#include <iostream>
using namespace std;

char charada(char , int);
int main(){
    int numero;
    char carac;
    cout << "Digite o caractere e um numero inteiro: " ;
    cin>> carac >> numero;
    cout << "Caractere retornado: " << charada(carac, numero) << endl;

    cout << "Digite o caractere e um numero inteiro: " ;
    cin>> carac >> numero;
    cout << "Caractere retornado: " << charada(carac, numero) << endl;

    cout << "Digite o caractere e um numero inteiro: " ;
    cin>> carac >> numero;
    cout << "Caractere retornado: " << charada(carac, numero) << endl;

    cout << "Digite o caractere e um numero inteiro: " ;
    cin>> carac >> numero;
    cout << "Caractere retornado: " << charada(carac, numero) << endl;

    cout << "Digite o caractere e um numero inteiro: " ;
    cin>> carac >> numero;
    cout << "Caractere retornado: " << charada(carac, numero) << endl;

    cout << "Digite o caractere e um numero inteiro: " ;
    cin>> carac >> numero;
    cout << "Caractere retornado: " << charada(carac, numero) << endl;

}

char charada(char carac, int numero){
    return carac + numero;
}
