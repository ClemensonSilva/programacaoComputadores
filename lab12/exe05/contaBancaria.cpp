#include <cstring>
#include <iostream>
using namespace std;

// Defina um registro Conta Bancária, com os campos identificador, nome do cliente e
// saldo. Na função principal, use o novo tipo Conta Bancária para criar uma variável
// e peça ao usuário para entrar com os dados da conta. O saldo inicial deve ser zero.
// Mostre a conta depois de criada e pergunte quanto o usuário deseja depositar na
// conta, modificando o seu saldo




struct ContaBancaria{
  int identificador;
  char nome[30];
  float saldo;

};
void deposito(float, ContaBancaria);
void exibirConta(ContaBancaria);

int main(){

    ContaBancaria conta;
    float valorDeposito;

    cout << "Nome do dono da conta: " << endl;
    cin.getline(conta.nome, 30);

    cout << "Identificador da conta: " ;
    cin >> conta.identificador;

    conta.saldo = 0;

    exibirConta(conta);

    cout << "Valor a ser depositado " << endl;
    cin >> valorDeposito;
    deposito(valorDeposito, conta);

}
void exibirConta(ContaBancaria conta){
    cout << "Dados da conta : " << endl ;
    cout << "Numero de conta: " << conta.identificador<< endl;
    cout << "Nome do dono da conta: " <<  conta.nome<<endl;
    cout << "Saldo: " << conta.saldo << endl;
}
void deposito(float deposito, ContaBancaria conta){
   conta.saldo = conta.saldo + deposito;
    cout << "Seu saldo agora é de: " << conta.saldo << endl ;
}
