#include <iostream>
using namespace std;

int main(){
    int tamanho;

    cout << "Numero de valores para armazenar: ";
    cin >> tamanho;

    int *numeros = new int[tamanho];

    cout << "Quais os valores?  ";
    for (int i =0; i < tamanho; i++) {
        cin >> numeros[i];
    }
    cout << "Os valores " ;
    for (int i =0; i < tamanho; i++) {
        cout  <<  numeros[i] ;
    }
    cout  << " foram armazenados." ;

    delete numeros;


}
