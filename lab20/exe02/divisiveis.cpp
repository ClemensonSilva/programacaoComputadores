#include <iostream>
using namespace std;

int divisiveis(int, int, int);

int main(){
    int a, b, c;

    cout << "Digite três números inteiros a, b e c ('a' maior que 1): \n";
    cin >> a >> b >> c;

    cout << "A soma é igual a " << divisiveis(a, b, c) << endl;
}

int divisiveis(int a,int b, int c){
    int soma = 0;
    while (b <= c) {
        if(b%a==0)
            soma += b;
        b++;
    }
    return soma;
}
