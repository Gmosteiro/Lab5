#include "./Datatypes/DTPartida.h"

    DTPartida::DTPartida(){}
    DTPartida::DTPartida(int id, Usuario* user, DTFechaHora* fechaHora, int duracion){
        this->id = id;
        this->user = user;
        this->fechaHora = fechaHora;
        this->duracion = duracion;
    }
    int DTPartida::getId(){
        return this->id;
    }
    void DTPartida::setID(int id){
        this->id = id;
    }
    Usuario* DTPartida::getUsuario(){
        return this->user;
    }
    void DTPartida::setUsuario(Usuario* user){
        this->user = user;
    }
    DTFechaHora* DTPartida::getDTFechaHora(){
        return this->fechaHora;
    }
    void DTPartida::setDTFechaHora(DTFechaHora* fechaHora){
        this->fechaHora = fechaHora;
    }
    int DTPartida::getDuracion(){
        return this->duracion;
    }
    void DTPartida::setDuracion(int duracion){
        this->duracion = duracion;
    }
    string DTPartida::getOpcion(bool opcion){
        if(true){
            return "SI"; 
        }else{
            return "NO"; 
        }
    }
    DTPartida::~DTPartida(){}   