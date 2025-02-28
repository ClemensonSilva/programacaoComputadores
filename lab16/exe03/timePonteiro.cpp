#include <iostream>
using namespace std;

int main(){

    char timeJogador[15];
    int inicioTime;
    char *ptr;

    cout << "Digite jogador/time: ";
    cin >> timeJogador;

    for (int i = 0; i < size(timeJogador); i++) {
        if(timeJogador[i] == '/'){
            ptr = &timeJogador[i+1];
            inicioTime = i;
        }
    }

    cout << "O nome do jogador tem " <<  inicioTime << " letras" <<endl;
    cout<< "O nome do time é: " << ptr <<endl;

}
