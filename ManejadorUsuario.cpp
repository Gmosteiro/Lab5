#include "./Headers/ManejadorUsuario.h"

ManejadorUsuario::ManejadorUsuario(){}

ManejadorUsuario* ManejadorUsuario::instancia = NULL;

ManejadorUsuario*  ManejadorUsuario::getInstancia(){
    if(instancia == NULL)
        instancia = new ManejadorUsuario();
    return instancia;
}

map<string,Usuario*> ManejadorUsuario::getUsuarios(){
    map<string,Usuario*> aux;
    for(map<string,Usuario*>::iterator it = this->colUsuarios.begin(); it != this->colUsuarios.end(); it++)
        aux.insert({it->first,it->second});
    return aux;
}

Usuario* ManejadorUsuario::getUsuario(string email){
    Usuario* aux = NULL;
    map<string,Usuario*>::iterator it = this->colUsuarios.find(email);
    if (it != colUsuarios.end()){
        aux = it->second;
    }
    return aux;
}

void ManejadorUsuario::removerUsuario(Usuario* user){
    map<string,Usuario*>::iterator it = this->colUsuarios.find(user->getEmail());
    this->colUsuarios.erase(it);
}

bool ManejadorUsuario::agregarUsuario(Usuario* user){
    this->colUsuarios.insert({user->getEmail(), user});
    return existeUsuario(user->getEmail());
}

bool ManejadorUsuario::existeUsuario(string email){
    map<string,Usuario*>::iterator it = this->colUsuarios.find(email);    
    return  (it != this->colUsuarios.end());
}


ManejadorUsuario::~ManejadorUsuario(){}