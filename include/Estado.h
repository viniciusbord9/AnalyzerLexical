#ifndef ESTADO_H
#define ESTADO_H
#include "../include/Token.h"
#include "../Type.h"
#include "ListTokens.h"

class Estado
{
    public:
        Estado(int estado);
        virtual ~Estado();
        void setValor(char valor);
        void setEstado(int valor);
        int getEstado();
        char getValor();
        ListTokens* getListTokens();
        void insertTokenList();
        Token* getToken();
    protected:
    private:
        int estado;
        char valor;
        Token *token;
        ListTokens *listtokens;

};

#endif // ESTADO_H
