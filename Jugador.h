#ifndef JUGADOR
#define JUGADOR
#include <string>
#include "Usuario.h"

using namespace std;

class Jugador: public Usuario{
private:
    string nick, desc;
public:
    Jugador();
    Jugador(string email, string pass, string nick, string desc);
    string getNick();
    void setNick(string nick);
    string getDesc();
    void setDesc(string desc);
    ~Jugador();   
};
#endif