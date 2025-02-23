
//Defina um registro Palavra para armazenar 3 strings, uma para cada tradução de
//uma palavra, em português, inglês e espanhol. Em seguida crie um vetor do tipo
//Palavra chamado dicionário, com espaço para dez palavras. Inicialize o vetor com 2
//palavras de sua escolha, lembrando que cada palavra deve estar nas três línguas.
//Por fim, peça para que o usuário entre com as informações para mais uma palavra,
//armazene-a no vetor e mostre todas as palavras do dicionário

#include <iostream>
#include <cstring>
using namespace std;

struct Palavra{
    char portugues[15];
    char ingles[15];
    char espanhol[15];
};
void exibir(Palavra);

int main(){
    Palavra dicionario[10];
    strcpy(dicionario[0].portugues , "Sorte");
    strcpy(dicionario[0].ingles , "Luck");
    strcpy(dicionario[0].espanhol , "Empate");
    strcpy(dicionario[1].portugues , "Comida");
    strcpy(dicionario[1].ingles , "Food");
    strcpy(dicionario[1].espanhol , "alimento");

    cout << "Digite uma palavra em tres idiomas - portugues, ingles, espanhol: " << endl;

    cin.getline(dicionario[2].portugues, 15);
    cin.getline(dicionario[2].ingles,15);
    cin.getline(dicionario[2].espanhol,15);

    // ainda nao pode usar laco de repeticao
    exibir(dicionario[3]);
}

void exibir(Palavra dicionario[10])
{
    cout << "Palavras do dicionário: " << endl;

    cout << "Portugues: "<<dicionario[0].portugues << endl;
    cout << "Inglês:"<<dicionario[0].ingles << endl;
    cout << "Espanhol:"<<dicionario[0].espanhol << endl;
    cout << "Portugues:"<<dicionario[1].portugues << endl;
    cout << "Inglês:"<<dicionario[1].ingles << endl;
    cout << "Espanhol:"<<dicionario[1].espanhol << endl;
    cout << "Portugues:"<<dicionario[2].portugues << endl;
    cout << "Inglês:"<<dicionario[2].ingles << endl;
    cout << "Espanhol:"<<dicionario[2].espanhol << endl;
}
