#include "./Headers/CSuscripcion.h"


void CSuscripcion::suscribirseAVideojuego(){
    
    ManejadorVideojuego* mv = ManejadorVideojuego::getInstancia();
    Sesion* s = Sesion::getInstancia();

    Videojuego* vid = mv->getVideojuego(this->nombre);

    time_t t = time(NULL);
	tm* timePtr = localtime(&t);    
    DTFechaHora *fecha = new DTFechaHora(timePtr->tm_mday, (timePtr->tm_mon+1), (timePtr->tm_year+1900), timePtr->tm_hour, timePtr->tm_min);

    Suscripcion* sus = new Suscripcion(*fecha, this->tipo, s->getUser());

    vid->setSuscripciones(s->getUser()->getEmail(),sus);
    }

void CSuscripcion::cancelarSuscripcion(){

    ManejadorVideojuego* mv = ManejadorVideojuego::getInstancia();
    Sesion* s = Sesion::getInstancia();

    mv->getVideojuego(this->nombre)->borrarSuscripcionVideojuego(s->getUser());   
        
}
        
map<string, Videojuego*> CSuscripcion::listarSuscripcionesJugador(){

    Sesion* s = Sesion::getInstancia();
    ManejadorVideojuego* mv = ManejadorVideojuego::getInstancia();
    map<string, Videojuego*> vidSusJ;
    map<string, Videojuego*> aux = mv->getVideojuegos();

    for(map<string,Videojuego*>::iterator it = aux.begin(); it != aux.end(); it++){

    map<string, Suscripcion*> susJ = it->second->getSuscripciones();

    map<string,Suscripcion*>::iterator its = susJ.find(s->getUser()->getEmail());
        if (its != susJ.end()){
        vidSusJ.insert({it->first, it->second});
        }

    }

    return vidSusJ;

}
map<string, Videojuego*> CSuscripcion::listarRestoSuscripciones(){

    ManejadorVideojuego* mv = ManejadorVideojuego::getInstancia();

    map<string, Videojuego*> susJug = listarSuscripcionesJugador();
    map<string, Videojuego*> restoSus;
    map<string, Videojuego*> aux = mv->getVideojuegos();

    for(map<string,Videojuego*>::iterator it = aux.begin(); it != aux.end(); it++){

        map<string,Videojuego*>::iterator its = susJug.find(it->first);
        if (its == susJug.end()){

            restoSus.insert({it->first, it->second});

        }

    }

    return restoSus;
}

bool CSuscripcion::nombreVideojuego(string nombre){

    bool salida = false;

    map<string, Videojuego*> susJug = listarSuscripcionesJugador();
    map<string, Videojuego*> restoSus = listarRestoSuscripciones();

    map<string,Videojuego*>::iterator it = susJug.find(nombre);
        if (it == susJug.end()){

            map<string,Videojuego*>::iterator its = restoSus.find(nombre);
            if (its != restoSus.end()){
                this->nombre=nombre;
                salida = true;
            }
            
        }
    return salida;

}

bool CSuscripcion::nombreVideojuegoSuscrito(string nombre){

    bool salida = false;

    map<string, Videojuego*> susJug = listarSuscripcionesJugador();

    map<string,Videojuego*>::iterator it = susJug.find(nombre);
        if (it != susJug.end()){
            this->nombre=nombre;
            salida = true;            
        }
    return salida;

}

void CSuscripcion::tipoPago(TipoPago tipo){
    this->tipo = tipo;
}
void CSuscripcion::cancelar(){

}