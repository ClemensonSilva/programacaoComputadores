#include <iostream>
using namespace std;
#include <cmath>

int main(){
    float eixoXp, eixoYp, eixoXq, eixoYq, distancia;

    cout << "Ponto P: " << endl;
    cin >> eixoXp >> eixoYp;

    cout << "Ponto Q: " << endl;
    cin >> eixoXq >> eixoYq;

    distancia = pow(eixoXq-eixoXp,2) + pow(eixoYq-eixoYp,2);
    distancia = sqrt(distancia);

    cout << "A distância entre P e Q é: " <<  distancia << endl;
    return 0;
}
