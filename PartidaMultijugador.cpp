#include "PartidaMultijugador.h"
    PartidaMultijugador::PartidaMultijugador(){}
    PartidaMultijugador::PartidaMultijugador(DTFechaHora fechaHora, int duracion, bool transmitido, int cantJugadores){
        setDTFechaHora(fechaHora);
        setDuracion(duracion);
        this->transmitido = transmitido;
        this->cantJugadores = cantJugadores;
    }
    bool PartidaMultijugador::getTransmitido(){
        return this->transmitido;
    }
    void PartidaMultijugador::setTransmitido(bool transmitido){
        this->transmitido = transmitido;
    }
    int PartidaMultijugador::getCantJugadores(){
        return this->cantJugadores;
    }
    void PartidaMultijugador::setCantJugadores(int cantJugadores){
        this->cantJugadores = cantJugadores;
    }
    PartidaMultijugador::~PartidaMultijugador(){}