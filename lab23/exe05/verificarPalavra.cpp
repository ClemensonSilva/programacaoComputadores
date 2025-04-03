#include <cstring>
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    char arquivo[10], palavra[10], texto[10];
    bool present = false;
    ifstream fin;
    cout << "Nome do arquivo: ";
    cin >> arquivo;

    cout << "Palavra: ";
    cin >> palavra;

    fin.open(arquivo);

    if(!(fin.is_open())){
        cout << "Abertura do arquivo notas.txt falhou!" << endl;
        cout << "Programa encerrando.\n";
        exit(EXIT_FAILURE);
    }
    fin >> texto;
    while (!(fin.eof())) {
        (strcmp(texto, palavra))? :present=true ;
        fin >> texto;

    }
    fin.close();
    cout << "A palavra " << palavra <<" está presente no texto?" ;
    (present)? cout << " sim": cout << " não";
    cout << '\n';


}
