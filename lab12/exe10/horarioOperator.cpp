#include <iostream>
#include <istream>
using namespace std;


struct Horario{
    int minutos;
    int horas;
};

void tempoDecorrido(Horario, Horario);

istream& operator>>(istream& is, Horario& horario)
{
    is >> horario.horas;
    is >> horario.minutos;
    return is;
}

ostream& operator<<(ostream& os, Horario& horario)
{
    os << horario.horas << ":" ;
    os << horario.minutos ;
    return os;
}

int main(){

    Horario inicioAula;
    Horario fimAula;

    cout << "Digite o horario de inicio da aula: " << endl;

    cin >> inicioAula;
    cout << "Digite o horario de fim da aula: " << endl;

    cin >>  fimAula ;

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
    cout  << "Entre " ;
    cout << inicioAula;
    cout << " e ";
    cout << fimAula;
    cout << " existem "<<(horas*60 + minutos)<<
    " minutos, isto é, "<< horas <<"h e " << minutos <<
    " minutos." << endl;
   }
