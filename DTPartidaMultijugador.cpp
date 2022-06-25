#include "./Datatypes/DTPartidaMultijugador.h"
    DTPartidaMultijugador::DTPartidaMultijugador(){}
    DTPartidaMultijugador::DTPartidaMultijugador(int id, Usuario* user, DTFechaHora* fechaHora, int duracion, bool transmitido, int cantJugadores){
        setID(id);
        setUsuario(user);
        setDTFechaHora(fechaHora);
        setDuracion(duracion);
        this->transmitido = transmitido;
        this->cantJugadores = cantJugadores;
    }
    bool DTPartidaMultijugador::getTransmitido(){
        return this->transmitido;
    }
    void DTPartidaMultijugador::setTransmitido(bool transmitido){
        this->transmitido = transmitido;
    }
    int DTPartidaMultijugador::getCantJugadores(){
        return this->cantJugadores;
    }
    void DTPartidaMultijugador::setCantJugadores(int cantJugadores){
        this->cantJugadores = cantJugadores;
    }
    DTPartidaMultijugador::~DTPartidaMultijugador(){}

    ostream& operator <<(ostream& salida,DTPartidaMultijugador& dtpm){
        cout << "ID: " << dtpm.getId() << " | Mail del usuario: " << dtpm.getUsuario()->getEmail() << " | Fecha de la partida: " << *(dtpm.getDTFechaHora()) << " | Duracion: " << dtpm.getDuracion() << " | Cantidad de jugadores: " << dtpm.cantJugadores << " | Transmitido en vivo: " << dtpm.getOpcion(dtpm.transmitido) << endl;
    return salida;
    }