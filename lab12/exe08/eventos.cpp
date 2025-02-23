#include <iostream>
#include <cstring>
using namespace std;

struct Data{
    int dia;
    int mes;
    int ano;
};

struct Horario{
    int segundos;
    int minutos;
    int horas;
};
struct Evento {
    Data data;
    Horario hora;
};

int main(){
    Evento evento;
    cout << "Digite a data e horario do evento: " <<endl;
    cout << "Dia do evento";
    cin >> evento.data.dia ;
    cout << "Mes do evento";
    cin >> evento.data.mes ;
    cout << "Ano do evento";
    cin >> evento.data.ano ;

    cout << "Hora ";
    cin >> evento.hora.horas ;
    cout << "Minutos ";
    cin >> evento.hora.minutos ;
    cout << "Segundos";
    cin >> evento.hora.segundos  ;

    cout << "Evento marcado no horário: " << evento.data.dia <<"/" << evento.data.mes <<"/" << evento.data.ano << endl;
    cout << evento.hora.horas <<":" << evento.hora.minutos <<":"<< evento.hora.segundos ;
}
