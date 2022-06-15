#include "./Headers/CSesion.h"
#include <string>

    void CSesion::ingresaEmail(string email){
        this->email=email;
    }
    bool CSesion::verificarPass(string pass){
        this->pass=false;
        ManejadorUsuario* mu = ManejadorUsuario::getInstancia();
        Usuario* u = mu->getUsuario(email);

        if(u!=0)
        {
            if(u->getPass().compare(pass)==0)
            {
                this->pass=true;
            }
        }
        return this->pass;
    }

    bool CSesion::iniciarSesion(){
        ManejadorUsuario* mu = ManejadorUsuario::getInstancia();
        Sesion* ses = Sesion::getInstancia();
        if(mu->existeUsuario(email) && this->pass)
        {
            ses->setUser(mu->getUsuario(this->email));
            ses->setEstado(true);    
        }
        else    
        {
            ses->setEstado(false);
        }
        return ses->getEstado();
    }

    bool CSesion::cerrarSesion(){
        
        Sesion* ses = Sesion::getInstancia();
        bool retorno = false;

        if(ses->getEstado()){
            ses->setUser(NULL);
            ses->setEstado(false);
            retorno = true;
        }
        return retorno;
    }

    void CSesion::cancelar(){}







