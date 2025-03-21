#include <fstream>
#include <iostream>
using namespace std;

int main(){
    // escrever em txt
    ofstream fout;

    fout.open("numeros.txt");

    if(!(fout.is_open())){
        cout << "Nao foi possivel escrever no arquivo\n";
        exit(EXIT_FAILURE);
    }
    int i = 0;
    while ( i <= 100) {
        fout << i;
        i++;
    }

    fout.close();

    // escrever em binario

    fout.open("numeros.bin");

    if(!(fout.is_open())){
        cout << "Nao foi possivel escrever no arquivo\n";
        exit(EXIT_FAILURE);
    }
    while ( i >= 0) {
        fout.write((char*)&i,  sizeof(i));
        i--;
    }

    fout.close();


}
