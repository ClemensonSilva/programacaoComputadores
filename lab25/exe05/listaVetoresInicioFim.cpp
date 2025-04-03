#include <iostream>
using namespace std;

int preencher( double*,double*);
void mostrar(const double*, const double*);
void inverter(const  double*, const double*);

int main(){
    int tamanho = 10;
    double vet[tamanho];

    tamanho = preencher(vet, (vet+tamanho));
    mostrar(vet, vet+tamanho);
    cout << "\n";
    inverter(vet, vet+tamanho);
    cout << "\n";
    inverter(&vet[tamanho-1], &vet[tamanho]);
    mostrar(&vet[1], (tamanho-1)+vet);
    mostrar(vet, &vet[1]); // passo o ultimo elemento
    cout << endl;
}

void inverter(const double *inicio, const double *fim){
    for(const double * atualptr = fim -1 ; atualptr >= inicio ; atualptr--)
        cout << *atualptr << " " ;
}
void mostrar(const double *inicio, const double *fim){
    for(const double * atualptr = inicio; atualptr < fim; atualptr++)
        cout << *atualptr << " " ;
}
int preencher( double *inicio,  double *fim){
    double * atualptr = inicio;
    int tamanho = 0;
    // *atualptr acessa o valor armazenado no ponteiro
    while(atualptr != fim &&  cin >> *atualptr){
        atualptr++;
        tamanho++;
    }
    return tamanho;
}
