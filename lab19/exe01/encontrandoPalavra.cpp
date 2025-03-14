#include <cstring>
#include <iostream>
using namespace std;


int main(){
    char palavra[100];
    cout << "Digite palavras (pronto para parar): \n";
    int cont = 0;
    cin >> palavra;
    while(strcmp(palavra, "pronto")){
        cont+=1;
        cin >> palavra;
    }
    cout << "Foram digitadas um total de "<<  cont <<" palavras. \n" ;
}
