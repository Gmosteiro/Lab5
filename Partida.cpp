#include "./Headers/Partida.h"

    Partida::Partida(){}
    Partida::Partida(int id, Usuario* user, DTFechaHora* fechaHora, int duracion){
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
    Usuario* Partida::getUsuario(){
        return this->user;
    }
    void Partida::setUsuario(Usuario* user){
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