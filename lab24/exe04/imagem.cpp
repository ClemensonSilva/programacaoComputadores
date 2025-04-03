#include <cctype>
#include <cstdlib>
#include <fstream>
#include <iostream>
using namespace std;

void armazenar(  int, int);
void exibir(int, int , int);

int main(){
    char  opcao;
    int  corFundo, largura, altura;

    cout << "Imagem colorida: \n"<<
    "[A]rmazenar\n" <<"[E]xibir\n" <<
    "[S]air\n";

    cout << "OPCAO: ";
    cin >> opcao;

    opcao = toupper(opcao);

    if(opcao == 'A')
        armazenar(largura, altura);
    else if(opcao=='E')
        exibir(corFundo, largura, altura);
    else
        cout << "Saindo da aplicacao.\n";
}

void exibir(int largura, int altura ,int cFundo){
    ifstream fin;
    char ch = ' ';
    fin.open("imagem.bin", ios::in | ios::binary);
    if(!(fin.is_open())){
        cout << "ERRO AO ABRI ARQUIVO";
        exit(EXIT_FAILURE);
     }
     cout << altura << " e " << largura;
     for(int i = 0; i < altura; i++){
         for(int j = 0; j < largura;j++){
            fin.read((char*) &cFundo, sizeof(int));
            cout << "\033[38;5;000"  << ";48;5;" << cFundo << "m" << "ola" << "\033[0m" << endl;
         }
     }

    fin.close();
    cout << "Imagem colorida no display\n";

}

void armazenar(  int largura, int altura){
    ofstream fout;
    int * imagem = new int[altura*largura];

    fout.open("imagem.bin", ios::out | ios::binary);
    if(!(fout.is_open())){
        cout << "ERRO AO ABRI ARQUIVO";
        exit(EXIT_FAILURE);
     }

    cout << "Largura : ";
    cin >> largura;
    cout << "Altura : ";
    cin >> altura;

    cout << "Defina " << largura << " cores em cada linha: \n";

    for(int i = 0; i < altura; i++){
        cout << i+1 << "#: ";
        for(int j = 0; j < largura;j++)
            cin >> imagem[i*largura+j];
    }

    fout.write((char*)&imagem, sizeof(int)*largura*altura);
    delete [] imagem;
    fout.close();
    cout << "Texto colorido foi armazenado\n";
}
