#include <iostream>
using namespace std;
#include <cmath>
float volumeCilindro(float, float);

int main(){
    float altura, raioB;
    cout << "Entre com o raio da base: " << endl;
    cin >> raioB;

    cout << "Entre com a altura:" << endl;
    cin >> altura;

    cout << "O volume do cilindro é "<<volumeCilindro( altura, raioB) << endl;
    return 0;
}

float volumeCilindro(float altura, float raioB ){
    float pi = 3.14159;

    return  pow(raioB,2)*altura*pi;
}
