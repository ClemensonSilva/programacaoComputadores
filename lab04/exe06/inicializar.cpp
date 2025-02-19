#include <iostream>
using namespace std;
#include <cstdlib>


int inicializar();
void ligar();
void verificar();
void ativar();


int main(){
    if (inicializar() > 16384)
        cout << "Sistema em funcionamento" <<endl;
    else
        cout << "Falha na inicialização" <<endl;
    return 0;
}
int inicializar(){
    srand(1);
    cout << "Inicializando Sistema:" << endl;
    ligar();
    verificar();
    ativar();
    return rand();
}
void ligar(){
    cout << "- Ligando dispositivos" <<endl;
}

void verificar(){
    cout << "- Verificando integridade" <<endl;
}

void ativar(){
    cout << "- Ativando processos" <<endl;
}
