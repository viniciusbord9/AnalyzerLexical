#include "../include/Analisador.h"

Analisador::Analisador(string path)
{
    this->path = path;
    this->listtokens = new ListTokens();
    openSource();
}

Analisador::~Analisador()
{

}

bool Analisador::openSource()
{
    try
    {
        file.open(this->path.c_str());
        char caracter;
        string tken;
        int linha =0 ;
        if(!file.is_open())
        {
            cout << "O arquivo não pode ser aberto!";
            return 1;
        }
        Estado estado(0);
        while( file )
        {
            file.get(caracter);

            switch(estado.getEstado())
            {

                case 0: switch(caracter){
                            case '\n': estado.setEstado(0);break;
                            case ' ': estado.setEstado(0);break;
                            case '!':  estado.setValor(caracter);estado.setEstado(10);break;
                            case '=':  estado.setValor(caracter);estado.setEstado(13);break;
                            case '<':  estado.setValor(caracter);estado.setEstado(16);break;
                            case '>':  estado.setValor(caracter);estado.setEstado(19);break;
                            case '|':  estado.setValor(caracter);estado.setEstado(22);break;
                            case '&':  estado.setValor(caracter);estado.setEstado(25);break;
                            case '[':  estado.setValor(caracter);estado.setEstado(28);break;
                            case ']':  estado.setValor(caracter);estado.setEstado(29);break;
                            case ',':  estado.setValor(caracter);estado.setEstado(30);break;
                            case '(':  estado.setValor(caracter);estado.setEstado(31);break;
                            case ')':  estado.setValor(caracter);estado.setEstado(32);break;
                            case '+':  estado.setValor(caracter);estado.setEstado(33);break;
                            case '-':  estado.setValor(caracter);estado.setEstado(34);break;
                            case '*':  estado.setValor(caracter);estado.setEstado(35);break;
                            case '/':  estado.setValor(caracter);estado.setEstado(36);break;
                            case '%':  estado.setValor(caracter);estado.setEstado(37);break;
                            case ';':  estado.setValor(caracter);estado.setEstado(38);break;

                            case '"':  estado.setValor(caracter);estado.setEstado(41);break;
                            case '}':  estado.setValor(caracter);estado.setEstado(43);break;
                            case '{':  estado.setValor(caracter);estado.setEstado(43);break;

                            default : if(isdigit(caracter)){estado.setValor(caracter);estado.setEstado(1);}
                                      else{
                                        if(isalpha(caracter)){estado.setValor(caracter);estado.setEstado(39);}
                                        else{estado.setEstado(44);}
                                      }
                        }
                        break;
                case 1: switch(caracter){
                            case '\n' :estado.setEstado(7);break;
                            case '.' : estado.setValor(caracter);estado.setEstado(2);break;
                            case ';' : estado.setEstado(7);break;
                            case '+' : estado.setEstado(7);break;
                            case '-' : estado.setEstado(7);break;
                            case '*' : estado.setEstado(7);break;
                            case '/' : estado.setEstado(7);break;
                            case '%' : estado.setEstado(7);break;
                            case '&' : estado.setEstado(7);break;
                            case '|' : estado.setEstado(7);break;
                            case '>' : estado.setEstado(7);break;
                            case '<' : estado.setEstado(7);break;
                            case '=' : estado.setEstado(7);break;
                            case '!' : estado.setEstado(7);break;
                            case '{' : estado.setEstado(7);break;
                            case '}' : estado.setEstado(7);break;
                            case '[' : estado.setEstado(7);break;
                            case ']' : estado.setEstado(7);break;
                            case ')' : estado.setEstado(7);break;
                            case '(' : estado.setEstado(7);break;
                            default: if(isdigit(caracter)){

                                            estado.setValor(caracter);
                                            estado.setEstado(1);
                                     }else{
                                            estado.setEstado(44);
                                     }
                                     break;
                        }
                        break;
                case 2 : switch(caracter){
                                case '.' : estado.setValor(caracter);estado.setEstado(2);break;
                                case ';' : estado.setEstado(45);break;
                                case '+' : estado.setEstado(45);break;
                                case '-' : estado.setEstado(45);break;
                                case '*' : estado.setEstado(45);break;
                                case '/' : estado.setEstado(45);break;
                                case '%' : estado.setEstado(45);break;
                                case '&' : estado.setEstado(45);break;
                                case '|' : estado.setEstado(45);break;
                                case '>' : estado.setEstado(45);break;
                                case '<' : estado.setEstado(45);break;
                                case '=' : estado.setEstado(45);break;
                                case '!' : estado.setEstado(45);break;
                                case '{' : estado.setEstado(45);break;
                                case '}' : estado.setEstado(45);break;
                                case '[' : estado.setEstado(45);break;
                                case ']' : estado.setEstado(45);break;
                                case ')' : estado.setEstado(45);break;
                                case '(' : estado.setEstado(45);break;
                                default : if(isdigit(caracter)){
                                                estado.setEstado(3);
                                            }
                                            else{
                                                estado.setEstado(45);
                                            }
                                            break;
                            }
                            break;
                case 3 : switch(caracter){
                        case '.' : estado.setEstado(8);break;
                        case ';' : estado.setEstado(8);break;
                        case '+' : estado.setEstado(8);break;
                        case '-' : estado.setEstado(8);break;
                        case '*' : estado.setEstado(8);break;
                        case '/' : estado.setEstado(8);break;
                        case '%' : estado.setEstado(8);break;
                        case '&' : estado.setEstado(8);break;
                        case '|' : estado.setEstado(8);break;
                        case '>' : estado.setEstado(8);break;
                        case '<' : estado.setEstado(8);break;
                        case '=' : estado.setEstado(8);break;
                        case '!' : estado.setEstado(8);break;
                        case '{' : estado.setEstado(8);break;
                        case '}' : estado.setEstado(8);break;
                        case '[' : estado.setEstado(8);break;
                        case ']' : estado.setEstado(8);break;
                        case ')' : estado.setEstado(8);break;
                        case '(' : estado.setEstado(8);break;

                        case ' ': estado.setEstado(8);
                            break;
                        default:if(isdigit(caracter)){
                                    estado.setValor(caracter);
                                    estado.setEstado(3);
                                    }
                                else{
                                    estado.setEstado(8);
                                }
                                break;
                        }
                        break;
                case 39 : if(isdigit(caracter) || isalpha(caracter)){
                                estado.setValor(caracter);
                                estado.setEstado(39);
                          }
                          else
                                estado.setEstado(40);
                          break;
                case 41 : if(caracter == '"')
                            estado.setEstado(42);
                          else
                            estado.setEstado(41);
                          break;

                case 10 : switch(caracter) {
                            case '=' : estado.setValor(caracter);estado.setEstado(11);break;
                            default :
                                estado.setEstado(12); break;
                        }
               default : cout<< "erro na linha" << linha;
                         break;
            }
        }
        file.close();
        estado.getListTokens()->printTokens();
        return true;
    }
    catch(...)
    {
        cout << "erro ao abrir o arquivo";
        return false;
    }
}

bool Analisador::erro(int linha, string erro){
    cout << "erro na linha :" << linha <<" erro no caracter" << erro;
    false;
}
