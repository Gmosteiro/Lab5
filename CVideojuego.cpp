#include "./Headers/CVideojuego.h"

    void CVideojuego::CVideojuego::verInformacionVideojuego(){

    }
    void CVideojuego::eliminarVideojuego(){

    }
    bool CVideojuego::agregarVideojuego(){
        Sesion* s = Sesion::getInstancia();
        ManejadorVideojuego* mv = ManejadorVideojuego::getInstancia();
        map<string, Suscripcion*> sus;
        Videojuego* v = new Videojuego(nombre, desc, costo, 0, s->getUser(), cat, sus);
        return mv->agregarVideojuego(v);
    }
    void CVideojuego::iniciarPartida(){}
    //CUNFUSED UNGA BUNGA 

    void CVideojuego::ingresarNombre(string nombre){
        this->nombre = nombre;
    }
    void CVideojuego::ingresarDescripcion(string desc){
        this->desc = desc;
    }
    void CVideojuego::ingresarCosto(int costo){
        this->costo = costo;
    }
    void CVideojuego::ingresarCantJugadores(int cantJugadores){
        this->cantJugadores = cantJugadores;
    }
    void CVideojuego::ingresarDuracion(int duracion){
        this->duracion = duracion;
    }
    void CVideojuego::ingresarContinua(bool continua){
        this->continua = continua;
    }
    void CVideojuego::ingresarTrasmitido(bool transmitido){
        this->transmitido = transmitido;
    }
    bool CVideojuego::ingresarCategoria(string id){
        bool salida = false;
        ManejadorCategoria* mc = ManejadorCategoria::getInstancia();
        Categoria* cat;
            if(mc->existeCategoria(id) && !(this->cat.count(id))){
                cat=mc->getCategoria(id);
                this->cat.insert({id,cat});
                salida = true;
            }
        return salida;
    }
    void CVideojuego::cancelar(){}
