#include <cstring>
#include <iostream>
using namespace std;


int main(){
    char palavra01[8];
    char palavra02[13];
    char palavra03[12];
    char palavra04[6];
    int tamanhoString ;

    cout << "Digite 4 palavras: " << endl;

    cin  >> (palavra01) >> palavra02 >> palavra03 >> palavra04;

    tamanhoString = strlen(palavra01) + strlen(palavra02) + strlen(palavra03) + strlen(palavra04) + 3 ;
    char *string = new char[tamanhoString];
    // pretendo criar funcao no futuro para concatenacao
    int i = 0;
    for (int j= 0; j <= strlen(palavra01); i++, j++) {
        string[i]+=palavra01[i];
        if(i==strlen(palavra01))
            string[i] = ' '; // quando esta no ultimo elemento da palavra, adiciona espaco vazio ao carac seguinte
    }
    for ( int j = 0 ;j <= strlen(palavra02)  ; i++, j++) {
        string[i]+=palavra02[j];
        if(j==strlen(palavra02))
            string[i] = ' ';
    }
    for ( int j = 0 ;j <= strlen(palavra03) ; i++, j++) {
        string[i]+=palavra03[j];
        if(j==strlen(palavra03))
            string[i] = ' ';
    }
    for ( int j = 0 ;j <= strlen(palavra04) ; i++, j++) {
        string[i]+=palavra04[j];
        if(j==strlen(palavra04))
            string[i] = ' ';
    }

    cout << "Concatenando as palavras obtém-se: " << string << endl; // ainda nao conclui


}
