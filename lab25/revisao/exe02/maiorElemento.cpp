#include <cstdlib>
#include <fstream>
#include <iostream>
using namespace std;
// recebe um ponteiro dos vetores sendo chamada com vet out &vet[0]
void maiorElemento(const double*, int tam);

int main(){
    // ler arquivo txt
    ifstream fin;
    int tam = 0;
   double valor;
    fin.open("valores.txt");

    if (!(fin.is_open())) {
        cout << "Erro ao abrir arquivo\n";
        exit(EXIT_FAILURE);
    }
    // CUIDADO AQUI
    while (fin >> valor) {
        tam++; // quantidade de numeros
    }

    fin.clear();
    fin.seekg(0, ios::beg);

    double * valores = new double[tam];
    for (int i = 0;!(fin.eof()); i++)
        fin >> valores[i];
    fin.close();

    // valores ja eh o endereco do vetor
    maiorElemento(valores,  tam);
    delete [] valores;
    cout << "Pronto!\n";
}

void maiorElemento(const double * ptr, int tam){
    double  maior = 0;
    for (int i = 0; i < tam; i++) {
        if (ptr[i] >  maior)
            maior = ptr[i];
    }
    cout << "O maior valor é " << maior << endl;
}
