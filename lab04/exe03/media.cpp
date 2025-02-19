#include <iostream>
using namespace std;

float media(int, int);
int main(){
    int valor1, valor2;
    cout << "Digite um valor inteiro: " <<endl;
    cin >> valor1;

    cout << "Digite outro valor inteiro: " <<endl;
    cin >> valor2;


    cout << "A média dos números é  " <<media(valor1, valor2)<<endl;
}

float media(int valor1, int valor2){
    return float(valor1+valor2)/2;
}
