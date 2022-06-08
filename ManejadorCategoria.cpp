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
    for(map<string,Categoria*>::iterator it = this->colCategorias.begin(); 
    it != this->colCategorias.end(); it++)
        aux.push_back(it->second);
    return aux;
}

Categoria* ManejadorCategoria::getCategoria(string codigo){
    Categoria* aux = NULL;
    map<string,Categoria*>::iterator it = this->colCategorias.find(codigo);
    if (it != colCategorias.end()){
        aux = it->second;
    }
    return aux;
}

void ManejadorCategoria::removerCategoria(Categoria* cat){
    map<string,Categoria*>::iterator it = this->colCategorias.find(cat->getId());
    this->colCategorias.erase(it);
}

bool ManejadorCategoria::existeCategoria(string codigo){
    map<string,Categoria*>::iterator it = this->colCategorias.find(codigo);    
    return  (it != this->colCategorias.end());
}

bool ManejadorCategoria::agregarCategoria(Categoria* cat){
    bool salida = false;
    cat->setId(setKey(cat->getGenero()+'_'+cat->getPlataforma()));
    if(!existeCategoria(cat->getId())){
        this->colCategorias.insert({cat->getId(), cat});
        salida = true;
    }
    return salida;
}

string ManejadorCategoria::setKey(string data){

    std::for_each(data.begin(), data.end(), [](char & upperKey) {
        upperKey = ::toupper(upperKey);
    });

    return data;    

}                
ManejadorCategoria::~ManejadorCategoria(){}
