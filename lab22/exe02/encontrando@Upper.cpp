#include <cctype>
#include <iostream>
using namespace std;


int main(){
    char carac;
    cout << "Digite seu texto (@ para sair):\n";

    while((carac = cin.get()) != '@'){
        // se for minuscula, muda para o char maiusculo, se for maiuscula, muda para o char minusculo
        isupper(carac ) ? carac = (char)tolower(carac) : carac = (char)toupper(carac);
        cout << carac;
    }
}
