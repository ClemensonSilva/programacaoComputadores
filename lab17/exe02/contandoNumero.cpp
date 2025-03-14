#include <iostream>

using namespace std;

int main(){
    int numero;
    cout << "Você quer que eu conte de 1 até que número? ";
    cin >> numero;

    for (int i = 1; i <= numero; i++) {
        cout << i << " " ;
    }
    cout << "\n";

    for (int i = numero; i > 0; i--) {
        cout << i << " ";
    }
    cout << "\n";

    for (int i = 0; i <=numero; i++) {
        if(i%2 !=0){
            cout << i << " ";
        }
    }
    cout << "\n";

    for (int i = numero; i > 0; i--) {
        if(i%2 !=0){
            cout << i << " ";
        }
    }
    cout << "\n";

    for (int i = 1; i <=numero; i++) {
        if(i%2 !=0){
        }else {
            cout << i << " ";
        }
    }
    cout << "\n";

    for (int i = numero; i > 0; i--) {
        if(i%2 !=0){
        }else{
            cout << i << " ";

        }
    }
}
