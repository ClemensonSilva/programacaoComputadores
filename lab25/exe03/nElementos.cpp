#include <iostream>
using namespace std;

void contagem(const  int*, const int*);
int main(){
    int vet [11] = { 0, 1, 0, 1, 0, 1, 1, 1, 0, 1, 0 } ;
    contagem(vet, vet+11);
}

void contagem(const int * inicio, const int * fim){
    int zeros = 0, uns = 0;
    for (const int * atual = inicio; atual < fim; atual++) {
        if(*atual== 0)
            zeros++;
        else if(*atual==1)
            uns++;
    }
    cout << "Existem "<< zeros <<" zeros e " << uns << " uns na faixa indicada.\n";
}
