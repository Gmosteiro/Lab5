#include "./Headers/PartidaMultijugador.h"
    PartidaMultijugador::PartidaMultijugador(){}
    PartidaMultijugador::PartidaMultijugador(int id, Jugador* user, DTFechaHora* fechaHora, int duracion, bool transmitido, int cantJugadores){
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
    DTPartida* PartidaMultijugador::getDTPartida(){
        DTPartida* dtpm = new DTPartidaMultijugador(this->getId(), this->getUsuario(), this->getDTFechaHora(), this->getDuracion(), this->transmitido, this->cantJugadores);
        return dtpm;
    }
    PartidaMultijugador::~PartidaMultijugador(){}