#include <iostream>
using namespace std;
#include <cmath>
float IMC(float , float );
int main(){
    float altura,massa;
    cout << "Altura: ";
    cin >>altura;

    cout << "Massa: ";
    cin >> massa;

    cout <<"IMC: "<< IMC(altura,massa) << endl;


}

float IMC(float altura, float massa){
    return  massa/pow(altura,2);
}
