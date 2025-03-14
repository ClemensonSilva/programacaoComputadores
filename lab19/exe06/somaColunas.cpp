#include <iostream>
using namespace std;

int main(){
    int soma[4] = {0,0,0,0}, mat [4][4] {
        {3, 1, 5, 5},
        {1, 5, 5, 6},
        {2, 3, 4, 5},
        {4, 9, 1, 8},
    };

    for (int i = 0 ; i < 4 ; i++) {
        for (int j = 0 ; j < 4 ; j++) {
            soma[i] += mat[j][i];
        }
    }
    cout << "A  soma das colunas é: " << soma[0] << " " <<soma[1] << " " <<soma[2] << " " <<soma[3]  ;
}
