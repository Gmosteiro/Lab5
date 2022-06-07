#include "ManejadorCategoria.h"

ManejadorCategoria::ManejadorCategoria(){}

ManejadorCategoria* ManejadorCategoria::instancia = NULL;

ManejadorCategoria* ManejadorCategoria::getInstancia(){
    if(instancia == NULL)
        instancia = new ManejadorCategoria();
        return instancia;
}

void ManejadorCategoria::setKey(string data){
    
    key = data;

    std::for_each(key.begin(), key.end(), [](char & upperKey) {
        upperKey = ::toupper(upperKey);
    });
}

list<Categoria*> ManejadorCategoria::getCategorias(){
    list<Categoria*> aux;
    for(map<string,Categoria*>::iterator it = this->colCategorias.begin(); 
    it != this->colCategorias.end(); it++)
        aux.push_back(it->second);
    return aux;
}

Categoria* ManejadorCategoria::getCategoria(string codigo){

    setKey(codigo);
    
    Categoria* aux = NULL;
    map<string,Categoria*>::iterator it = this->colCategorias.find(key);
    if (it != colCategorias.end()){
        aux = it->second;
    }
    return aux;
}

void ManejadorCategoria::removerCategoria(Categoria* cat){

    setKey(cat->getGenero()+'_'+cat->getPlataforma());

    map<string,Categoria*>::iterator it = this->colCategorias.find(key);
    this->colCategorias.erase(it);
}

bool ManejadorCategoria::existeCategoria(string codigo){

    setKey(codigo);
    
    map<string,Categoria*>::iterator it = this->colCategorias.find(key);    
    return  (it != this->colCategorias.end());
}

bool ManejadorCategoria::agregarCategoria(Categoria* cat){

    setKey(cat->getGenero()+'_'+cat->getPlataforma());

    this->colCategorias.insert({key, cat});
    return existeCategoria(key);
}
                
ManejadorCategoria::~ManejadorCategoria(){}
