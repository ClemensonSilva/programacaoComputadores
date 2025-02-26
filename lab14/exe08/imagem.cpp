#include <complex>
#include <cstring>
#include <iostream>
using namespace std;

enum tipo{JPG,PNG,BMP};
struct Imagem{
    char nome[25];
    int altura, largura;
    tipo tipoImagem;
};

void mostrarDetalhes(Imagem &);
int main()
{
    Imagem imagem;
    strcpy(imagem.nome, "pousoLua");
    imagem.altura = 1920;
    imagem.largura = 1080;
    imagem.tipoImagem = JPG;

    Imagem *ptr = &imagem;
    mostrarDetalhes(&imagem);
}


void mostrarDetalhes(Imagem &imagem){
    Imagem *ptr ;
    *ptr = imagem;
    cout << "A imagem " << ptr->nome << "com tamanho "<<
    ptr->altura <<"x" << ptr->largura << "tem formato " <<
    ptr->tipoImagem<< endl;
}
