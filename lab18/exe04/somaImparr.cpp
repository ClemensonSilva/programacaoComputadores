#include <iostream>
using namespace std;

int main(){
    // com for
    for(int i = 1; i <=100; i=i+2){
        cout << "Impar: " << i << "\n";
    }
    int i = 1;
    cout << "WHILE" << endl;
    while(i<=100){
        cout << "Impar: " << i << "\n";
        i+=2;
    }
    i = 1;
    cout << "DO WHILE" << endl;

    do{
        cout << "Impar: " << i << "\n";
        i+=2;
    }while(i <100);
}
