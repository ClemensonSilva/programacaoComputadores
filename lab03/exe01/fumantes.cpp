# include <iostream>
using namespace std;
int main(){
    int anos, cigarrosPDia, nCigarros = 20;
    float precoCarteira, totalGasto;

    cout << "Quantos anos voce fuma? " <<endl;
    cin >> anos;

    cout << "Quantos cigarros você fuma por dia?" << endl;
    cin >> cigarrosPDia;

    cout << "Qual o preco médio de uma carteira de cigarro?" << endl;
    cin >> precoCarteira;

    totalGasto = (cigarrosPDia/nCigarros)*(365*anos)*precoCarteira;

    cout << "Voce gastou até agora " << totalGasto <<" com cigarros" << endl;
  return 0;
}
