#include <iostream>
using namespace std;

struct carros {
    char fabricante[15];
    int anoFabricacao;
};

int main(){
    int numeroCarros;
    cout << "Digite o numero de carros para católogo: ";
    cin>> numeroCarros;

    carros *carro = new carros[numeroCarros];

    for (int i = 0; i < numeroCarros ; i++) {
        cout << "Carro #" << i<<endl;
        cout << "Marca: " ;
        cin >> carro[i].fabricante;
        cout << "Ano de fabricacao: " ;
        cin >> carro[i].anoFabricacao;
    }

    cout << "Aqui está sua coleção:"<<endl;

    for (int i = 0; i < numeroCarros ; i++) {
        cout <<  carro[i].fabricante<< " " << carro[i].anoFabricacao << endl;
    }


}
