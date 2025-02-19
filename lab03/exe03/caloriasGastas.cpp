# include <iostream>
using namespace std;
int main(){
    float peso, tCorrida, tCiclismo, tNatacao, energiaP, metsCicl = 7, metsCorr = metsCicl, metsNat = 8;
    int horas, minutos;
    char colon = ':';
    cout << "Digite seu peso em quilos: " << endl;
    cin >> peso;

    cout << "Digite o tempo de corrida: ex: 1:30" << endl;
    cin >> horas >> colon >> minutos;

    energiaP = metsCorr*peso*(horas*60+minutos)/60;

    cout << "Digite o tempo de ciclismo: ex: 1:30" << endl;
    cin >> horas >> colon >> minutos;

    energiaP = energiaP + metsCicl*peso*(horas*60+minutos)/60;

    cout << "Digite o tempo de natacao: ex: 1:30" << endl;
    cin >> horas >> colon >> minutos;

    energiaP = energiaP + metsCicl*peso*(horas*60+minutos)/60;

    cout << "Voce perdeu " << energiaP << "calorias" << endl;




  return 0;
}
