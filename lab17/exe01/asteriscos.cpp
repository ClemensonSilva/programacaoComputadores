#include <iostream>
using namespace std;

int main (){
    for (int i = 0 ; i <= 5 ; i++) {
        for(int j = 0 ; j < i ; j++){
            cout << '*' ;
        }
        cout << "\n";
    }
    for (int i = 0; i <= 5; i++) {  // 1 2
        for (int j = 5; j > i; j--) { // 4 3
           cout << '*' ;
    }
        cout << "\n";
}
}
