#include <iostream>
using namespace std;

int main(){
    char meses[12][10]={
    "Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto",
    "Setembro", "Outubro", "Novembro", "Dezembro"
    };

    int venda, soma = 0;

    for (int i =0; i<12; i++) {
        cout << meses[i] << ": " ;
        cin >> venda;
        soma +=venda;
    }

    cout << "Em um ano foram vendidos " << soma << " livros"<< endl;
}
