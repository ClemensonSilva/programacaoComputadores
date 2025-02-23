#include <iostream>
using namespace std;


struct Horario{
    int minutos;
    int horas;
};

void tempoDecorrido(Horario, Horario);
int main(){

    Horario inicioAula;
    Horario fimAula;

    cout << "Digite o horario de inicio da aula: " << endl;

    cin >> inicioAula.horas >> inicioAula.minutos ;

    cout << "Digite o horario de fim da aula: " << endl;

    cin >> fimAula.horas >> fimAula.minutos ;

    tempoDecorrido(inicioAula, fimAula);


}

void tempoDecorrido(Horario inicioAula, Horario fimAula){
    int horas , minutos ;

    if(fimAula.minutos < inicioAula.minutos){
        horas = abs(fimAula.horas - inicioAula.horas)-1;
        minutos = 60 - abs(fimAula.minutos - inicioAula.minutos) ;
    }else{
        horas = abs(fimAula.horas - inicioAula.horas);
        minutos = abs(fimAula.minutos - inicioAula.minutos);
    }

    cout << "Entre " << inicioAula.horas << ":" << inicioAula.minutos << " e "
    << fimAula.horas << ":" << fimAula.minutos<<" existem " << (horas*60 + minutos)<<
    " minutos, isto é, "<< horas <<"h e " << minutos <<" minutos." << endl;
}
