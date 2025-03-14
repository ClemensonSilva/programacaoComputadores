#include <iostream>
using namespace std;

void exibirV(int []);

int main(){
    int mat[2][3] =
    {
        {1,2,3},
        {4,5,6}
    };
    cout << mat[0][0] << endl; // mostra o valor na posicao[0][0]
    cout << mat[0] << endl; // endereco do vetor linha
    cout << &mat[0][0] << endl; // mostra o endereco do 1a vetor linha contido na matriz
    // Q 04:

    exibirV(mat[0]);
    cout << sizeof(mat[0]) << "e" <<sizeof(*mat);

}


void exibirV(int vetor[]){
    for (int i = 0; i < 3; i++) {  // nao achei uma maneira de printar todos
        cout << vetor[i];
    }
    cout << "\n";
}
