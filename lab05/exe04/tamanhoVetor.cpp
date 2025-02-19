#include <iostream>
using namespace std;
#include <cmath>

float norma(float,float);
int main(){
    float Ox, Oy;
    cout << "Digite as coordenadas do vetor: " << endl;
    cout << "x: ";
    cin >>Ox;
    cout << "y: ";
    cin >> Oy;

    cout << " O tamanho do vetor é " << norma(Ox, Oy) << endl;

    return 0;
}

float norma(float Ox, float Oy){
    return sqrt(pow(Ox,2) + pow(Oy,2));
}
