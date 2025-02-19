# include <iostream>
using namespace std;
int main(){
    int hora, minutos;
    char colon = ':';

    cout << "Que horas são? " << endl;
    cin >> hora >> colon >> minutos;

    cout << "O seu relógio está atrasado" << endl;
    hora = hora+1;
    cout << "Agora são "  << hora << colon << minutos << endl;


  return 0;
}
