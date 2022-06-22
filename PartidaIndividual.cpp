#include "./Headers/PartidaIndividual.h"

    PartidaIndividual::PartidaIndividual(){}
    PartidaIndividual::PartidaIndividual(int id, Usuario* user, DTFechaHora fechaHora, int duracion, bool continua){
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
    PartidaIndividual::~PartidaIndividual(){}
      //CUNFUSED UNGA BUNGA