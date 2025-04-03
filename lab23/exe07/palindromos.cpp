#include <cctype>
#include <fstream>
#include <iostream>
using namespace std;
int palindromo(char*);

int main(){
    ifstream fin;
    char ch[15] ;
    int nPalindromos =  0;

    fin.open("arquivo.txt");
    if(!(fin.is_open())){
             cout << "Abertura do arquivo notas.txt falhou!" << endl;
             cout << "Programa encerrando.\n";
             exit(EXIT_FAILURE);
         }

    fin >> ch;

    while (!(fin.eof())) {
        nPalindromos += palindromo( ch);
        fin >> ch;
    }
    fin.close();
    cout << "Foram encontrados " << nPalindromos << " palíndromos neste arquivo.\n";
}

int palindromo(char *ptr){
    int tamanho = 0;
    for(int i =0; i < 15 && ptr[i] != '\0' ; i++){
        tamanho++;
        (islower(ptr[i]))? : ptr[i] = tolower(ptr[i]);
    }

    int j = tamanho;
    for(int i = 0; i < tamanho && ptr[i] == ptr[j-1] ; i++){
        j--;
    }
    // se for palindromo j ira ate o final e sera zerado
    if(!j){
        cout << ptr << "\n";
        return 1;
    }else
        return 0;
}
