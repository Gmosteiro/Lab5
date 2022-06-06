#include "Suscripcion.h"

    Suscripcion::Suscripcion(){}
    Suscripcion::Suscripcion(DTFechaHora fechaHora, TipoPago tipo){
        this->fechaHora = fechaHora;
        this->tipo = tipo;
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
    Suscripcion::~Suscripcion(){} 