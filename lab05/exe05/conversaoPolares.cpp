#include <iostream>
using namespace std;
#include <cmath>

float convPgraus(float, float);

int main(){
    float Ox, Oy;
    cout << "Digite as coordenadas do vetor:" <<endl;

    cout << "x: " ;
    cin >> Ox;

    cout << "y: " ;
    cin >> Oy;

    cout << "O ângulo do vetor é "<<convPgraus(Ox, Oy) << " graus." << endl;

}

float convPgraus(float Ox, float Oy){
    float pi = 3.14;
    float angulo = atan2(Oy,Ox); // radianos

    return angulo*(180/pi);
}
