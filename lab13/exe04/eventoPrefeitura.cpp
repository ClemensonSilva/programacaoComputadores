#include <iostream>
using namespace std;


struct Data{
    int dia, mes, ano;
};

struct Horario{
    int hora, minuto;
};

struct Evento{
    Data data;
    Horario horario;
    char descricao[18];
};

void exibirEvento(Evento);
Evento preencherEvento(Evento);

int main(){

    Evento evento[10];
    evento [0] = preencherEvento(evento[0]);
    evento [1] = preencherEvento(evento[1]);
    cout << "Eventos \n";
    exibirEvento(evento[0]);
    exibirEvento(evento[1]);

}

void exibirEvento(Evento evento){
    cout << evento.data.dia << "/" << evento.data.mes << "/" << evento.data.ano <<
    "  " << evento.horario.hora << ":" << evento.horario.minuto << "  " << evento.descricao << endl;
}

Evento preencherEvento(Evento evento){
        cout << "Data: " ;
        cin >> evento.data.dia >>  evento.data.mes >>  evento.data.ano ;
        cout << "Hora: ";
        cin >> evento.horario.hora >> evento.horario.minuto;
        cin.ignore();
        cout << "Desc: ";
        cin.getline(evento.descricao,18);
        return evento;
}
