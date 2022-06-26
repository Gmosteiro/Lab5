#include "./Headers/Partida.h"

    Partida::Partida(){}
    Partida::Partida(int id, Jugador* user, DTFechaHora* fechaHora, int duracion){
        this->id = id;
        this->user = user;
        this->fechaHora = fechaHora;
        this->duracion = duracion;
    }
    int Partida::getId(){
        return this->id;
    }
    void Partida::setID(int id){
        this->id = id;
    } 
    Jugador* Partida::getUsuario(){
        return this->user;
    }
    void Partida::setUsuario(Jugador* user){
        this->user = user;
    }
    DTFechaHora* Partida::getDTFechaHora(){
        return this->fechaHora;
    }
    void Partida::setDTFechaHora(DTFechaHora* fechaHora){
        this->fechaHora = fechaHora;
    }
    int Partida::getDuracion(){
        return this->duracion;
    }
    void Partida::setDuracion(int duracion){
        this->duracion = duracion;
    }
    Partida::~Partida(){}   