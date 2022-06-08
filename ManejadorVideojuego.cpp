#include "./Headers/ManejadorVideojuego.h"

ManejadorVideojuego::ManejadorVideojuego(){}

ManejadorVideojuego* ManejadorVideojuego::instancia = NULL;

ManejadorVideojuego*  ManejadorVideojuego::getInstancia(){
    if(instancia == NULL)
        instancia = new ManejadorVideojuego();
    return instancia;
}

list<Videojuego*> ManejadorVideojuego::getVideojuegos(){
    list<Videojuego*> aux;
    for(map<string,Videojuego*>::iterator it = this->colVideojuegos.begin(); it != this->colVideojuegos.end(); it++)
        aux.push_back(it->second);
    return aux;
}

Videojuego* ManejadorVideojuego::getVideojuego(string nombre){
    Videojuego* aux = NULL;
    map<string,Videojuego*>::iterator it = this->colVideojuegos.find(nombre);
    if (it != colVideojuegos.end()){
        aux = it->second;
    }
    return aux;
}

void ManejadorVideojuego::removerVideojuego(Videojuego* game){
    map<string,Videojuego*>::iterator it = this->colVideojuegos.find(game->getNombre());
    this->colVideojuegos.erase(it);
}

bool ManejadorVideojuego::agregarVideojuego(Videojuego* game){
    this->colVideojuegos.insert({game->getNombre(), game});
    return existeVideojuego(game->getNombre());
}

bool ManejadorVideojuego::existeVideojuego(string nombre){
    map<string,Videojuego*>::iterator it = this->colVideojuegos.find(nombre);    
    return  (it != this->colVideojuegos.end());
}



ManejadorVideojuego::~ManejadorVideojuego(){}