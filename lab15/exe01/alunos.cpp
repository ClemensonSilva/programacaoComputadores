#include <iostream>
using namespace std;

int main(){
    int numAlunos;

    cout << "Digite o numero de alunos: ";
    cin >> numAlunos;

    int *notas = new int [numAlunos];

    cout << "Digite a nota de dois alunos: ";
    cin >> notas[0] >> notas[1];

    cout << "As notas digitadas foram " << notas[0] << " e " << notas[1];

    delete [] notas;

}
