#include "Desarrollador.h"

    Desarrollador::Desarrollador(){}
    Desarrollador::Desarrollador(string email, string pass, string nomEmp){
        setEmail(email);
        setPass(pass);
        this->nomEmp = nomEmp;
    }
    string Desarrollador::getNomEmp(){
        return this->nomEmp;
    }
    void Desarrollador::setNomEmp(string nomEmp){
        this->nomEmp = nomEmp;
    }
    Desarrollador::~Desarrollador(){}  

    //certificado por la asociacion de PAFDLE 