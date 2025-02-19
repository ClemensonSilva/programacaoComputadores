#include <iostream>
using namespace std;


int main(){
    char suasenha[10] = "miguel30";
    char senha[10];

    cout << "digite sua senha: ";
    cin >> senha;

    if (suasenha[0]==senha[0] && suasenha[0]==senha[0] && suasenha[0]==senha[0]) {
        cout << "Senha correta";
    }else{
        cout << "Senha incorreta";
    }

    return 0;
}
