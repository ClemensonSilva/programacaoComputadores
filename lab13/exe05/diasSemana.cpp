#include <iostream>
using namespace std;
enum dia {SEG, TER, QUA, QUI, SEX, SAB, DOM};
int main()
{
    char dias[7][8] =
    {
    "Segunda", "Terca", "Quarta", "Quinta", "Sexta", "Sábado", "Domingo"
    };
    for (dia ind = SEG; ind <= DOM; ind = dia(ind + 1))
        cout << dias[ind] << endl;
    return 0;
}
