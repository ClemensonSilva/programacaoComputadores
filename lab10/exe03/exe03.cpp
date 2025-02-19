#include <iostream>
using namespace std;

double vetor(double []);
int main(){
    double valores[3];

    cout << "Digite tres  valores: ";

        cout << "V1: ";
        cin >> valores[0] ;

        cout << "V2: ";
        cin >> valores[1] ;

        cout << "V3: ";
        cin >> valores[2] ;

        cout << "Valor modificador: "<< vetor(valores);

   return 0;
}

double vetor(double vetor[]){
    return vetor[0]*(vetor[2]-vetor[1]);
}
