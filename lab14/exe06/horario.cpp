#include <iostream>
using namespace std;

struct Horario{
    int minuto, hora;
};
void MostrarHorario(Horario *); // recebe um ponteiro do registro

int main(){
    Horario horario;
    char carac;
    Horario * ptr = &horario;
    cout << "Que horas são? ";
    cin >> horario.hora >> carac >> horario.minuto;
    cout << "Seu relógio está atrasado, o horário correto é " ;
    ptr->hora = ptr->hora +1;
    MostrarHorario(ptr);
}

void MostrarHorario(Horario * ptr){
    cout << ptr->hora << ":" << ptr->minuto << endl;
} // recebe um ponteiro do registro
