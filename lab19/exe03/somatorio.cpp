#include <iostream>
using namespace std;

int main(){
    int vet [] = {0, 1, 0, 0, 1, 0, 1, 1, 1, 1};
    int soma = 0, i =0;
    while( i <= 9){
        soma += vet[i++];
    }
    cout << "A soma é " << soma << "\n";
}
