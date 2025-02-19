#include <iostream>
using namespace std;


int main(){
   char nome[10];
   char data[12];
   char frase[50];

   cout << "Nome: " ;
   cin.getline(nome, 10);
   cout << "Data: " ;
   cin.getline(data,12);




   cout << nome <<  " esteve aqui em "<<data;


}
