#include <cstring>
#include <iostream>
using namespace std;

int main(){
    char continuar, nomeProduto[15], nomeProdutoMaisCaro[15];
    int somaCompra = 0,  valorProduto, produtoMaisCaro = 0, auxMaiorMill = 0;

    cout << "Loja de Informática\n";

    while ((continuar = cin.get()) == 's'   ) {
        cout << "Produto: ";
        cin.ignore();
        cin.getline(nomeProduto, 15);

        cout << "Preço: ";
        cin >> valorProduto;

        // salvando o produto mais caro para exibir
        if(valorProduto > produtoMaisCaro){
            strcpy(nomeProdutoMaisCaro , nomeProduto);
            produtoMaisCaro = valorProduto;
        }
        // incrementa se o valor for maior que 1000
        if(valorProduto > 1000)
            auxMaiorMill++;
        // valor total da compra
        somaCompra+= valorProduto;

        cin.ignore(); // limpa o buffer para o cin do continuar seja chamado
        cout << "Deseja continuar [S/N]? ";
    }

    cout << "Total da compra:  R$"<< somaCompra ;
    cout << "\n" << auxMaiorMill<< " produtos custam mais de R$1000.\n";
    cout << nomeProdutoMaisCaro <<" é o produto mais caro.\n";
}
