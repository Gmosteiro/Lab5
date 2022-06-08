#include "CCategoria.h"

bool CCategoria::agregarCategoria(){

    Categoria* cat = new Categoria(genero, plataforma, desc);
    ManejadorCategoria* mc = ManejadorCategoria::getInstancia();
    return mc->agregarCategoria(cat);

}
void CCategoria::ingresarGenero(string genero){
    this->
}
void CCategoria::ingresarPlataforma(string plataforma){

}
void CCategoria::ingresarDesc(string desc){

}

void CCategoria::cancelar(){
//cancela
}