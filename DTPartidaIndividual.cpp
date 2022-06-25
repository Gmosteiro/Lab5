#include "./Datatypes/DTPartidaIndividual.h"

    DTPartidaIndividual::DTPartidaIndividual(){}
    DTPartidaIndividual::DTPartidaIndividual(int id, Usuario* user, DTFechaHora* fechaHora, int duracion, bool continua){
        setID(id);
        setUsuario(user);
        setDTFechaHora(fechaHora);
        setDuracion(duracion);
        this->continua = continua;
    }
    bool DTPartidaIndividual::getContinua(){
        return this->continua;
    }
    void DTPartidaIndividual::setContinua(bool continua){
        this->continua = continua;
    }
    DTPartidaIndividual::~DTPartidaIndividual(){}
      //CUNFUSED UNGA BUNGA

    ostream& operator <<(ostream& salida,DTPartidaIndividual& dtpi){
        cout << "ID: " << dtpi.getId() << " | Mail del usuario: " << dtpi.getUsuario()->getEmail() << " | Fecha de la partida: " << *(dtpi.getDTFechaHora()) << " | Duracion: " << dtpi.getDuracion() << " | Partida continuada: " << dtpi.getOpcion(dtpi.continua) << endl;
    return salida;
    }