#include <cstring>
#include <iostream>
using namespace std;

int main(){

    char caractere[10], invertido[10];
    cout << "Digite uma palavra: ";
    cin.getline(caractere,10);
    int tamanho = strlen(caractere)-1;

    for (int i = 0; i < strlen(caractere); i++, tamanho--) {
        invertido[tamanho]= caractere[i];
        cout << "Tamanho: " << tamanho << " i: "<<i << " caractere: "<< caractere[i]<<endl;
    }

    cout << "\n"<<invertido;
    cout << "\n"<< caractere <<endl;

    if (strcmp(invertido, caractere))
    cout << "A palavra não é um palíndromo\n";
    else
    cout << "A palavra é um palíndromo\n";



}
