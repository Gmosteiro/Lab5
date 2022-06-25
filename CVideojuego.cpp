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
        Videojuego* v = new Videojuego(nombre, desc, costo, s->getUser(), cat, sus, par);
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
        bool retorno = false;

        Videojuego* v = mv->getVideojuego(this->nombre);

        if(v!=NULL)
            retorno = true;
        
        return retorno;
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
    
    void CVideojuego::cancelar(){}
