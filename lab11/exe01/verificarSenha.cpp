#include <cstring>
#include <iostream>
using namespace std;


int main(){
    char suasenha[10] = "miguel30";
    char senha[10];

    cout << "digite sua senha: ";
    cin >> senha;

    if (strcmp(suasenha, senha)==0 )
        cout << "Senha correta";
    else
        cout << "Senha incorreta";


    return 0;
}
