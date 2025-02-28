#include <iostream>
using namespace std;

struct locais {
    char nome[15], pais[15], continente[15];
};

int main()
{
    int nLocais;

    cout<<"Digite o numero de locais que deseja visitar: "  ;
    cin>>nLocais;

    locais *local = new locais[nLocais];

    for (int i = 0 ; i < nLocais; i++) {
        cout << "Digite o nome do local, seu pais e continente, respectivamente: " ;
        cin.ignore();
        cin.getline(local[i].nome,15);
        cin.getline(local[i].pais,15);
        cin.getline(local[i].continente,15);
    }

    for (int i = 0 ; i < nLocais; i++) {
        cout << "Nome do local: " << local[i].nome << "\nNome do pais: " << local[i].pais <<
        "\nContinente: " << local[i].continente;
    }
}
