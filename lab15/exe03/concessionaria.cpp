#include <cstring>
#include <iostream>
using namespace std;

struct carro {
    char modelo[15];
    int anoFabricacao;
    float preco;
};

int main(){
    carro carros[10];
    strcpy(carros[0].modelo, "Vectra");
    carros[0].anoFabricacao = 2009;
    carros[0].preco= 58000;

    strcpy(carros[1].modelo, "Polo");
    carros[1].anoFabricacao = 2008 ;
    carros[1].preco =  45000;

    carro * ptr = &carros[1];

    cout << "Modelo " <<  ptr->modelo <<  "\n Ano fabricacao " <<  ptr->anoFabricacao <<
    "\nPreco " <<  ptr->preco <<  endl;
}
