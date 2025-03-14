#include <iostream>
using namespace std;
void printLinha();

int main(){
    printLinha();
    cout << "\nProgramando em c++\n";
    printLinha();

    }

void printLinha(){
    int i = 0;
    while( i < 20){
        i++;
        cout << '-';
    }
}
