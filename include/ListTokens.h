#ifndef LISTTOKENS_H
#define LISTTOKENS_H
#include <iostream>
#include <vector>
#include "../include/Token.h"

using namespace std;


class ListTokens
{
    public:
        ListTokens();
        virtual ~ListTokens();
        void insertToken(Token *token);
        vector<Token> getTokens();
        void printTokens();
    protected:
    private:
        vector<Token> tokens;
};

#endif // LISTTOKENS_H
