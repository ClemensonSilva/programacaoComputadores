#include <cstring>
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream fin;
    fin.open("notas.txt");

    if(!(fin.is_open())){
        cout << "Abertura do arquivo notas.txt falhou!" << endl;
        cout << "Programa encerrando.\n";
        exit(EXIT_FAILURE);
    }

    ofstream fout;
    fout.open("situacao.txt");

    if(!(fin.is_open())){
        cout << "Abertura do arquivo situacao.txt falhou!" << endl;
        cout << "Programa encerrando.\n";
        exit(EXIT_FAILURE);
    }

    char nome[15];
    float n1, n2, n3, media;
    char situacao[10];

    fin >> nome;
    while (!(fin.fail())) {
        fin >> n1 >> n2 >> n3;
        media = (n1+n2+n3)/float(3);

        if(media >= 7)
            strcpy(situacao, "aprovado");
        else if (media < 7 && media >=3.5)
            strcpy(situacao, "4a prova");
        else
            strcpy(situacao, "Reprovado");

        fout << nome << ": " << situacao<<'\n';
        fin >> nome; // esse valor sera usado no teste do while, se o arquivo
        // tiver encerrado, ele retornará EOF, finalizando o while
    }

    fout.close();
    fin.close();
    cout << "Pronto!\n";
}
