#include "./Headers/Puntaje.h"

    Puntaje::Puntaje(){}
    Puntaje::Puntaje(int puntaje, Jugador* jug){
        this->puntaje = puntaje;
        this->jugador = jug;        
    }
    int Puntaje::getPuntaje(){
        return this->puntaje;
    }
    void Puntaje::setPuntaje(int puntaje){
        this->puntaje = puntaje;
    }
    Jugador* Puntaje::getJugador(){
        return this->jugador;
    }
    void Puntaje::setJugador(Jugador* jugador){
        this->jugador = jugador;
    }
    Puntaje::~Puntaje(){}   