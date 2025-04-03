#include <iostream>
using namespace std;
int preencher(double *,int);
void mostrar(const double*,int);
void inverter(const double*,int);

int main(){
    int tamanho = 10;
    double vet[tamanho];

    tamanho = preencher(vet, tamanho);
    mostrar(vet, tamanho);
    cout << "\n";
    inverter(vet, tamanho);
    cout << "\n";
    inverter(&vet[tamanho-1], 1); // passo o ultimo elemento
    mostrar(&vet[1], tamanho-2);
    inverter(&vet[0], 1);
    cout << endl;
}

void inverter(const double *ptr, int tamanho){
    for(int i = tamanho - 1; i >= 0; i--)
        cout << ptr[i] << " " ;
}
void mostrar(const double *ptr, int tamanho){
    for(int i = 0; i < tamanho; i++)
        cout << ptr[i] << " " ;
}
int preencher(double *ptr, int tamanho){
    int i = 0;

    while(i < tamanho && cin >> ptr[i] ){
        i++;
    }
    return i;
}
