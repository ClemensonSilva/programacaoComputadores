#include <cctype>
#include <cstdlib>
#include <fstream>
#include <iostream>
using namespace std;

void armazenar(char*, int, int);
void exibir(char*, int, int);

int main(){
    char mensagem[80], opcao;
    int corTexto, corFundo;

    cout << "Mensagens coloridas: \n"<<
    "[A]rmazenar" <<"[E]xibir" <<
    "[S]air\n";

    cout << "OPCAO: ";
    cin >> opcao;

    opcao = toupper(opcao);

    if(opcao == 'A')
        armazenar(mensagem, corTexto, corFundo);
    else if(opcao=='E')
        exibir(mensagem, corTexto, corFundo);
    else
        cout << "Saindo da aplicacao.\n";
}

void exibir(char mensagem[], int cTexto,int cFundo){
    ifstream fin;

    fin.open("mensagem.bin", ios::in | ios::binary);
    if(!(fin.is_open())){
        cout << "ERRO AO ABRI ARQUIVO";
        exit(EXIT_FAILURE);
     }

    fin.read((char*) mensagem, sizeof(char)*80);
    fin.read((char*) &cTexto, sizeof(cTexto));
    fin.read((char*) &cFundo, sizeof(cFundo));

    cout << "\033[38;5;" << cTexto  << ";48;5;" << cFundo << "m" << mensagem << "\033[0m" << endl;
    fin.close();
}

void armazenar(char mensagem[], int cTexto,int cFundo){
    ofstream fout;
    fout.open("mensagem.bin", ios::out | ios::binary);
    if(!(fout.is_open())){
        cout << "ERRO AO ABRI ARQUIVO";
        exit(EXIT_FAILURE);
     }

    cout << "Sua mensagem: ";
    cin.ignore();
    cin.getline(mensagem, 80);

    cout << "Cor do texto: ";
    cin >> cTexto;
    cout << "Cor do fundo: ";
    cin >> cFundo;

    fout.write((char*)mensagem, sizeof(char)*80);
    fout.write((char*)&cTexto, sizeof(cTexto));
    fout.write((char*)&cFundo, sizeof(cFundo));

    fout.close();
    cout << "Texto colorido foi armazenado\n";
}
