//O custo de um carro novo ao consumidor é a soma do custo de fábrica com a
//percentagem do distribuidor e dos impostos (aplicados ao custo da fábrica).
//Supondo que a percentagem do distribuidor seja de 28% e os impostos de 45%,
//faça um programa para ler o custo de fábrica de um carro e escrever o custo ao
//consumidor.
# include <iostream>
using namespace std;
int main(){
    float custoFabrica, custoConsumidor, addImposto, addDistribuidor;

    cout << "Custo de fábrica " << endl;
    cin >> custoFabrica;

    custoConsumidor = custoFabrica*(0.28 + 0.45 +1);

    cout << "O custo do consumidor é: " << custoConsumidor << endl;




  return 0;
}
