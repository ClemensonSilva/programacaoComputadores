#include <cstring>
#include <iostream>
using namespace std;

struct Pessoa {
    char nome[25], sexo[10];
    int idade;
};

int main(){
    Pessoa pessoa;
    int soma = 0, contador = 0;

    cin.getline( pessoa.nome, 25, '\n');
    while((strcmp(pessoa.nome, "fim"))){
        cin >> pessoa.sexo;
        cin >> pessoa.idade;
        contador+=1;
        cin.ignore(); // para ignorar valores que estao no buffer, como '\n'
        cin.getline( pessoa.nome, 25, '\n');
        soma += pessoa.idade;
    }
    cout << "A media é " << soma/float(contador) << "\n";

}
