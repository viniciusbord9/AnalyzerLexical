#include "../include/Token.h"

Token::Token(){

}

Token::~Token()
{
    //dtor
}

void
Token::setType(TYPE type){
    this->type = type;
    return;
}

void
Token::insertChar(char caracter){
    this->token.push_back(caracter);
}

void
Token::setToken(char caracter){
    this->token.push_back(caracter);
}

string
Token::getToken(){
    return this->token;
}

string
Token::getType(){
    if(this->type == num)
        return "num";
    if(this->type == literal)
        return "literal";
    if(this->type == _token)
        return "token";
    return "nulo";
}
