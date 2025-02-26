#include <iostream>
#include <string>
using namespace  std;

enum estado {VAZIA, CHEIA};
enum alimento {SOPA, CANJA};

struct Tigela {
    estado situacao;
    alimento comida;
};
void Fome(Tigela * ); // nao pode esquecer de passar um ponteiro no prototipoo tambem
void estadoTigela(Tigela);

int main(){
    Tigela tigela;
    tigela.situacao = CHEIA;
    tigela.comida = CANJA;
    Tigela *ptr = &tigela; // aponta para o endereco da variavel tigela
    cout << "Endereco " << &tigela<<endl;
    estadoTigela(tigela);
    Fome(ptr);
    estadoTigela(tigela);
}

void estadoTigela(Tigela tigela){
    if(tigela.situacao)
        cout << "Antes da janta: Cheia"  << endl;
    else
        cout << "Depois da janta:  Vazia"  << endl;
}
void Fome(Tigela * ptr){
    ptr->situacao = VAZIA; // altera o estado da tigela para vazia
}
