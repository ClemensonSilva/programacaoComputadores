#include <iostream>
using namespace std;

int main(){
    int space = 0;
    int controle = 4;
    for (int i = 1; i <= 10  ; i = i+2) {
        for (int j = 1 ; j <= i; j++){
            for( ; space < controle; space++)
                cout << " ";
            cout << '$';
        }
            controle--;
            space = 0;
        cout << '\n';
    }
}
