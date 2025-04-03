#include <cctype>
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream fin;
    fin.open("sol.txt");
    if (!fin.is_open())
    {
        cout << "Abertura do arquivo sol.txt falhou!" << endl;
        cout << "Programa encerrando.\n";
        exit(EXIT_FAILURE);
    }
    ofstream fout;
    fout.open("num.txt");
    if (!fout.is_open())
    {
        cout << "Abertura do arquivo num.txt falhou!" << endl;
        cout << "Programa encerrando.\n";
        exit(EXIT_FAILURE);
    }
    // -----------------------
    // insira seu código aqui
    // -----------------------
    char carac;
    bool pularLinha;
    // enquanto houver caractere no .txt
    while((fin.get(carac))){
       if(isdigit(carac) )    // se for um digito, printa no arquivo
        {
            fout << carac ;
            pularLinha = true;
        }
        // filtro para pular a linha apos o fim do numero
        if(carac == ' ' && pularLinha){
            fout << '\n';
            pularLinha = false;
        }

    }

    fin.close();
    fout.close();
    cout << "Pronto!" << endl;
    return 0;
}
