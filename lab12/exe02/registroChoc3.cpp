#include <cstring>
#include <iostream>
using namespace std;

struct chocolate {
    char marca[15];
    float peso;
    int calorias;
};

int main(){
    chocolate lanches[3];

    strcpy(lanches[0].marca, "Charge");
    lanches[0].peso = 2.3;
    lanches[0].calorias = 350;

    strcpy(lanches[1].marca, "Twix");
    lanches[1].peso = 2.3;
    lanches[1].calorias = 550;

    strcpy(lanches[2].marca, "Laka");
    lanches[2].peso = 2.0;
    lanches[2].calorias = 300;

    // não pode usar for
    cout << "Marca " << lanches[1].marca <<
    ", peso: " << lanches[1].peso <<
    ", calorias: " << lanches[1].calorias << endl;

    cout << "Marca " << lanches[1].marca <<
    ", peso: " << lanches[1].peso <<
    ", calorias: " << lanches[1].calorias << endl;

    cout << "Marca " << lanches[2].marca <<
    ", peso: " << lanches[2].peso <<
    ", calorias: " << lanches[2].calorias << endl;

}
