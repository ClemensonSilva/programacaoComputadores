#include <iostream>
using namespace std;

int main(){
    int numero, soma = 0, quantidade =0;
    cout << "Digite números inteiros  (0 para finalizar): "<< endl;

    do{
       cin >> numero;
       soma +=numero;
       quantidade++;
    }while(numero!=0);

    cout << "Foram lidos " << quantidade << " numeros" <<
    "A soma dos números  é " << soma <<
    " A média é " << float(soma/quantidade);
}
