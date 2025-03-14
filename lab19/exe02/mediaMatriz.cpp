#include <iostream>
using namespace std;

int main(){
    int mat [5][5] {
        {38, 51, 50, 56 ,98},
        {17, 65, 25, 62, 54},
        {23, 23, 64, 45, 92},
        {41, 39, 19, 68, 87},
        {65, 10, 12, 22, 13},
    };
    int soma = 0, i, j;
    for ( i = 0; i<5; i++) {
        for ( j = 0 ; j < 5; j++) {
            soma+=mat[i][j];
        }
    }
    cout << "A média é " << soma / float(i*j) << "\n";
}
