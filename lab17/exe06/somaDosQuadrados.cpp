#include <iostream>
using namespace std;

int main(){

    int somaQuadrados = 0, quadradoSoma;

    for (int i = 1; i <= 100; i++) {
        somaQuadrados += i*i;
    }
    for (int i = 1; i <= 100; i++) {
        quadradoSoma += i;
    }
    quadradoSoma = quadradoSoma*quadradoSoma;
    cout << "Diferenca entre a o quadrado da soma e a soma dos quadrados é  = " << quadradoSoma - somaQuadrados << endl;
}
