#include <iostream>
using namespace std;

int main(){
    int valor, imposto = 0;

    while (valor >= 0) {
        if(valor <= 5000){
            imposto = 0;
            valor -=5000;
        }
        else if(valor <= 10000){
            imposto+= 10000*0.1;
            valor-=10000;
        }

    }
}
