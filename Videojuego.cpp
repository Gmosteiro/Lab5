#include "./Headers/Videojuego.h"

    Videojuego::Videojuego(){}
    Videojuego::Videojuego(string nombre, string desc, int costo, Usuario* desarrollador, map<string,Categoria*> categorias, map<string,Suscripcion*> suscripciones, map<int,Partida*> partidas){
        this->nombre = nombre;
        this->desc = desc;
        this->costo = costo;
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
    DTVideojuego* Videojuego::getDTVideojuego(){
        
        Desarrollador* des = dynamic_cast<Desarrollador*>(this->desarrollador);
        map<string,DTCategoria*> cat;
        int horas = 0;

        for(map<string,Categoria*>::iterator it = this->categorias.begin(); it != this->categorias.end(); it++){
            cat.insert({it->second->getId(),it->second->getDTCategoria()});
        }

        for(map<int,Partida*>::iterator it = this->partidas.begin(); it != this->partidas.end(); it++)
        {
            PartidaIndividual* pi = dynamic_cast<PartidaIndividual*>(it->second);

            if(pi!=NULL)
            {
                horas += pi->getDuracion();                
            }else{            
                PartidaMultijugador* pm = dynamic_cast<PartidaMultijugador*>(it->second);
                if(pm!=NULL)
                {
                    horas += pm->getDuracion()*pm->getCantJugadores();
                }
            }
        }

        DTVideojuego* dt = new DTVideojuego(this->nombre,this->desc,des->getNomEmp(),this->costo, cat, horas);
        return dt;  
    }

    void Videojuego::borrarSuscripcionVideojuego(Usuario* user){

        map<string,Suscripcion*>::iterator it = this->suscripciones.find(user->getEmail());
        if (it != this->suscripciones.end())      
            this->suscripciones.erase(user->getEmail());

    }
        
    Videojuego::~Videojuego(){

        for(map<string,Suscripcion*>::iterator it = this->suscripciones.begin(); it != this->suscripciones.end(); it++){
            this->suscripciones.erase(it);
        }

        for(map<int,Partida*>::iterator it = this->partidas.begin(); it != this->partidas.end(); it++){
            this->partidas.erase(it);
        }
    }  //destructor 