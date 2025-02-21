#include <cstring>
#include <iostream>
using namespace std;

struct chocolate {
    char marca[15];
    float peso;
    int calorias;
};
int main(){
    chocolate lanche;
    strcpy(lanche.marca, "Charge");
    lanche.peso = 2.3;
    lanche.calorias = 350;

    cout << "Marca " << lanche.marca <<
    ", peso: " << lanche.peso <<
    ", calorias: " << lanche.calorias;


}
