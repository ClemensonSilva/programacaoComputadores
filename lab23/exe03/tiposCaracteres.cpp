#include <cctype>
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream fin;

    fin.open("texto.txt");

    if(!(fin.is_open())){
        cout << "Abertura do arquivo texto.txt falhou!" << endl;
        cout << "Programa encerrando.\n";
        exit(EXIT_FAILURE);
    }
    char carac;
    int vogais = 0, consotantes = 0, caracIndefinidos = 0;

    while (!(fin.fail())) {
        // recebe um caractere:
        carac = fin.get();
        // verifica se eh uma letra do alfabeto
        if(isalpha(carac)){
            // verifica se esta em caixa baixa
            (islower(carac))? : carac = tolower(carac);
            switch (carac) {
                case 'a': vogais++;break;
                case 'e': vogais++;break;
                case 'i': vogais++;break;
                case 'o': vogais++;break;
                case 'u': vogais++;break;
                default: consotantes++;break;
            }
        }
        else if(isdigit(carac) || ispunct(carac)) // numeros e pontuacoes
            caracIndefinidos++;
    }

    cout << "Vogais: " << vogais <<
    "\nConsoantes: " << consotantes <<
    "\nIndefinidos: " << caracIndefinidos <<endl;

    fin.close();


}
