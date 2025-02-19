#include <iostream>
using namespace std;
#include "convCoordPolares.h"

int main(){
    float Ox, Oy, normaV, angulo;

    cout << "Digite as coordenadas do vetor: " <<endl;

    cout << "x: " ;
    cin >> Ox;

    cout << "y" ;
    cin >> Oy;

    normaV = normaVetor(Ox, Oy);
    angulo = radPgraus(Ox, Oy);

    cout << "Coordenadas polares do vetor:" << endl;
    cout << "(" << normaV << angulo << ")" <<endl;

    return 0;


}
