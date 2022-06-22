#include "./Headers/CPartida.h"

    void CPartida::iniciarPartida(){
        int id = this->videojuego->getPartidas().size();
        time_t t = time(NULL);
	    tm* timePtr = localtime(&t);    
        DTFechaHora *fecha = new DTFechaHora(timePtr->tm_mday, (timePtr->tm_mon+1), (timePtr->tm_year+1900), timePtr->tm_hour, timePtr->tm_min);
        Sesion* s = Sesion::getInstancia();

        if(this->tipo==S){
            
            Partida* p = new PartidaIndividual(id, s->getUser(), *fecha, this->duracion, this->continua);
            this->videojuego->setPartidas(id, p);

        }else{

            Partida* p = new PartidaMultijugador(id, s->getUser(), *fecha, this->duracion, this->enVivo, this->cantJug);
            this->videojuego->setPartidas(id, p);

        }
    }

    bool CPartida::selectVideojuego(string game, map<string, Videojuego*> sus){
        bool retorno = false;

        map<string,Videojuego*>::iterator it = sus.find(game);
        if (it != sus.end()){
            this->videojuego = it->second;
            retorno = true;
        }

        return retorno;
    }
    void CPartida::continuaPartida(bool continua){
        this->continua = continua;
    }
    void CPartida::datosMultijugador(bool enVivo, int cantJug){
        this->enVivo = enVivo;
        this->cantJug = cantJug;
    }
    void CPartida::ingresarDuracion(int duracion){
        this->duracion = duracion;
    }
    void CPartida::ingresarTipoPartida(TipoPartida tipo){
        this->tipo = tipo;
    }
    void CPartida::cancelar(){}