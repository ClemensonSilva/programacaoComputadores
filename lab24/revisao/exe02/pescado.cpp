#include <fstream>
#include <ios>
#include <iostream>
using namespace std;


struct peixe
{
    char nome[20];
    unsigned peso;
    float comp;
};

int main(){

    peixe p;
    ofstream fout;
    ifstream fin;
    // a
    cout << "Nome: ";
    cin >> p.nome;

    cout << "Peso: ";
    cin >> p.peso;

    cout << "Comp: ";
    cin >> p.comp;

    // salvando o registro no arq binario

    fout.open("pescado.bin", ios_base::out | ios_base::app | ios_base::binary);
    if(!(fout.is_open())){
        cout << "Erro ao abrir.\n";
        exit(EXIT_FAILURE);
    }

    fout.write((char *)&p, sizeof(p));

    fout.close();
    cout << "Pronto!";

    // lendo binario
    fin.open("pescado.bin", ios_base::in | ios_base::binary );

    if(!(fin.is_open())){
        cout << "Erro ao abrir.\n";
        exit(EXIT_FAILURE);
    }
    cout << "Conteudo do arq binario:\n";

    while (fin.read((char *)&p, sizeof(p))) {
        cout << "Nome: " << p.nome <<
        "\nPeso: " << p.peso <<
        "\nComp: " << p.comp << "\n\n";
    }
    fin.close();



}
