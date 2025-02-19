#include <iostream>
using namespace std;

int main(){
    int vetor[5] = {1,34,532,123,343};
    int index, novoValor;

    cout << "vetor: " << vetor[0] <<", " <<  vetor[1]<<", "  << vetor[2]<<", " << vetor[3]<<", " << vetor[4] ;

    cout << "Modificar posição: ";
    cin >> index;
    cout << "Alterar posição: ";
    cin >> novoValor;

    vetor[index] = novoValor;

    cout << "vetor: " << vetor[0] <<", " <<  vetor[1]<<", "  << vetor[2]<<", " << vetor[3]<<", " << vetor[4] << endl ;
   return 0;
}
