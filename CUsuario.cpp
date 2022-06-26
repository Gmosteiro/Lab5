#include "./Headers/CUsuario.h"


    bool CUsuario::altaUsuario(){

        bool inserted = false;
        if(!(nickname.empty())){
            Usuario* j = new Jugador(email, pass, nickname, desc);
            ManejadorUsuario* mu = ManejadorUsuario::getInstancia();
            inserted = mu->agregarUsuario(j);
        }else{
            Usuario* d = new Desarrollador(email, pass, nomEmp);
            ManejadorUsuario* mu = ManejadorUsuario::getInstancia();
            inserted = mu->agregarUsuario(d);
        }
        return inserted;
    }
    bool CUsuario::datosComunes(string email, string pass){
        bool retorno = false;
        ManejadorUsuario* mu = ManejadorUsuario::getInstancia();
        this->email = email;
        this->pass = pass;
        if(mu->existeUsuario(email))
            retorno = true;

        return retorno;
    }
    void CUsuario::datosEmpresa(string nomEmp){
        this->nomEmp = nomEmp;
    }
    bool CUsuario::datosJugador(string nickname, string desc){
        this->desc=desc;
        this->nickname=nickname;
        ManejadorUsuario* mu = ManejadorUsuario::getInstancia();
            
        map<string,Usuario*> aux=mu->getUsuarios();
        map<string,Jugador*> auxJ;

        for(map<string,Usuario*>::iterator it = aux.begin(); it != aux.end(); it++)
        {
            Jugador* jug = dynamic_cast<Jugador*>(it->second);
                if(jug != NULL)
                { 
                    Jugador* P = new Jugador(jug->getEmail(), jug->getPass(),jug->getNick(),jug->getDesc());
                    auxJ.insert({P->getNick(),P});
                }
                //throw argument
        }

        map<string,Jugador*>::iterator it = auxJ.find(nickname);    
        return  it != auxJ.end();

}
    void CUsuario::cancelar(){}
 
    