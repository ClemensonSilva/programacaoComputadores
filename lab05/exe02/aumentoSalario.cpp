#include <iostream>
using namespace std;

float aumentoSalario(float);
int main(){
    float salario;
    cout << "Salário atual: " ;
    cin >> salario;
    cout << "Salário ajustado para " << salario <<endl;
    return 0;
}

float aumentoSalario(float salarioInicial){
    return salarioInicial*(1+0.15);
}
