#include <iostream>

using namespace std;
int somaIntervalo(int , int );

int main(){
    int inicio, fim;
    cout << "Digite o inicio e fim do intervalo: ";
    cin >> inicio >> fim;

    cout << "Soma no intervalo: "<<somaIntervalo(inicio, fim);

}

int somaIntervalo(int inicio, int fim){
    int soma = 0;
    for (int i = inicio; i<=fim; i++) {
        soma +=i;
    }
    return soma;
}
