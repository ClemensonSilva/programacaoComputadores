#include <iostream>
using namespace std;
int main()
{
    int x, * p, ** q;
    p = &x;
    q = &p;
    x = 10;
    cout << **q << endl; // não está mostrando o número 10
}
