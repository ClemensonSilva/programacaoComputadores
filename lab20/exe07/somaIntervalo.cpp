#include <iostream>
using namespace std;

int main(){
    int inicio, fim, soma = 0, auxI, auxF;

    cout << "Digite dois números inteiros: ";
    cin >> inicio >> fim;
    auxI = inicio, auxF = fim;
    // segundo valor maior que o primeiro
    while ((fim-1) > inicio) {
        fim--;
        soma+= fim;
    }
    // primerio valor maior que o segundo
    while ( (inicio-1) > fim) {
        fim++;
        soma += fim;
    }

    cout << " A soma de todos os valores entre os valores "<< auxI<< " e "<< auxF<<"é: " << soma << endl;

}
