#include "./Headers/CSuscripcion.h"

bool CSuscripcion::suscribirseAVideojuego(){
    return false;
}
        
map<string, DTSuscripcion*> CSuscripcion::listarSuscripcionesJugador(){

    Sesion* s = Sesion::getInstancia();
    ManejadorVideojuego* mv = ManejadorVideojuego::getInstancia();
    map<string, DTSuscripcion*> dtSusJ;
    map<string, Videojuego*> aux = mv->getVideojuegos();

    for(map<string,Videojuego*>::iterator it = aux.begin(); it != aux.end(); it++){

    map<string, Suscripcion*> susJ = it->second->getSuscripciones();

    map<string,Suscripcion*>::iterator its = susJ.find(s->getUser()->getEmail());
        if (its != susJ.end()){
        DTSuscripcion* sus = new DTSuscripcion(it->second->getNombre(), it->second->getCosto());
        dtSusJ.insert({sus->getNombre(), sus});
    }

    }

    return dtSusJ;

}
map<string, DTSuscripcion*> CSuscripcion::listarRestoSuscripciones(){

    ManejadorVideojuego* mv = ManejadorVideojuego::getInstancia();

    map<string, DTSuscripcion*> susJug = listarSuscripcionesJugador();
    map<string, DTSuscripcion*> restoSus;
    map<string, Videojuego*> aux = mv->getVideojuegos();

    for(map<string,Videojuego*>::iterator it = aux.begin(); it != aux.end(); it++){

        map<string,DTSuscripcion*>::iterator its = susJug.find(it->first);
        if (its == susJug.end()){

            DTSuscripcion* sus = new DTSuscripcion(it->second->getNombre(), it->second->getCosto());
            restoSus.insert({sus->getNombre(), sus});

        }

    }

    return restoSus;
}

bool CSuscripcion::nombreVideojuego(string nombre){

    bool salida = false;

    map<string, DTSuscripcion*> susJug = listarSuscripcionesJugador();
    map<string, DTSuscripcion*> restoSus = listarRestoSuscripciones();

    map<string,DTSuscripcion*>::iterator it = susJug.find(nombre);
        if (it == susJug.end()){

            map<string,DTSuscripcion*>::iterator its = restoSus.find(nombre);
            if (it != susJug.end()){
                salida = true;
            }
            
        }
    return salida;

}
void CSuscripcion::tipoPago(TipoPago tipo){

}
void CSuscripcion::cancelar(){

}