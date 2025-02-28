#include <iostream>
using namespace std;

int main(){
    int *ptr = new int;
    *ptr = 100;

    cout << "Numero apontado: " << *ptr << endl;

    cout << "Digite um novo numero: ";
    cin >> *ptr;

    cout << "Novo numero apontado: " << *ptr << endl;

    delete ptr;


}
