#include <iostream>
using namespace std;

int main(){
    int pesos[3] = {2,3,4};
    int notas[3];
    float media ;

    cout << "Digite suas notas: ";

    cout << "N1: ";
    cin >> notas[0] ;

    cout << "N2: ";
    cin >> notas[1] ;

    cout << "N3: ";
    cin >> notas[2] ;

    media = pesos[0]*notas[0] + pesos[1]*notas[1] + pesos[2]*notas[2];

        cout << "Média: " << media<<endl;







   return 0;
}
