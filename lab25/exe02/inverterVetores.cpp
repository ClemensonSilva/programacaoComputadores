#include <iostream>
using namespace std;
void mostrar(const double*, int tam);
void inverter(const double*, int tam);
int preencher( double*, int tam);
int main(){
    int tam = 10;
    double valores[tam];
    tam = preencher(valores,  tam);
    mostrar(valores,  tam);
}

void mostrar(const double *ptr, int tam){
    for (int i = 0 ; i < tam; i++) {
        cout << ptr[i] << " \n";
    }
}

void inverter(const double *ptr, int tam){
    for (; tam >= 0; tam--) {
        cout << ptr[tam] << " \n";
    }
}

int preencher(double *ptr, int tam){
    cout << "Entre com até 10 valores:\n";
    int i = 0;
    for (; i < tam && ptr[i] ; i++ )
        cin >> ptr[i];
    cout << i;
    return i;
}
