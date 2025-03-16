#include <iostream>
using namespace std;

int main(){
    int idade, maioridade = 0, maisVelha = 0, maisNova;
    cin >> idade;
    maisNova = idade;
    while(idade !=0){
        if(idade>=18)
            maioridade++;
        if(idade >= maisVelha)
            maisVelha = idade;
        if( idade <= maisNova)
            maisNova = idade;
        cin >> idade;
    }
    cout << "Nesse grupo "<< maioridade << " pessoas sao maiores de idade\n";
    cout << "Mais velha "<< maisVelha << "\nMais Nova " << maisNova;

}
