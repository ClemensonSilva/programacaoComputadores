#include <cstring>
#include <iostream>
using namespace std;

union CorCarro{
    unsigned numero;
    char codigoCor[10];
    char nomeCor[15];
} ;

struct Carro {
    char modelo[13];
    int anoFabricacao;
    CorCarro cor;
    float preco;
};

int main(){
    Carro carros[10];

    strcpy(carros[0].modelo, "Vetra");
    carros[0].anoFabricacao= 2009;
    strcpy(carros[0].cor.nomeCor, "azul");
    carros[0].preco= 58000;

    strcpy(carros[1].modelo, "Polo");
    carros[1].anoFabricacao= 2008;
    strcpy(carros[1].cor.nomeCor, "preto");
    carros[1].preco= 45000;

    cin.getline(carros[2].modelo,13);
    cin >> carros[2].anoFabricacao;
    cin.ignore();
    cin.getline(carros[2].cor.nomeCor,15);
    cin>> carros[2].preco;

    for (int i =0 ; i <=2 ; i++) {

        cout << "qnDados dos carros: \n";
        cout << "\n Modelo:\n " << carros[i].modelo;
        cout << "\n Ano de fabricação:\n " << carros[i].anoFabricacao;
        cout << "\n Cor do carro:\n " << carros[i].cor.nomeCor;
        cout << "\n Preço:\n " << carros[i].preco << endl;


    }


}
