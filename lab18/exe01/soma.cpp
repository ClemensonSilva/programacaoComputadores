#include <iostream>
using namespace std;

int main(){
    int numero,soma = 0;
    cout << "Digite números inteiros";
    do {
        cin >> numero;
        soma+=numero;
        cout << "Soma parcial: " << soma<<endl;
    }while (numero!=0);

    cout << "Programada finalizado"

}
