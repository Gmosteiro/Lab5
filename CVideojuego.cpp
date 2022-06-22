#include "./Headers/CVideojuego.h"

    void CVideojuego::CVideojuego::verInformacionVideojuego(){

    }
    void CVideojuego::eliminarVideojuego(){

    }
    bool CVideojuego::agregarVideojuego(){
        Sesion* s = Sesion::getInstancia();
        ManejadorVideojuego* mv = ManejadorVideojuego::getInstancia();
        map<string, Suscripcion*> sus;
        map<int, Partida*> par;
        Videojuego* v = new Videojuego(nombre, desc, costo, 0, s->getUser(), cat, sus, par);
        return mv->agregarVideojuego(v);
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
