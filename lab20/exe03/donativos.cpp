#include <iostream>
using namespace std;

int main(){
    int donativos[10], media ;
    int i = 0, soma = 0;
    cout << "Digite ate 10 valores de donativos (zero para encerrar):\n";

    for (cin >> donativos[i]; donativos[i] != double(0); cin >> donativos[i]) {
        soma += donativos[i];
        i++;
    }
    media = soma/double(i);

    cout << "A media dos valores doados foi de R$ " << float(media) << endl;

    int aux = 0;
    for(; i>= 0; i--){
        if(donativos[i] > media)
            aux++;
    }
    cout << aux<< " valores foram maiores que a media.\n";
}
