#include <cstdlib>
#include <iostream>
using namespace std;

void exibir(const int *ptr, int tam);
int main(){
    cout << "Digite pares de valores (0 para encerrar)\n";

    int valor[10];
    int i = 0;
    cin >> valor[0];
    while( i < 10 &&  valor[i] != 0 ){ // condicao mais geral sempre antes
        i++;
        cin >> valor[i];
    }
    exibir(valor, i);
    cout << "Pronto\n";

}

void exibir(const int *ptr, int tam){
    for (int i =0 ; i < tam-1 ; i =i+2) {
        if(!ptr[i] || !ptr[i+1]){

        }
        else if (ptr[i] > ptr[i+1])
            cout << "("<<ptr[i+1]<<","<<ptr[i]<<")\n";
        else
            cout << "("<<ptr[i]<<","<<ptr[i+1]<<")\n";
    }
};
