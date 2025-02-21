#include <iostream>
using namespace std;


int main(){
    char nome[13];
    char sobrenome[13];

    cout << "Digite seu nome e sobrenome: ";
    cin >> nome;
    cin >> sobrenome;

    cout << "Bom dia Sr, " << sobrenome << ". Ou devo chamá-lo de " << nome << "?"<< endl;
}
