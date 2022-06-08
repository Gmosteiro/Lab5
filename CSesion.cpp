#include "CSesion.h"
#include <string>

    void CSesion::ingresaEmail(string email){
        this->email=email;
    }
    bool CSesion::verificarPass(string pass){
        this->pass=false;
        ManejadorUsuario* mu = ManejadorUsuario::getInstancia();
        this->pass= mu->getUsuario(email)->getPass().compare(pass); 
        return this->pass;
    } 
    void CSesion::iniciarSesion(){
        ManejadorUsuario* mu = ManejadorUsuario::getInstancia();
        Sesion* ses = Sesion::getInstancia();
        if(mu->existeUsuario(email) && this->pass)
        {
            ses->setUser(mu->getUsuario(this->email));    
        }
    }
    void CSesion::cerrarSesion(){
        Sesion* ses = Sesion::getInstancia();
        ses->setUser(NULL);
    }







