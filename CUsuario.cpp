#include "./Headers/CUsuario.h"


    bool CUsuario::altaUsuario(){

        bool inserted = false;
        if(nickname.empty()){
            Jugador* j = new Jugador(email, pass, nickname, desc);
            ManejadorUsuario* mu = ManejadorUsuario::getInstancia();
            inserted = mu->agregarUsuario(j);
        }else{
            Desarrollador* d = new Desarrollador(email, pass, nomEmp);
            ManejadorUsuario* mu = ManejadorUsuario::getInstancia();
            inserted = mu->agregarUsuario(d);
        }
        return inserted;
    }
    void CUsuario::datosComunes(string email, string pass){
        this->email = email;
        this->pass = pass;
    }
    void CUsuario::datosEmpresa(string nomEmp){
        this->nomEmp = nomEmp;
    }
    bool CUsuario::datosJugador(string nickname, string desc){
        this->desc=desc;
        this->nickname=nickname;
        ManejadorUsuario* mu = ManejadorUsuario::getInstancia();
            
        map<string,Usuario*> auxj=mu->getUsuarios();
        map<string,Jugador*> aux;

        map<string,Usuario*>::iterator iter = auxj.begin();;

        while(iter != auxj.end())
        {
            Jugador* jug = dynamic_cast<Jugador*>(&*iter);
                if(jug != NULL)
                    {                
                        Jugador* P = new Jugador(jug->getEmail(), jug->getPass(),jug->getNick(),jug->getDesc());
                        aux.insert({jug->getNick(),jug});
                    }
        }
        
        
            
        



    return  NULL;

        
        
    }
    void CUsuario::cancelar(){}
 
    