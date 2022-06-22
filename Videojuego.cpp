#include "./Headers/Videojuego.h"

    Videojuego::Videojuego(){}
    Videojuego::Videojuego(string nombre, string desc, int costo, int totalHoras, Usuario* desarrollador, map<string,Categoria*> categorias, map<string,Suscripcion*> suscripciones, map<int,Partida*> partidas){
        this->nombre = nombre;
        this->desc = desc;
        this->costo = costo;
        this->totalHoras = totalHoras;
        this->desarrollador = desarrollador;
        this->categorias = categorias;
        this->suscripciones = suscripciones;
        this->partidas = partidas;
    }
    string Videojuego::getNombre(){
        return this->nombre;
    }
    void Videojuego::setNombre(string nombre){
        this->nombre = nombre;
    }
    string Videojuego::getDesc(){
        return this->desc;
    }
    void Videojuego::setDesc(string desc){
        this->desc = desc;
    }
    int Videojuego::getCosto(){
        return this->costo;
    }
    void Videojuego::setCosto(int costo){
        this->costo = costo;
    }
    int Videojuego::getTotalHoras(){
        return this->totalHoras;
    }
    void Videojuego::setTotalHoras(int totalHoras){
        this->totalHoras = totalHoras;
    }
    Usuario* Videojuego::getDesarrollador(){
        return this->desarrollador; //actulizated 7/6/22  nou room scape here
    }
    void Videojuego::setDesarrollador(Usuario* desarrollador){
        this->desarrollador = desarrollador;
    }
    map<string,Categoria*> Videojuego::getCategorias(){
        return this->categorias;
    }
    void Videojuego::setCategorias(map<string,Categoria*> categorias){
        this->categorias = categorias;
    }
    map<string,Suscripcion*> Videojuego::getSuscripciones(){
        return this->suscripciones;
    }
    void Videojuego::setSuscripciones(string id, Suscripcion* sus){
        this->suscripciones.insert({id, sus});
    }
    map<int,Partida*> Videojuego::getPartidas(){
        return this->partidas;
    }
    void Videojuego::setPartidas(int id, Partida* par){
        this->partidas.insert({id, par});
    }

    Videojuego::~Videojuego(){}   