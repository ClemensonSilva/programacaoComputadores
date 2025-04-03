#include <cctype>
#include <fstream>
#include <iostream>
using namespace std;

struct Soldado{
    char nome[20];
    int eliminacoes, morte, nPartidas;
    float taxaEliminacao;
};

void novo(Soldado*);
void atualizar(Soldado*);
void exibir(Soldado*);

int main(){
    ifstream fin;
    Soldado soldado;
    char opcao;
    fin.open("soldado.bin");

    if((fin.is_open()))
        while (fin.read((char*)&soldado, sizeof(soldado)))
            exibir(&soldado);
    else
        novo(&soldado);

    while (opcao != 'S') {
        cout << "\n[N]ovo soldado (sobrescreve o anterior)\n";
        cout << "[A]tualiza soldado (com os dados da última partida)\n";
        cout << "[E]xibe soldado (atual)\n";
        cout << "[S]air\n";
        cin >> opcao;
        opcao = toupper(opcao);

        switch (opcao) {
            case 'N': novo(&soldado);
            case 'A': atualizar(&soldado);
            case 'E': exibir(&soldado);
            case 'S': cout << "Saindo...";
        }
    }

}

void atualizar(Soldado *ptr){
    int eliminacao, mortes;
    cout << "Atualizar: \n";
    cout << "\nEliminacoes: ";
    cin >> eliminacao;
    cout << "\nMortes: ";
    cin >> mortes;

    ptr->eliminacoes += eliminacao;
    ptr->morte += mortes;
    ptr->taxaEliminacao = float(ptr->eliminacoes/float(ptr->morte));
    ptr->nPartidas +=1;


    ofstream fout;
    fout.open("soldado.bin", ios::out | ios::binary);

    if(!(fout.is_open())){
        cout << "ERRO AO ABRI ARQUIVO";
        exit(EXIT_FAILURE);
    }

     fout.write((char*)ptr, sizeof(*ptr));

     fout.close();
     cout << "Atualizado\n: ";


}
void exibir(Soldado *ptr){
        cout << "Nome: "<< ptr->nome;
        cout << "\nNumero de partidas: "<< ptr->nPartidas;
        cout << "\nEliminacoes: "<< ptr->eliminacoes;
        cout << "\nMorte: "<< ptr->morte;
        cout << "\nTaxa de eliminacoes: "<< ptr->taxaEliminacao;
        cout << endl;
}



void novo(Soldado *ptr){
    cout << "Informacoes do soldado: "
    <<"\nNome: ";
    cin.ignore();
    cin.getline(ptr->nome, 20);
    cout << "\nNumero de partidas: ";
    cin >> ptr->nPartidas;
    cout << "\nEliminacoes: ";
    cin >> ptr->eliminacoes;
    cout << "\nMortes: ";
    cin >> ptr->morte;

    ptr->taxaEliminacao = float(ptr->eliminacoes/float(ptr->morte));

    ofstream fout;

    fout.open("soldado.bin", ios::out | ios::binary);

    if(!(fout.is_open())){
        cout << "ERRO AO ABRI ARQUIVO";
        exit(EXIT_FAILURE);
     }

     fout.write((char*)ptr, sizeof(*ptr));

     fout.close();
     cout << "Pronto\n: ";

}
