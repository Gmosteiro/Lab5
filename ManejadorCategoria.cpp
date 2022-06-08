#include "./Headers/ManejadorCategoria.h"

ManejadorCategoria::ManejadorCategoria(){}

ManejadorCategoria* ManejadorCategoria::instancia = NULL;

ManejadorCategoria* ManejadorCategoria::getInstancia(){
    if(instancia == NULL)
        instancia = new ManejadorCategoria();
        return instancia;
}

list<Categoria*> ManejadorCategoria::getCategorias(){
    list<Categoria*> aux;
    for(map<int,Categoria*>::iterator it = this->colCategorias.begin(); 
    it != this->colCategorias.end(); it++)
        aux.push_back(it->second);
    return aux;
}

Categoria* ManejadorCategoria::getCategoria(int codigo){
    Categoria* aux = NULL;
    map<int,Categoria*>::iterator it = this->colCategorias.find(codigo);
    if (it != colCategorias.end()){
        aux = it->second;
    }
    return aux;
}

void ManejadorCategoria::removerCategoria(Categoria* cat){
    map<int,Categoria*>::iterator it = this->colCategorias.find(cat->getId());
    this->colCategorias.erase(it);
}

bool ManejadorCategoria::existeCategoria(int codigo){
    map<int,Categoria*>::iterator it = this->colCategorias.find(codigo);    
    return  (it != this->colCategorias.end());
}

bool ManejadorCategoria::agregarCategoria(Categoria* cat){
    cat->setId(this->colCategorias.size()+1);
    this->colCategorias.insert({cat->getId(), cat});
    return existeCategoria(cat->getId());
}
                
ManejadorCategoria::~ManejadorCategoria(){}
