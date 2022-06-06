#include "CVideojuego.h"

    void CVideojuego::CVideojuego::verInformacionVideojuego(){

    }
    void CVideojuego::eliminarVideojuego(){

    }
    void CVideojuego::agregarVideojuego(){

    }
    void CVideojuego::iniciarPartida(){

    }

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
    void CVideojuego::ingresarCategoria (DTCategoria dtCat, Categoria* cat){
        this->cat.insert({dtCat,cat});
    }