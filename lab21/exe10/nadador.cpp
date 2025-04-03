#include <cstring>
#include <iostream>
using namespace std;

struct Nadador{
    char nome[15], categoria[10];
    int idade;

};

int main(){
    Nadador nadador;
    cout << "Nome: ";
    cin.ignore();
    cin.getline(nadador.nome, 15);
    cout << "Idade: ";
    cin >> nadador.idade;

    if (nadador.idade >=5 && nadador.idade <= 7) {
        strcpy(nadador.categoria, "Infantil");
    }
    else if (nadador.idade >= 8 && nadador.idade <= 10) {
        strcpy(nadador.categoria, "Juvenil");
    }
    else if (nadador.idade >=11 && nadador.idade <= 15) {
        strcpy(nadador.categoria, "Adolescente");
    }
    else if(nadador.idade > 15 && nadador.idade <= 30) {
        strcpy(nadador.categoria, "Adulto");
    }
    else if (nadador.idade > 30 ) {
        strcpy(nadador.categoria, "Sênior");
    }

    cout << "Categoria: " << nadador.categoria<<endl;
}
