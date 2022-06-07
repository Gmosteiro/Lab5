#include "Videojuego.h"

    Videojuego::Videojuego(){}
    Videojuego::Videojuego(string nombre, string desc, int costo, int totalHoras){
        this->nombre = nombre;
        this->desc = desc;
        this->costo = costo;
        this->totalHoras = totalHoras;
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
    Videojuego::~Videojuego(){}   