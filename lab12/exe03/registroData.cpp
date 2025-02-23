#include <cstdlib>
#include <iostream>
using namespace std;

struct date {
    int dia;
    int mes;
    int ano;
};

int diasVida(date, date);

int main(){

    date aniversario, atual ;
    char carac;

    cout << "Sua data de aniversario: DD/MM/AAAA" << endl;
    cin >> aniversario.dia  >> carac >>aniversario.mes  >> carac >> aniversario.ano;

    cout << "Dia de hoje: DD/MM/AAAA" << endl;
    cin >> atual.dia  >> carac >>atual.mes  >> carac >> atual.ano;

    cout << "Você tem " << diasVida(aniversario, atual)<< " dias de vida." << endl;

}

int diasVida(date nascimento, date atual){
    return (abs(atual.dia - nascimento.dia))
    + abs((atual.mes - nascimento.mes)*31)
    + abs((atual.ano - nascimento.ano)*365);
}
