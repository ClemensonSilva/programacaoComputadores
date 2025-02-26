#include <iostream>
#include <sched.h>
using namespace std;


struct Cores {
  unsigned R,  G,  B,  A;
};

union RGBA{
    Cores corRegistro;
    unsigned codigoCor;
};

void lerRGBA(RGBA);
void lerInteiro(RGBA);
void mostrarRGBA(RGBA cor);
void mostrarCodigoInteiro(RGBA cor);
int main(){
    RGBA cor;
    unsigned decisao;

    cout << " Digitar codigo inteiro -0 \n Digitar RGBA -1 " << endl;
    cin >> decisao;
    if(decisao){
       lerRGBA(cor);
       mostrarRGBA(cor);
    }
    else{
        cout << "Inteiro32 ";
        lerInteiro(cor);
        mostrarCodigoInteiro(cor);
    }
}
void mostrarRGBA(RGBA cor)
{
    RGBA * ptr = &cor;
    cout << "Digite o RBGA: " << ptr->corRegistro.R << ptr->corRegistro.G <<  ptr->corRegistro.B << ptr->corRegistro.A << endl ;
}

void lerRGBA(RGBA cor){
    RGBA *ptr = &cor;
    cout << "Digite o RBGA: \n";
    cin >> ptr->corRegistro.R >> ptr->corRegistro.G >> ptr->corRegistro.B >> ptr->corRegistro.A;
}

void mostrarCodigoInteiro(RGBA cor)
{
    RGBA * ptr = &cor;
        cout << "Int32: " << ptr->codigoCor;

}

void lerInteiro(RGBA cor){
    RGBA * ptr = &cor;
    cin >> ptr->codigoCor;
}
