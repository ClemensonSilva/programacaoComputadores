# include <iostream>
using namespace std;
int main(){
  float largura,comprimento,altura,aBase, volume;

  cout << "Lado a: " << endl;
  cin >> largura;

  cout << "Lado b: " << endl;
  cin >> comprimento;

  aBase = largura*comprimento;
  cout << "Área da base = " <<  aBase << endl;

  cout << "Altura: " << endl;
  cin >> altura;

  volume = altura*aBase;
  cout << "Volume do prisma = " <<  volume;


  return 0;
}
