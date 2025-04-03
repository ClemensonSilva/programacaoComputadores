#include <cstdlib>
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    // exibir arq binario caso haja algum valor nele
    ifstream fin ; // ifstream é para ler arquivos

    int inteiro;
    fin.open("integer.bin", ios::in | ios::binary | ios::app);

    if (fin.is_open()) {
        cout << "\nAqui está o conteúdo numerico do arquivo:" << endl;

        while (fin.read((char*) &inteiro, sizeof(inteiro))) {
            cout << inteiro <<'\n';
        }
    }
    fin.close();

    // pedir entrada de outro inteiro
    ofstream fout; //  ofstream é para escrever em arquivos
    cout << "Digite um inteiro: ";
    cin >> inteiro;

    fout.open("integer.bin", ios::out |  ios::app | ios::binary );

    // em caso de falha ao abrir arquivo
    if(!(fout.is_open())){
        cout << "Nao foi possivel escrever no arquivo\n";
        exit(EXIT_FAILURE);
    }

    fout.write((char*)&inteiro, sizeof(inteiro));
    fout.close();

    cout << "Número armazenado no arquivo integer.bin.\n";


}
