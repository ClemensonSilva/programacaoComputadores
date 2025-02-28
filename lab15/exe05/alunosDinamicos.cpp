#include <iostream>
using namespace std;
enum situacao  {APROVADO, TRANCADO, REPROVADO};

struct alunos{
    char nome[25];
    int codDisciplina;
    situacao statusAluno;
};

void exibir(alunos *);

int main(){
    int numAlunos, status;

    cout << "Digite o número de alunos: ";
    cin >> numAlunos;

    alunos *aluno = new alunos[numAlunos];

    cout << "Primeiro aluno:\n ";
    cin.ignore();
    cout << "Nome do aluno: ";
    cin.getline(aluno[0].nome, 25);

    cout << "Codigo da disciplina: ";
    cin >> aluno[0].codDisciplina;

    cout << "Status do aluno: 1- APROVADO, 2- TRANCADO, 3- REPROVADO: ";
    cin >> status;

    status = status-1;

    if(status == 0)
        aluno[0].statusAluno = APROVADO ;
    else if (status == 1)
        aluno[0].statusAluno = TRANCADO ;
    else if (status == 2)
        aluno[0].statusAluno = REPROVADO ;

    alunos *ptr = &aluno[0];
    exibir(ptr);
    delete [] aluno;
}

void exibir(alunos * ptr){
    cout << "Dados do aluno: \nNome: " << ptr->nome << "\nCodigo da disciplina: " << ptr->codDisciplina;
    if(ptr->statusAluno == 0)
        cout << "\nStatus: APROVADO"  <<endl;
    else if (ptr->statusAluno == 1)
        cout << "\nStatus: TRANCADO"  <<endl;
    else if (ptr->statusAluno == 2)
        cout << "\nStatus: REPROVADO"  <<endl;

}
