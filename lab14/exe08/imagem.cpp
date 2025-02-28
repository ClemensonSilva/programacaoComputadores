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
    mostrarDetalhes(*ptr);
}

void mostrarDetalhes(Imagem &imagem){
    cout << "A imagem '" << imagem.nome << "' com tamanho "<<
    imagem.altura <<"x" << imagem.largura ;

    if(imagem.tipoImagem==0)
        cout << " tem formato JPG" << endl;
    else if(imagem.tipoImagem==1)
        cout << " tem formato PNG" << endl;
    else if(imagem.tipoImagem==2)
        cout << " tem formato BMP" << endl;

}
