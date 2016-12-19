#ifndef TOKEN_H
#define TOKEN_H
#include <string>
#include "../Type.h"


using namespace std;

class Token
{
    public:
        Token();
        virtual ~Token();
        void setType(TYPE type);
        void insertChar(char caracter);
        void setToken(char caracter);
        string getToken();
        string getType();
    protected:
    private:
        TYPE type;
        string token;
};


#endif // TOKEN_H
