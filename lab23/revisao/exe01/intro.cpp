#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin;
    fin.open("intro.txt");
    if (!fin.is_open())
{
    cout << "Abertura do arquivo falhou!" << endl;
    cout << "Programa encerrando.\n";
    exit(EXIT_FAILURE);
}
    char ch;
    int i = 0;
    while (!(fin.fail())) {
        ch =  fin.get();
        if(ch == ' ' )
            cout << ch;

        i++;
    }
        fin.close();
    return 0;
}

       // if(i==8) oitavo caractere
       //     cout << ch << endl;
