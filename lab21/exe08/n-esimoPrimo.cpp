#include <iostream>
using namespace std;

int main(){
    int primos = 0, divisores = 0;
    int i ;
    // primo: numero inteiro maior que 1 que so possui 2 divisores: 1 e ele mesmo
    for( i = 1; primos < 100001;){
      i++;
      for (int j = 1; j <= i ; j++) {
            if(i%j == 0)
                divisores++;
      }
      if(divisores == 2)
            primos++;
        divisores = 0;
    }
    cout << "6a " <<primos << " " << i;
}
