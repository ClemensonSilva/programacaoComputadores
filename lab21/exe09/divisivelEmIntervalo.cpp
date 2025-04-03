#include <iostream>
using namespace std;

int main(){
    int num = 1;

    for(int i = 1; i <= 20; i++){ // demora um pouco para encontrar mesmo
        // verifica se o numero eh divisivel
       if(num%i != 0){
            // retorna para o ponto inicial e passa p o numero sucessor
            num++;
            i = 1;
       }
       else if(num%i)
        i++;
    }

    cout << num << " é divisível por todos os numeros no intervalo 1-20 \n";
}


//4 -> i
//2 ->j
// 3 -> j
//
