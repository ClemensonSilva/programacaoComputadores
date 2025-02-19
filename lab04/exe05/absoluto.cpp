#include <cstddef>
#include <iostream>
using namespace std;
#include <cmath>
int Absoluto(int);

int main(){
    int numero;
    cout << "Digite um número inteiro:  " << endl;
    cin >> numero   ;
    cout << "O valor absoluto é  " << Absoluto(numero)<< endl;
    return 0;
}

int Absoluto(int numero){
    numero = pow(numero,2);

    return  sqrt(numero);
}
