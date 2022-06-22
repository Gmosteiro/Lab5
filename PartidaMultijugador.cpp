#include "./Headers/PartidaMultijugador.h"
    PartidaMultijugador::PartidaMultijugador(){}
    PartidaMultijugador::PartidaMultijugador(int id, Usuario* user, DTFechaHora fechaHora, int duracion, bool transmitido, int cantJugadores){
        setID(id);
        setUsuario(user);
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