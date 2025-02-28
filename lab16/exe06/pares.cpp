#include <iostream>
using namespace std;

int main(){
    int B[10] = {32, 16, 47, 10, 82, 29, 30, 28, 15, 64 };

    for (int i = 0; i < 10; i+=2) {
        cout << "[" << B[i] << "," << B[i+1]<<"]  ";
    }


}
