#include "./Headers/CCategoria.h"

bool CCategoria::agregarCategoria(){

    Categoria* cat = new Categoria("", genero, plataforma, desc);
    ManejadorCategoria* mc = ManejadorCategoria::getInstancia();
    return mc->agregarCategoria(cat);

}

map<string, DTCategoria*> CCategoria::listarCategorias(){
    ManejadorCategoria* mc = ManejadorCategoria::getInstancia();
    map<string, Categoria*> aux = mc->getCategorias();
    map<string, DTCategoria*> auxC;

    for(map<string,Categoria*>::iterator it = aux.begin(); it != aux.end(); it++)
        auxC.insert({it->first,it->second->getDTCategoria()});
    return auxC;
}
void CCategoria::ingresarGenero(string genero){
    this->genero = genero;
}
void CCategoria::ingresarPlataforma(string plataforma){
    this->plataforma = plataforma;
}
void CCategoria::ingresarDesc(string desc){
    this->desc = desc;
}

void CCategoria::cancelar(){
//cancela.png
}