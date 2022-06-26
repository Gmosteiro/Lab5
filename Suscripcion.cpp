#include "./Headers/Suscripcion.h"

    Suscripcion::Suscripcion(){}
    Suscripcion::Suscripcion(DTFechaHora fechaHora, TipoPago tipo, Jugador* jugador){
        this->fechaHora = fechaHora;
        this->tipo = tipo;
        this->jugador = jugador;
    }
    DTFechaHora Suscripcion::getDTFechaHora(){
        return this->fechaHora;
    }
    void Suscripcion::setDTFechaHora(DTFechaHora fechaHora){
        this->fechaHora = fechaHora;
    }
    TipoPago Suscripcion::getTipoPago(){
        return this->tipo;
    }
    void Suscripcion::setTipoPago(TipoPago tipo){
        this->tipo = tipo;
    }
    Jugador* Suscripcion::getJugador(){
        return this->jugador;
    }
    void Suscripcion::setJugador(Jugador* jugador){
        this->jugador = jugador;
    }

    Suscripcion::~Suscripcion(){} 