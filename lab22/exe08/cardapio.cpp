#include <cstring>
#include <iostream>
using namespace std;

struct Prato{
    char nome[15];
    float preco;
};

void mostrarCardapio(Prato*);

int main(){

    Prato  pratos [3];
    char continuar ;
    int conta = 0, opcao;

    strcpy(pratos[0].nome , "sopa" );
    pratos[0].preco = 23;
    strcpy(pratos[1].nome , "Chocolate quente");
    pratos[1].preco =  12;
    strcpy(pratos[2].nome , "Hambuerguer");
    pratos[2].preco = 18 ;

    mostrarCardapio(pratos);
    cout << "Deseja pedir algo mais? [s/n]\n";
    cin >> continuar;

    while (continuar == 's' || continuar == 'S'){
        cin >> opcao;

        mostrarCardapio(pratos); // posso passar como parametro pratos OU &pratos[0]
        cout << "Deseja pedir algo mais? [s/n]\n";
        conta+=pratos[opcao-1].preco; // soma do preco dos valores
        cin >> continuar;
    }

    cout << "A conta deu: " << conta;
}


// recebe o endereco do vetor de cardapios. Nao confundi com receber um elemento do vetor
// cardapio, pois neste caso a notacao para acessar os atributos seria ptr->nome e ptr->preco.
void mostrarCardapio(Prato *ptr)
{
    int i = 0;
    cout << "Aqui está o cardápio:\n";
    cout << "Cardárpio\n---------\n";
    while ( i < 3) {
    cout << "#"<<i+1<< "\nNome: " << ptr[i].nome << " ----- Preco: " << ptr[i].preco << endl;
    i++;
}
}
