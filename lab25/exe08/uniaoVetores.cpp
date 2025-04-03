#include <iostream>
using namespace std;

void uniao(int* , int , int*, int);
int main(){
    int tamA = 4, tamB = 4;
    int vetA[tamA] ;
    int vetB[tamB] ;

    cout << "Vetor A: ";
    for(int i = 0; i < tamA; i++)
        cin >> vetA[i];
    cout << "Vetor B: ";
    for(int i = 0; i < tamA; i++)
        cin >> vetB[i];

    uniao(vetA, tamA, vetB, tamB);
}

void uniao(int* vetA, int tamA , int* vetB, int tamB){
    int * uniao = new int[tamA+tamB];
    int i = 0;
    for(; i < tamA; i++)
        uniao[i] = vetA[i];

    for(int j = 0; j < tamB; i++, j++)
        uniao[i] = vetB[j];

    for(int j = 0; j < tamA+tamB; j++)
        cout <<  uniao[j] <<" ";
    delete [ ] uniao;
};
