#include <cstring>
#include <iostream>
using namespace std;


int main(){
    char data1[12];
    char data2[12];
    char data3[12];
    char natal[12] = "natal";
    char message[52];
    cout << "Quais suas datas comemorativas preferidas? " << endl;
    cin.getline(data1,12);
    cin.getline(data2, 12);
    cin.getline(data3, 12);

    cout << data1 << ", " << data2 << ", "<< data3<< " " << " são belas festas." << endl;
    if(strcmp(data1,natal)==0 || strcmp(data2,natal)==0 || strcmp(data3,natal)==0)
    {
        strcpy(message, "O Natal também é uma das minhas datas preferidas!");
        cout << message << endl;
    }



}
