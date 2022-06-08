#include "CCategoria.h"

bool CCategoria::agregarCategoria(){

    Categoria* cat = new Categoria(NULL, genero, plataforma, desc);
    ManejadorCategoria* mc = ManejadorCategoria::getInstancia();
    return mc->agregarCategoria(cat);

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
//cancela
}