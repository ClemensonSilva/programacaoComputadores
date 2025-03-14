#include <iostream>
using namespace std;

int main(){
    char ASC[16][16];

    for (int i = 0; i < 16; i++) {
        for (int j = 0; j < 16; j++) {
            ASC[j][i] = j; // 0 -15 ... primeira coluna
        }
    }

    int linhas = 2 , colunas = 3;
    int ** mat = new int *[linhas]; // mat aponta para um array de ponteiros intiros.
    // declarando um bloco com um numero de linhas dinamicamente

    // alocando os vetores dentro da matriz
    for(int i = 0 ; i < linhas ; i++){
        for(int j = 0 ; j < colunas; j++){
            mat[i] = new int[colunas]; // em cada linha do bloco eh alocada
            // um numero x de colunas
        }
    }







    // deletando espaco alocado
    for(int i = 0 ; i < linhas ; i++)
        delete mat[i] ; // primeiro desaloca os vetores
    delete [] mat ; // desaloca o bloco inteiro
}
