#include <iostream>
using namespace std;

struct balao
{
    float diametro; // diâmetro em metros
    char marca[20]; // nome da marca
    int modelo; // número do modelo
};

int main(){
    int numBaloes;

    cout << "Numero de baloes: " ;
    cin >> numBaloes;

    balao baloes ;

    cout << "Dados dos baloes: " ;
    cout << "Diametro: " ;
    cin >> baloes.diametro;
    cout << "Marca: " ;
    cin.ignore();
    cin.getline(baloes.marca,20);
    cout << "Modelo: " ;
    cin >> baloes.modelo;

    cout << "Diametro: " <<  baloes.diametro <<
    "Marca: " <<  baloes.marca <<
    "Modelo: " <<  baloes.modelo <<endl;

}
