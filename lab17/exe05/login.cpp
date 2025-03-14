#include <cstring>
#include <iostream>
#include <iterator>


using namespace std;
struct Login{
    char nome[25], senha[8];
};

bool validarLogin(char [], char []);

int main(){

    Login login, user;

    strcpy(login.nome, "jose");
    strcpy(login.senha, "jose12");

    cout << "Entre com o nome e senha do login: ";
    cin.getline(user.nome, 25);
    cin.getline(user.senha, 8);

if(validarLogin(login.nome, user.nome) && validarLogin(login.senha, user.senha)){
    cout << "Login  e senhas corretos "<< endl;
}else {
    cout << "Login e/ou senhas incorretos "<< endl;
}
}

bool validarLogin(char string1[25], char string2[25]){
    for (int i = 0; i < strlen(string1); i++) {
        if(string1[i]!=string2[i]){
            return false;
        }
    }
    return true;
}
