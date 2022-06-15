#include "./Headers/Sesion.h"

Sesion* Sesion::instancia = NULL;

Sesion::Sesion(){}

Sesion* Sesion::getInstancia(){
    if(instancia == NULL)
        instancia = new Sesion();
    return instancia;
}

Usuario* Sesion::getUser(){
    return this->user;
}
void Sesion::setUser(Usuario* user){
    this->user = user;
}

bool Sesion::getEstado(){
    return this->estado;
}
void Sesion::setEstado(bool estado){
    this->estado = estado;
}

Sesion::~Sesion(){}
