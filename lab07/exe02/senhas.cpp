#include <iostream>
using namespace std;


int lerSenha();
void alerta();
int main(){
    alerta();
    lerSenha();
    alerta();
}

int lerSenha(){
    int senha;
    cout << "Digite sua senha: ______\b\b\b\b\b\b";
    cin>> senha;
    return senha;
}

void alerta(){
    cout << "\a";
}
