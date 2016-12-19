#include "../include/Estado.h"

Estado::Estado(int estado)
{
    this->estado = estado;
    this->token = new Token();
    this->listtokens = new ListTokens();
}

Estado::~Estado()
{
    //dtor
}
int
Estado::getEstado(){
    return this->estado;
}

void
Estado::insertTokenList(){
    this->listtokens->insertToken(this->token);
}

void
Estado::setValor(char valor){
    this->valor = valor;
    this->token->setToken(valor);
}

void
Estado::setEstado(int estado){

    if(estado == 0)
        this->token = new Token();

    if(estado>=33 && estado<=38){
        this->token->setType(operador);
        this->listtokens->insertToken(this->token);
        this->setEstado(0);
        return;
    }

    if(estado>=28 && estado<=32){
        this->token->setType(naum_sei);
        this->listtokens->insertToken(this->token);
        this->setEstado(0);
        return;
    }

    if(estado==7 || estado== 45 || estado==8 || estado == 9){
        this->token->setType(num);
        this->listtokens->insertToken(this->token);
        this->setEstado(0);
        return;
    }

    if(estado == 40){
        this->token->setType(_token);
        this->listtokens->insertToken(this->token);
        this->setEstado(0);
        return;
    }

    if(estado == 11){
        this->token->setType(operador);
        this->listtokens->insertToken(this->token);
        this->setEstado(0);
        return;
    }

    this->estado = estado;
}

Token*
Estado::getToken(){
    return this->token;
}

char
Estado::getValor(){
    return this->valor;
}

ListTokens*
Estado::getListTokens()
{
    return this->listtokens;
}
