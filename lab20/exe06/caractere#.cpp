#include <iostream>
using namespace std;

int main(){
    char carac ;
    cout << "Digite um texto (# para finalizar): \n";
    while ((carac = cin.get()) != '#') {
        if (carac == '!')
            cout << "!!"; // para printar duas vezes
        else if (carac == '.')
            cout << '!';
        cout << carac; // cout eh armazenado em um buffer
    }
}
