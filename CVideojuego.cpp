#include "./Headers/CVideojuego.h"

    DTVideojuego* CVideojuego::CVideojuego::verInformacionVideojuego(){
        DTVideojuego* dt = NULL;
        ManejadorVideojuego* mv = ManejadorVideojuego::getInstancia();
        Videojuego* v = mv->getVideojuego(this->nombre);
        if(v!=NULL)
            dt=v->getDTVideojuego();
       
        return dt;
    }
    void CVideojuego::eliminarVideojuego(){
        ManejadorVideojuego* mv = ManejadorVideojuego::getInstancia();
        mv->removerVideojuego(mv->getVideojuego(this->nombre));
    }
    bool CVideojuego::agregarVideojuego(){
        Sesion* s = Sesion::getInstancia();
        ManejadorVideojuego* mv = ManejadorVideojuego::getInstancia();
        map<string, Suscripcion*> sus;
        map<int, Partida*> par;
        map<string,Puntaje*> pun;
        Desarrollador* des = dynamic_cast<Desarrollador*>(s->getUser());
        Videojuego* v = new Videojuego(nombre, desc, costo, des, cat, sus, par, pun);
        return mv->agregarVideojuego(v);
    }

    void CVideojuego::asignarPuntaje(){
        Sesion* s = Sesion::getInstancia();
        Jugador* jug = dynamic_cast<Jugador*>(s->getUser());
        ManejadorVideojuego* mv = ManejadorVideojuego::getInstancia();

        Videojuego* v = mv->getVideojuego(this->nombre);
        
        map<string,Puntaje*>::iterator it = v->getPuntajes().find(jug->getNick());    
        if(it != v->getPuntajes().end()){
            it->second->setPuntaje(this->puntuacion);
        }else{
            Puntaje* p = new Puntaje(this->puntuacion, jug);
            v->setPuntajes(jug->getNick(), p);
        }        
    }

    list <Videojuego*> CVideojuego::buscarPorCategoria(){

        ManejadorVideojuego* mv = ManejadorVideojuego::getInstancia();
        list <Videojuego*> retorno;
        map<string, Videojuego*> aux = mv->getVideojuegos();

        for(map<string,Videojuego*>::iterator it = aux.begin(); it != aux.end(); it++){ 
            Videojuego* v = it->second;   
            map<string, Categoria*> cat = v->getCategorias();
            map<string,Categoria*>::iterator itc = cat.find(this->nombre);    
            
            if(itc != cat.end()){
                list<Videojuego*>::iterator itr = retorno.begin();
                retorno.insert(itr, it->second);
                itr++;
            }
        }

        return retorno;

    }

    list <DTVideojuego*> CVideojuego::rankingVideojuegos(int opcion){

        ManejadorVideojuego* mv = ManejadorVideojuego::getInstancia();
        map<string, Videojuego*> aux = mv->getVideojuegos();
        list <DTVideojuego*> retorno;
        DTVideojuego* dt = NULL;

        for(map<string,Videojuego*>::iterator it = aux.begin(); it != aux.end(); it++){
            dt=it->second->getDTVideojuego();
            list<DTVideojuego*>::iterator itr = retorno.begin();
            retorno.insert(itr, dt);
            itr++;
        }
            
        //Listar por puntuacion(0) o por horas(1)
        if(opcion==0){

            retorno.sort([](DTVideojuego* & a, DTVideojuego* & b) { return a->getPuntaje() > b->getPuntaje(); });
            
        }else{

            retorno.sort([](DTVideojuego* & a, DTVideojuego* & b) { return a->getTotalHoras() > b->getTotalHoras(); });
            
        }

        return retorno;

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
    
    list <string> CVideojuego::listarVideojuegos(){
        ManejadorVideojuego* mv = ManejadorVideojuego::getInstancia();
        list <string> retorno;
        map<string, Videojuego*> aux = mv->getVideojuegos();

        for(map<string,Videojuego*>::iterator it = aux.begin(); it != aux.end(); it++){     
            list<string>::iterator itr = retorno.begin();
            retorno.insert(itr, it->first);
            itr++;
        }
            
        return retorno;
    }

    list <string> CVideojuego::listarVideojuegosDesarrollador(){
        ManejadorVideojuego* mv = ManejadorVideojuego::getInstancia();
        Sesion* s = Sesion::getInstancia();
        list <string> retorno;
        map<string, Videojuego*> aux = mv->getVideojuegos();

        for(map<string,Videojuego*>::iterator it = aux.begin(); it != aux.end(); it++){     
            list<string>::iterator itr = retorno.begin();
            
            if(it->second->getDesarrollador()==s->getUser()){
                retorno.insert(itr, it->first);
                itr++;
            }
            
        }
            
        return retorno;
    }

    list <Videojuego*> CVideojuego::listarNombreDescVideojuegos(){
        ManejadorVideojuego* mv = ManejadorVideojuego::getInstancia();
        map<string, Videojuego*> aux = mv->getVideojuegos();
        list <Videojuego*> retorno;

        for(map<string,Videojuego*>::iterator it = aux.begin(); it != aux.end(); it++){     
            list<Videojuego*>::iterator itr = retorno.begin();
                retorno.insert(itr, it->second);
                itr++;
        }
            
        return retorno;
    }

    bool CVideojuego::buscarJuegoDesarrollador(){
        ManejadorVideojuego* mv = ManejadorVideojuego::getInstancia();
        Sesion* s = Sesion::getInstancia();
        bool retorno = false;

        Videojuego* v = mv->getVideojuego(this->nombre);

        if(v!=NULL && v->getDesarrollador()==s->getUser()){
            retorno = true;
        }

        return retorno;
    }

    bool CVideojuego::buscarJuego(){
        ManejadorVideojuego* mv = ManejadorVideojuego::getInstancia();   
        return mv->existeVideojuego(this->nombre);
    }

    list <DTPartida*> CVideojuego::verPartidas(){
        
        ManejadorVideojuego* mv = ManejadorVideojuego::getInstancia();
        map<int,Partida*> partidas = mv->getVideojuego(this->nombre)->getPartidas();
        list <DTPartida*> retorno;

        for(map<int,Partida*>::iterator it = partidas.begin(); it != partidas.end(); it++){     
            list<DTPartida*>::iterator itr = retorno.begin();
                DTPartida* dtp = it->second->getDTPartida();
                retorno.insert(itr, dtp);        
            itr++;
        }
            
        return retorno;

    }

    void CVideojuego::ingresarPuntuacion(int puntuacion){
        this->puntuacion = puntuacion;
    }
    
    void CVideojuego::cancelar(){}
