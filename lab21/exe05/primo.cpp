#include <iostream>
using namespace std;

int main(){
    int num;
    // valida o input
    for( ; num <= 0 ; cin >> num){
        cout << "Digite um numero maior que 0: ";
    }

    for (int i = 2; i < num; i++) {
        if(!(num%i)){ // se o resto for 0, entao faz um toggle e torna o zero em 1 e o if é chamado
            cout << "Não eh primo";
            break;
        }
        else if(num-i==1) // se chegar no antecessor de n e o break nao foi chamado, so significa que ele nao eh primo
            cout << "É primo";
    }


}
