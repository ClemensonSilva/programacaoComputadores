#include <cstring>
#include <iostream>
using namespace std;

struct carro {
    char modelo[15];
    int anoFabricacao;
    float preco;
};

void exibir(carro carro[]);

int main(){
    int numeroCarros;

    cout << "Numero de carros para cadastro: " ;
    cin >> numeroCarros;
    carro *carros = new carro[numeroCarros];

    cout << "Entre com os dados de 2 carros: \n";
    cin.ignore();
    cout << "Modelo: ";
    cin.getline(carros[0].modelo, 15);

    cout << "\nAno Fabricação: ";
    cin >>carros[0].anoFabricacao ;

    cout << "\nPreco: ";
    cin >> carros[0].preco;

    cin.ignore();
    cout << "Modelo: ";
    cin.getline(carros[1].modelo, 15);

    cout << "\nAno Fabricação: ";
    cin >>carros[1].anoFabricacao ;

    cout << "\nPreco: ";
    cin >> carros[1].preco;


    exibir(carros);

}

void exibir(carro carro[]){
    cout << "Modelo: " <<  carro[0].modelo <<  "\nAno fabricacao: " <<  carro[0].anoFabricacao <<
        "\nPreco: " <<  carro[0].preco <<  endl;

    cout << "Modelo " <<  carro[1].modelo <<  "\n Ano fabricacao " <<  carro[1].anoFabricacao <<
    "\nPreco " <<  carro[1].preco <<  endl;

    cout << "O valor total é " << carro[0].preco + carro[1].preco <<endl;
}
