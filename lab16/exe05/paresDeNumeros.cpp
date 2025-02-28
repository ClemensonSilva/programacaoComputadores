#include <iostream>
using namespace std;

int main(){
    int A[10] =  {46, 78, 40, 96, 74, 58, 32, 56, 91, 6};
    int *ptr1, *ptr2 ;

    for (int i = 0; i < 10; i+=2) {
        ptr1 = &A[i];
        ptr2 = &A[i+1];

        cout << "[" << *ptr1 << "," << *ptr2<<"]  ";
    }
}
