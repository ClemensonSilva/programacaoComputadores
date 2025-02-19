#include <iostream>
using namespace std;
#include <cmath>

float quadrado(float);
float cubo(float);

int main(){
    float numero;

    cout << "Digite um valor: " <<endl;
    cin >> numero;

    cout << "Quadrado = "<< quadrado(numero)<<endl ;

    cout <<"Cubo = " << cubo(numero)<<endl ;

    cout << "Cubo do quadrado = "<< cubo(quadrado(numero)) <<endl ;




    return 0;
}

float quadrado(float numero){
    return pow(numero,2);
}
float cubo(float numero){
    return pow(numero,3);
}
