#include <iostream>
using namespace std;

void exibir(int);

int main(){
    exibir(80);
    exibir(114);
    exibir(111);
    exibir(103);
    exibir(67);
    exibir(111);
    exibir(109);
    exibir(112);

}

void exibir(int codigo){
    char carac = codigo;
    cout <<  "O caractere com o código " << codigo << " é " << carac <<endl;
}
