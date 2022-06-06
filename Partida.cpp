#include "Partida.h"

    Partida::Partida(){}
    Partida::Partida(DTFechaHora fechaHora, int duracion){
        this->fechaHora = fechaHora;
        this->duracion = duracion;
    }
    DTFechaHora Partida::getDTFechaHora(){
        return this->fechaHora;
    }
    void Partida::setDTFechaHora(DTFechaHora fechaHora){
        this->fechaHora = fechaHora;
    }
    int Partida::getDuracion(){
        return this->duracion;
    }
    void Partida::setDuracion(int duracion){
        this->duracion = duracion;
    }
    Partida::~Partida(){}   