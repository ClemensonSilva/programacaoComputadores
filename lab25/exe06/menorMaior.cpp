#include <fstream>
#include <iostream>
using namespace std;
struct numero{
    int menor, maior, menorP, maiorP;
};

numero analisar(const int*, int tam);
int main(){
    ifstream fin;
    int vet[100];
    fin.open("numeros.txt");

    if(!(fin.is_open())){
       cout << "Erro ao abrir arquivo\n";
       exit(EXIT_FAILURE);
    }

    fin >> vet[0];
    int i = 0;
    while (!(fin.eof())) {
        i++;
        fin >> vet[i];
    }
    fin.close();
    numero n = analisar(vet, 100);

    cout << "A posição " << n.menorP <<
    " contém o menor número (" << n.menor << ")\n";

    cout << "A posição " << n.maiorP <<
    " contém o menor número (" << n.maior << ")\n";
}

numero analisar(const int* ptr, int tam){
    numero n;
     n.maior = 0;
     n.menor = ptr[0];
    for (int i = 1; i < tam; i++) {
        if(ptr[i] > n.maior){
            n.maior = ptr[i];
            n.maiorP = i;
        }
        else if(ptr[i] < n.menor)
            n.menor = ptr[i];
            n.menorP = i;
    }
    return n;
}
