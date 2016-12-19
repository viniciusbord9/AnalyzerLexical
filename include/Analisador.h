#ifndef ANALISADOR_H
#define ANALISADOR_H
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include "../include/Token.h"
#include "../include/Estado.h"
#include "ListTokens.h"

using namespace std;


class Analisador
{
    public:
        Analisador(string);
        virtual ~Analisador();
    protected:
    private:
        string path;
        ifstream file;
        ListTokens *listtokens;
        bool openSource();
        bool erro(int linha,string erro);

};

#endif // ANALISADOR_H
