#include <iostream>
using namespace std;


int main(){
    int saque, i = 0, resto = 0, nNotas, notas[4] = {50, 20, 10, 5};
    cout << "Caixa Eletrônico\n ----------------\n";
    // validando saque
    do{
        cout << "Saque: ";
        cin >> saque;
    }
    while(saque < 0);
    cout << saque/notas[0];
    while (saque%notas[i]) {
        resto = saque%notas[i];
        nNotas = saque/notas[i];
        saque -= saque*resto;
        cout << nNotas << " cédula(s) de R$"<< notas[i] <<"\n";
    }


}
