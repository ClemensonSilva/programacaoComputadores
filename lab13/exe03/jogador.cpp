#include <iostream>
using namespace std;

union jogador
{
    char nome[25]; // nome do jogador
    int numero; // numero da camisa do jogador
};
struct gol
{
    jogador jog; // identificação do jogador
    int hora, min; // hora e minuto em que o gol foi marcado
};

int main()
{
    // nao resolvi completamente
    gol ultimosGols[3];
    char carac;
    cout << "Digite os dados dos 3 últimos gols: \n";

    cout << "Gol 1 \n";
    cout << "Jogador \n";
    cin.getline(ultimosGols[0].jog.nome, 25);
    cout << "Horario \n";
    cin >> ultimosGols[0].hora;
    cin >> carac;
    cin >> ultimosGols[0].min;

    cout << "Gol 2 \n";
    cin.ignore();
    cout << "Jogador \n";
    cin.getline(ultimosGols[1].jog.nome, 25);
    cout << "Horario \n";
    cin >> ultimosGols[1].hora;
    cin >> carac;
    cin >> ultimosGols[1].min;

    cout << "Gol 3 \n";
    cin.ignore();
    cout << "Jogador \n";
    cin.getline(ultimosGols[2].jog.nome, 25);
    cout << "Horario \n";
    cin >> ultimosGols[2].hora;
    cin >> carac;
    cin >> ultimosGols[2].min;

    for(int i =0; i < 3; i++){
        cout << "Gol: " << i<< endl;
        cout <<"Nome: " <<ultimosGols[i].jog.nome << endl;
        cout <<"Horario: " <<ultimosGols[i].hora <<":"<<ultimosGols[i].min<< endl;
    }


}
