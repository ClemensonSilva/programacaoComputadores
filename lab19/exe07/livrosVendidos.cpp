#include <iostream>
using namespace std;

int main(){
    const char * meses[12] = {
        "Janeiro","Fevereiro","Marco","Abril",
        "Maio","Junho","Julho","Agosto","Setembro","Outubro",
        "Novembro","Dezembro"
    };

    int vet[3][12];
    for (int i = 0 ; i < 3; i++) {
        cout << "Digite o número de livros vendidos no " << i <<"° ano: \n";
        for (int j = 0 ; j < 12; j++) {
            cout << meses[j] << ": ";
            cin >> vet[i][j]; // preenchendo os meses
        }
    }
    int soma[3] = {0, 0, 0}, total = 0;

    cout << "Total de vendas\n";
    for (int i = 0 ; i < 3; i++) {
        for (int j = 0 ; j < 12; j++) {
            soma[i]+=vet[i][j] ; // soma do ano
        }
        total += soma[i];
        cout << ++i << "o ano: " << soma[i] << "\n";
    }

    cout << "Nos três anos foram vendidos " << total <<" livros.";
}
