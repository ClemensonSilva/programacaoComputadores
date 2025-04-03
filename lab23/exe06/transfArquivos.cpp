#include <cstring>
#include <fstream>
#include <iostream>
using namespace std;

int main(){
    char novoNome[15] = "arquivo_m.cpp", nomeArq[15] = "arquivo.cpp";
    // leitura arquivo
    ifstream fin;
    char ch[12];
    fin.open(nomeArq);
    if(!(fin.is_open())){
            cout << "Abertura do arquivo notas.txt falhou!" << endl;
            cout << "Programa encerrando.\n";
            exit(EXIT_FAILURE);
        }

    ofstream fout;
    // criacao novo arquivo
    fout.open(novoNome);

    if(!(fout.is_open())){
            cout << "Abertura do arquivo notas.txt falhou!" << endl;
            cout << "Programa encerrando.\n";
            exit(EXIT_FAILURE);
        }

    fout << "// " << novoNome << "\n";
    fout << "#define print cout "  << "\n";

    fin >> ch;
    while (!(fin.eof())) {
        // lê o conteudo e escreve no novo arquivo
        if(!(strcmp(ch, "cout")))
            fout << "print";
        else if(!(strcmp(ch, "<iostream>")))
            fout << ch << "\n ";
        else
            fout << ch << " ";
        for(int i = 0 ; i < 12; i++)
            if(ch[i] == ';' ||ch[i] == '{')
                fout << "\n";

        fin >> ch ;
    }

    fout.close();
    fin.close();

    cout << "Pronto\n";

}
