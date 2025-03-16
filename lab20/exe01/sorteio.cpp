#include <iostream>
using namespace std;

int main(){
    srand(time(0)); // usando o momento atual como semente
    int tentativa, numero = (rand() % 10) + 1;

    for(cin >> tentativa ; tentativa!= numero; cin >> tentativa){
       if(tentativa > numero)
           cout << "Muito alto\n";
       else if(tentativa < numero)
           cout << "Muito baixo\n";
        cout << "Tente novamente: " << endl;
    }
        cout << "Acertou mizera\n";

}
