#include <cstring>
#include <fstream>
#include <iostream>
using namespace std;

int main(){
    int gramas , comprimento, total = 0;
    char nome[13];

    // objeto ifstream
    ifstream texto;
    texto.open("pescado.txt");

    if(!texto.is_open()){
        cout << "Abertura do arquivo pescado.txt falhou!" << endl;
        cout << "Programa encerrando.\n";
        exit(EXIT_FAILURE);
    }

    texto >> nome;
    while (!(texto.eof())) {
        texto >> gramas;
        texto >> comprimento;
        total+=gramas;
        texto >> nome; // precisa ler a ultima linha vazia para encerrar o programa.
        // se nao houvess esse input aqui, a condicao do while nao
        // seria verificada efetivamente na ultima linha
    }

    cout << "Quilos: " << total/float(1000) << "\n";



}
