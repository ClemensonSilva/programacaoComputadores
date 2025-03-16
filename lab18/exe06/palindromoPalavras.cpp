#include <iostream>
using namespace std;


int main(){
    char ch, carac [60];
    int i = 0;

    while ((ch = cin.get()) !='\n') {
        if(ch != ' ' )
            carac[i++] = ch;
    }

    int aux = 0;
    i--; // compensa o incrmento ao ler '\n
    while(carac[i] != carac[aux] ){
        i--;
        aux++;
    }

    if(aux)
        cout << "Não palindromo\n";
    else
        cout << "É palindromo\n" ;

    cout << carac;

}
