#include <cctype>
#include <iostream>
using namespace std;

int main(){
    char carac ;
    int a = 0, e = a, i = e, o = i, u = o;
    cout << "Digite uma frase (@ para finalizar):\n";

    while ((carac = cin.get()) != '@') {
        isupper(carac)? : carac = toupper(carac) ; // transforma as letras em maiusculas
        cout << carac;
        switch (carac) {
            case 'A': a++;break;
            case 'E': e++;break;
            case 'I': i++;break;
            case 'O': o++;break;
            case 'U': u++;break;
        }
    }

    cout << "\na: "<< a <<"\ne: " << e << "\ni: " << i << "\no: " << o << "\nu: " << u <<endl;
}
