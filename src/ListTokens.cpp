#include "../include/ListTokens.h"

ListTokens::ListTokens()
{
    //ctor
}

ListTokens::~ListTokens()
{
    //dtor
}

void
ListTokens::insertToken(Token *token)
{
    this->tokens.push_back(*token);
    return;
}

void
ListTokens::printTokens(){
    Token token;
    for(int i=0; i< this->tokens.size();i++){
        token = this->tokens[i];
        cout << "\n" << token.getToken() <<" : tipo : " << token.getType();
    }
}
