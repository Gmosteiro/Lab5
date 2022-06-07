#include "CCategoria.h"

bool CCategoria::agregarCategoria(){

    Categoria* cat = new Categoria(genero, plataforma, desc);
    ManejadorCategoria* mc = ManejadorCategoria::getInstancia();
    return mc->agregarCategoria(cat);

}
void CCategoria::ingresarDatos(string genero, string plataforma, string desc){
    this->genero = genero;
    this->plataforma=plataforma;
    this->desc=desc;
}
void CCategoria::cancelar(){
//cancela
}