#include "Jugador.h"

    Jugador::Jugador(){}
    Jugador::Jugador(string nick, string desc){
        this->nick = nick;
        this->desc = desc;
    }
    string Jugador::getNick(){
        return this->nick;
    }
    void Jugador::setNick(string nick){
        this->nick = nick;
    }
    string Jugador::getDesc(){
        return this->desc;
    }
    void Jugador::setDesc(string desc){
        this->desc = desc;
    }
    Jugador::~Jugador(){}   