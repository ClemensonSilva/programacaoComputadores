#include <iostream>
using namespace std;

int main(){

    int i = 0, soma = 0;

    while (i < 1000) {
        if(!(i%3) || !(i%5))
            soma+= i;
        i++;
    }
    cout << "A soma dos multiplos de "<< 3 << " menores que 1000 é "<< soma;

}
