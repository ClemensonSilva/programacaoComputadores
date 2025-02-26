#include <iostream>
using  namespace std;

int main(){
    char carac = 'A';
    char * ptr ; // definicao do ponteiro

    cout << "Valor da variavel: " << carac <<endl;

    ptr = &carac; // atribuicao de endereco de carac para ptr
    *ptr = 'B';  //  armazena char 'B' para a variavel que  o ponteiro esta apontando
    cout << "Localizacao na memoria da variavel: " << &ptr <<endl;
    cout << "Nova variavel: " << *ptr <<endl;


}
