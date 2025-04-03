#include <iostream>
using namespace std;

struct Patrono{
    char nome[15];
    int valor;
} ;

int main(){
    int tam;

    cout << "Digite o número de contribuintes: ";
    cin >> tam;

    Patrono *patronos = new Patrono[tam]; // array de patronos dinamicamente
    int i = 0;

    while( i < tam ){
        cout << "#"<<i+1<<"\n";
        cout << "Nome: ";
        cin.ignore();
        cin.getline(patronos[i].nome, 15);

        cout << "\nValor: ";
        cin >> patronos[i].valor;
        i++;
    }

    cout << "Grandes Patronos\n";
    i = 0;
    while( i < tam ){
        if(patronos[i].valor >= 10000)
            cout << patronos[i].nome << " " << patronos[i].valor<< "\n";
        i++;
    }

    cout << "Patronos\n";
    i = 0;
    while( i < tam  ){
        if(patronos[i].valor <  10000)
            cout << patronos[i].nome << " " << patronos[i].valor<<endl;
        i++;
    }

    delete [] patronos;
}
