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
        this->nickname=nickname;
        this->desc=desc;
    }
    void CUsuario::cancelar(){}
 
    