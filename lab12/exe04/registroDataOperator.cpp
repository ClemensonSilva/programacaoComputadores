#include <cstdlib>
#include <iostream>
#include <ostream>
using namespace std;

struct date {
    int dia;
    int mes;
    int ano;
};

int diasVida(date, date);

istream& operator>>(istream& is, date& date){
    char carac;

    is >> date.mes  >> carac;
    is >>  date.dia >> carac ;
    is >> date.ano ;
    return is;
}

ostream& operator<<(ostream& os, date& date){

    os << "Dia de hoje: DD/MM/AAAA " << date.mes
    << "/" << date.dia
    << "/" << date.ano ;
    return os;
}

int main(){

    date aniversario, atual ;

    cout << "Data de aniversario: DD/MM/AAAA" << endl;
    cin >> aniversario;
    cout << "Dia de hoje: DD/MM/AAAA" << endl;

    cin >> atual;
    cout << "Você tem " << diasVida(aniversario, atual)<< " dias de vida." << endl;
    cout << aniversario ;
    cout << atual;
}

int diasVida(date nascimento, date atual){
    return (abs(atual.dia - nascimento.dia))
    + abs((atual.mes - nascimento.mes)*31)
    + abs((atual.ano - nascimento.ano)*365);
}
