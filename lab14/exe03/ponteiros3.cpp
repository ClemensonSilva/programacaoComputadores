#include <iostream>
using  namespace std;

void Mais(int *ptr);
int Incrementa(int numero);

int main(){
    int numero;
    cout << "Digite um valor: ";
    cin >> numero;
    int *ptr = &numero;

    Mais(ptr);
    cout << "Resultado após Incrementa: " << Incrementa(numero) << endl;

}

void Mais(int *ptr){
    *ptr = *ptr +1;
    cout << "Resultado após Mais: " << *ptr << endl; // modifica diretamente o valor da variavel na memoria via ponteiros
}

int Incrementa(int numero){
    return numero+1;
}
