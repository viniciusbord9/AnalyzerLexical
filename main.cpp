#include <iostream>
#include "include/Analisador.h"

using namespace std;

int main()
{
    string path;
    cout << "Insira o caminho do arquivo (PARA TESTE UTILIZE 'teste.c' 'teste.html')" << endl;
    cin >> path;
    Analisador a(path);

    return 0;
}
