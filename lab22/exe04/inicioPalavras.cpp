#include <cctype>
#include <iostream>
using namespace std;

int main(){
    cout << "Digite palavras (s para sair):\n";
    char palavra[15];
    int vogais = 0, consoantes = 0, numeros = 0;
    cin >> palavra;
    // verifica se a palavra esta vazia, se inicia com s e
    while (palavra[0] != '\0' && palavra[0] != 's' && (palavra[1] != ' ' || palavra[1] != '\0' ))
    {
        // verifica se eh uma letra
        if((isalpha(palavra[0]))){
            islower(palavra[0])? :palavra[0] = toupper(palavra[0]); // dimininuir as comparacoes
            // verifica se sao constantes
            switch (palavra[0]) {
                case 'A': vogais++; break;
                case 'E': vogais++; break;
                case 'I': vogais++; break;
                case 'O': vogais++; break;
                case 'U': vogais++; break;
                default: consoantes++;break;
        }
        }
        else
            numeros++;
    }
    cout << palavra << endl;
    cout << vogais <<" palavras começam por vogais \n" <<
    consoantes <<  " palavras começam por consoantes\n" <<
    numeros << " outras palavras\n";
}
