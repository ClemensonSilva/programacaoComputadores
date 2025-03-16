#include <iostream>
using namespace std;

int main(){
    int vel [10], velMax =  80, i = 0, cont = 0, soma = 0;
    cout << "As últimas 10 velocidades registradas: \n";

    while ( i < 10) {
        cin >> vel[i];
        i++;
    }

    while (i >= 0) {
        if(vel[i] > velMax){
            soma+= (vel[i] - 80)*8;
            cout << vel[i]<<" Km/h excede o limite = multa de R$" <<  (vel[i] - 80)*8 << endl;
            cont++;
        }
        i--;
    }

    cout << cont <<" carros foram multados em um valor total de R$" <<  soma <<endl;
}
