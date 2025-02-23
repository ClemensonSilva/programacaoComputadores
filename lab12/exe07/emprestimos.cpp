#include <iostream>
#include <string>
using namespace std;

struct Livro{
    char nome[15];
    char autor[15];
    char editora[15];
};
struct Jogo {
    char nome[15];
    char studio[15];
    char plataforma[10];
};

int main(){
    Jogo jogoEmp[5];
    Livro livroEmp[5];
    int decisao;

    cout << "Livro emprestado -1" <<endl;
    cout << "Jogo emprestado -2" <<endl;
    cin >> decisao;

    if(decisao ==1){
        cout << "Nome do livro: " << endl;
        cin.ignore();
        cin.getline(livroEmp[1].nome, 15);
        cout << "Autor do livro: " << endl;
        cin.getline(livroEmp[1].autor,15);
        cout << "Editoras do livro: " << endl;
        cin.getline(livroEmp[1].editora,15);

        cout << "Nome do livro: " << livroEmp[1].nome<< endl;
        cout << "Autor do livro  : " <<  livroEmp[1].autor<<endl;
        cout << "Editora: " << livroEmp[1].editora << endl;
    }
    else if(decisao==2){
        cout << "Nome do jogo: " << endl;
        cin.ignore();
        cin.getline(jogoEmp[1].nome, 15);
        cout << "Estudio do jogo: " << endl;
        cin.getline(jogoEmp[1].studio,15);
        cout << "Plataforma do jogo: " << endl;
        cin.getline(jogoEmp[1].plataforma,10);

        cout << "Nome do jogo: " << jogoEmp[1].nome<< endl;
        cout << "Estudio do jogo  : " <<  jogoEmp[1].studio<<endl;
        cout << "Plataforma: " << jogoEmp[1].plataforma << endl;
    }


}
