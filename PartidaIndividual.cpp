#include "./Headers/PartidaIndividual.h"

    PartidaIndividual::PartidaIndividual(){}
    PartidaIndividual::PartidaIndividual(int id, Jugador* user, DTFechaHora* fechaHora, int duracion, bool continua){
        setID(id);
        setUsuario(user);
        setDTFechaHora(fechaHora);
        setDuracion(duracion);
        this->continua = continua;
    }
    bool PartidaIndividual::getContinua(){
        return this->continua;
    }
    void PartidaIndividual::setContinua(bool continua){
        this->continua = continua;
    }
    DTPartida* PartidaIndividual::getDTPartida(){
        DTPartida* dtpi = new DTPartidaIndividual(this->getId(), this->getUsuario(), this->getDTFechaHora(), this->getDuracion(), this->continua);
        return dtpi;
    }
    PartidaIndividual::~PartidaIndividual(){}
      //CUNFUSED UNGA BUNGA
