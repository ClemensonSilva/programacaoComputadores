#include <cstdlib>
#include <iostream>
#include <fstream>
#include <iterator>
using namespace std;

int main(){
    ifstream fin;
    int numeros, cont = 0;
    fin.open("vet.dat", ios::in | ios::binary);

    if((fin.is_open())){
        cout << "O arquivo vet.dat contém:\n";
        int j = 0;
        while (fin.read((char*)&numeros, sizeof(numeros) )) {
            if(j!=0)
                cout << numeros << " "; // filtro para nao exibit elemento 0
            j++;
        }
        cout << endl;
    }

    fin.close();

    // entrada de inteiros. encerra ao digitar o 0
    // o primeiro digitado deve ser o tamanho dos vetores digitados

    ofstream fout;
    fout.open("vet.dat",  ios::out  | ios::binary);

    if(!(fout.is_open())){
       cout << "Erro ao abrir arquivo\n";
       exit(EXIT_FAILURE);
    }

    numeros = 0;
    fout.write((char*)&numeros, sizeof(numeros) );

    cout << "Digite o número (zero para encerrar):\n";
    cin >> numeros;

    while (numeros !=0) {
        fout.write((char*)&numeros, sizeof(numeros) );
        cont++;
        cin>>numeros;
    }

    fout.seekp(0, ios::beg);
    fout.write((char*)&cont, sizeof(cont));
    fout.close();
    //  exibir a quant de numeros digitados
    // sobreescrever o primeiro elemento
    cout << cont << " números foram armazenados em vet.dat.\n";
}
