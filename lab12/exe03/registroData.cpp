#include <iostream>
using namespace std;

struct date {
    int dia;
    int mes;
    int ano;
};
int main(){

    date aniversario ;
    char carac;

    cout << "Sua data de aniversario: DD/MM/AAAA" << endl;
    cin >> aniversario.dia  >> carac >>aniversario.mes  >> carac >> aniversario.ano;

}
